
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** obj; } ;
struct psb_framebuffer {TYPE_1__ base; } ;
struct gtt_range {int gem; } ;
struct drm_mode_fb_cmd2 {int* pitches; } ;
struct drm_format_info {int* cpp; int depth; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct drm_device*,TYPE_1__*,int *) ;
 struct drm_format_info* FUNC_2 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_3 (struct drm_device*,TYPE_1__*,struct drm_mode_fb_cmd2 const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2,
     struct psb_framebuffer *VAR_3,
     const struct drm_mode_fb_cmd2 *VAR_4,
     struct gtt_range *VAR_5)
{
 const struct drm_format_info *VAR_6;
 int VAR_7;





 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_6 || !VAR_6->depth || VAR_6->cpp[0] > 4)
  return -VAR_0;

 if (VAR_4->pitches[0] & 63)
  return -VAR_0;

 FUNC_3(VAR_2, &VAR_3->base, VAR_4);
 VAR_3->base.obj[0] = &VAR_5->gem;
 VAR_7 = FUNC_1(VAR_2, &VAR_3->base, &VAR_1);
 if (VAR_7) {
  FUNC_0(VAR_2->dev, "framebuffer init failed: %d\n", VAR_7);
  return VAR_7;
 }
 return 0;
}
