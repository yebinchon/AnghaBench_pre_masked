
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_format_info {int bpp; scalar_t__ yuv; } ;
struct drm_mode_fb_cmd2 {int* pitches; int pixel_format; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 struct shmob_drm_format_info* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_4(struct drm_device *VAR_1, struct drm_file *VAR_2,
      const struct drm_mode_fb_cmd2 *VAR_3)
{
 const struct shmob_drm_format_info *VAR_4;

 VAR_4 = FUNC_3(VAR_3->pixel_format);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_1->dev, "unsupported pixel format %08x\n",
   VAR_3->pixel_format);
  return FUNC_0(-VAR_0);
 }

 if (VAR_3->pitches[0] & 7 || VAR_3->pitches[0] >= 65536) {
  FUNC_1(VAR_1->dev, "invalid pitch value %u\n",
   VAR_3->pitches[0]);
  return FUNC_0(-VAR_0);
 }

 if (VAR_4->yuv) {
  unsigned int VAR_5 = VAR_4->bpp == 24 ? 2 : 1;

  if (VAR_3->pitches[1] != VAR_3->pitches[0] * VAR_5) {
   FUNC_1(VAR_1->dev,
    "luma and chroma pitches do not match\n");
   return FUNC_0(-VAR_0);
  }
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
