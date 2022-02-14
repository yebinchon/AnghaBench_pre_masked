
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_format_info {int planes; int bpp; } ;
struct rcar_du_device {TYPE_1__* info; } ;
struct drm_mode_fb_cmd2 {unsigned int* pitches; int pixel_format; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; struct rcar_du_device* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 struct rcar_du_format_info* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct rcar_du_device*,int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_5(struct drm_device *VAR_2, struct drm_file *VAR_3,
    const struct drm_mode_fb_cmd2 *VAR_4)
{
 struct rcar_du_device *VAR_5 = VAR_2->dev_private;
 const struct rcar_du_format_info *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_3(VAR_4->pixel_format);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_2->dev, "unsupported pixel format %08x\n",
   VAR_4->pixel_format);
  return FUNC_0(-VAR_0);
 }

 if (VAR_5->info->gen < 3) {





  unsigned int VAR_10 = VAR_6->planes == 1 ? VAR_6->bpp / 8 : 1;

  VAR_7 = 4095 * VAR_10;

  if (FUNC_4(VAR_5, VAR_1))
   VAR_8 = 128;
  else
   VAR_8 = 16 * VAR_10;
 } else {





  VAR_7 = 65535;
  VAR_8 = 1;
 }

 if (VAR_4->pitches[0] & (VAR_8 - 1) ||
     VAR_4->pitches[0] > VAR_7) {
  FUNC_1(VAR_2->dev, "invalid pitch value %u\n",
   VAR_4->pitches[0]);
  return FUNC_0(-VAR_0);
 }

 for (VAR_9 = 1; VAR_9 < VAR_6->planes; ++VAR_9) {
  if (VAR_4->pitches[VAR_9] != VAR_4->pitches[0]) {
   FUNC_1(VAR_2->dev,
    "luma and chroma pitches do not match\n");
   return FUNC_0(-VAR_0);
  }
 }

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
