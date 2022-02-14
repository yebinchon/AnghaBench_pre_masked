
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int * obj; TYPE_1__* format; scalar_t__ modifier; } ;
struct komeda_fb {int is_va; struct drm_framebuffer base; int format_caps; } ;
struct komeda_dev {scalar_t__ iommu; int fmt_tbl; } ;
struct drm_mode_fb_cmd2 {int pixel_format; int * modifier; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct komeda_dev* dev_private; } ;
struct TYPE_2__ {int num_planes; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,struct drm_framebuffer*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_5 (struct komeda_fb*) ;
 int FUNC_6 (struct komeda_fb*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 int VAR_3 ;
 int FUNC_7 (struct komeda_dev*,struct komeda_fb*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_8 (int *,int ,int ) ;
 struct komeda_fb* FUNC_9 (int,int ) ;

struct drm_framebuffer *
FUNC_10(struct drm_device *VAR_4, struct drm_file *VAR_5,
   const struct drm_mode_fb_cmd2 *VAR_6)
{
 struct komeda_dev *VAR_7 = VAR_4->dev_private;
 struct komeda_fb *VAR_8;
 int VAR_9 = 0, VAR_10;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_1(-VAR_1);

 VAR_8->format_caps = FUNC_8(&VAR_7->fmt_tbl,
        VAR_6->pixel_format,
        VAR_6->modifier[0]);
 if (!VAR_8->format_caps) {
  FUNC_0("FMT %x is not supported.\n",
         VAR_6->pixel_format);
  FUNC_5(VAR_8);
  return FUNC_1(-VAR_0);
 }

 FUNC_4(VAR_4, &VAR_8->base, VAR_6);

 if (VAR_8->base.modifier)
  VAR_9 = FUNC_6(VAR_8, VAR_5, VAR_6);
 else
  VAR_9 = FUNC_7(VAR_7, VAR_8, VAR_5, VAR_6);
 if (VAR_9 < 0)
  goto err_cleanup;

 VAR_9 = FUNC_2(VAR_4, &VAR_8->base, &VAR_3);
 if (VAR_9 < 0) {
  FUNC_0("failed to initialize fb\n");

  goto err_cleanup;
 }

 VAR_8->is_va = VAR_7->iommu ? 1 : 0;

 return &VAR_8->base;

err_cleanup:
 for (VAR_10 = 0; VAR_10 < VAR_8->base.format->num_planes; VAR_10++)
  FUNC_3(VAR_8->base.obj[VAR_10]);

 FUNC_5(VAR_8);
 return FUNC_1(VAR_9);
}
