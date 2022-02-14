
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_framebuffer {int base; struct nouveau_bo* nvbo; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct nouveau_bo {int dummy; } ;
struct drm_mode_fb_cmd2 {scalar_t__ pixel_format; int* pitches; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct drm_device*,int *,int *) ;
 int FUNC_2 (scalar_t__,struct drm_format_name_buf*) ;
 int FUNC_3 (struct drm_device*,int *,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_4 (struct nouveau_framebuffer*) ;
 struct nouveau_framebuffer* FUNC_5 (int,int ) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int VAR_8 ;

int
FUNC_7(struct drm_device *VAR_9,
   const struct drm_mode_fb_cmd2 *VAR_10,
   struct nouveau_bo *VAR_11,
   struct nouveau_framebuffer **VAR_12)
{
 struct nouveau_drm *VAR_13 = FUNC_6(VAR_9);
 struct nouveau_framebuffer *VAR_14;
 int VAR_15;


 if (VAR_13->client.device.info.family < VAR_7 &&

     (VAR_10->pixel_format == VAR_3 ||
      VAR_10->pixel_format == VAR_2 ||
      VAR_10->pixel_format == VAR_0 ||
      VAR_10->pixel_format == VAR_1) &&
     (VAR_10->pitches[0] & 0x3f ||
      VAR_10->pitches[0] >= 0x10000 ||
      (VAR_10->pitches[1] &&
       VAR_10->pitches[0] != VAR_10->pitches[1]))) {
  struct drm_format_name_buf VAR_16;
  FUNC_0("Unsuitable framebuffer: format: %s; pitches: 0x%x\n 0x%x\n",
         FUNC_2(VAR_10->pixel_format,
        &VAR_16),
         VAR_10->pitches[0],
         VAR_10->pitches[1]);
  return -VAR_4;
 }

 if (!(VAR_14 = *VAR_12 = FUNC_5(sizeof(*VAR_14), VAR_6)))
  return -VAR_5;

 FUNC_3(VAR_9, &VAR_14->base, VAR_10);
 VAR_14->nvbo = VAR_11;

 VAR_15 = FUNC_1(VAR_9, &VAR_14->base, &VAR_8);
 if (VAR_15)
  FUNC_4(VAR_14);
 return VAR_15;
}
