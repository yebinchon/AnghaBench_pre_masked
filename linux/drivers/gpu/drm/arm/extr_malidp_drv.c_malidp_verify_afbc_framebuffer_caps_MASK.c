
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int* modifier; scalar_t__* offsets; int width; int height; int pixel_format; } ;
struct drm_device {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,int ,int) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_1,
        const struct drm_mode_fb_cmd2 *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2->pixel_format,
     VAR_2->modifier[0]) == 0)
  return 0;

 if (VAR_2->offsets[0] != 0) {
  FUNC_0("AFBC buffers' plane offset should be 0\n");
  return 0;
 }

 switch (VAR_2->modifier[0] & VAR_0) {
 case 128:
  if ((VAR_2->width % 16) || (VAR_2->height % 16)) {
   FUNC_0("AFBC buffers must be aligned to 16 pixels\n");
   return 0;
  }
  break;
 default:
  FUNC_0("Unsupported AFBC block size\n");
  return 0;
 }

 return 1;
}
