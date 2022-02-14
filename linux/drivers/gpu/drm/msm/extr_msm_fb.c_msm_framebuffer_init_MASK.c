
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {TYPE_1__* funcs; } ;
struct TYPE_4__ {int id; } ;
struct drm_framebuffer {TYPE_2__ base; struct drm_gem_object** obj; } ;
struct msm_framebuffer {struct drm_framebuffer base; struct msm_format const* format; } ;
struct msm_format {int dummy; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_mode_fb_cmd2 {int width; int height; unsigned int* pitches; unsigned int* offsets; int pixel_format; int * modifier; } ;
struct drm_gem_object {unsigned int size; } ;
struct drm_format_info {int num_planes; int hsub; int vsub; unsigned int* cpp; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
struct TYPE_3__ {struct msm_format* (* get_format ) (struct msm_kms*,int ,int ) ;} ;


 int FUNC_0 (struct drm_gem_object**) ;
 int FUNC_1 (char*,struct drm_device*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (struct drm_device*,struct drm_framebuffer*,int *) ;
 struct drm_format_info* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_6 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_7 (struct msm_framebuffer*) ;
 struct msm_framebuffer* FUNC_8 (int,int ) ;
 int VAR_3 ;
 struct msm_format* FUNC_9 (struct msm_kms*,int ,int ) ;

__attribute__((used)) static struct drm_framebuffer *FUNC_10(struct drm_device *VAR_4,
  const struct drm_mode_fb_cmd2 *VAR_5, struct drm_gem_object **VAR_6)
{
 const struct drm_format_info *VAR_7 = FUNC_5(VAR_4,
         VAR_5);
 struct msm_drm_private *VAR_8 = VAR_4->dev_private;
 struct msm_kms *VAR_9 = VAR_8->kms;
 struct msm_framebuffer *VAR_10 = ((void*)0);
 struct drm_framebuffer *VAR_11;
 const struct msm_format *VAR_12;
 int VAR_13, VAR_14, VAR_15;

 FUNC_1("create framebuffer: dev=%p, mode_cmd=%p (%dx%d@%4.4s)",
   VAR_4, VAR_5, VAR_5->width, VAR_5->height,
   (char *)&VAR_5->pixel_format);

 VAR_15 = VAR_7->num_planes;
 VAR_12 = VAR_9->funcs->get_format(VAR_9, VAR_5->pixel_format,
   VAR_5->modifier[0]);
 if (!VAR_12) {
  FUNC_2(VAR_4->dev, "unsupported pixel format: %4.4s\n",
    (char *)&VAR_5->pixel_format);
  VAR_13 = -VAR_0;
  goto fail;
 }

 VAR_10 = FUNC_8(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto fail;
 }

 VAR_11 = &VAR_10->base;

 VAR_10->format = VAR_12;

 if (VAR_15 > FUNC_0(VAR_11->obj)) {
  VAR_13 = -VAR_0;
  goto fail;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  unsigned int VAR_16 = VAR_5->width / (VAR_14 ? VAR_7->hsub : 1);
  unsigned int VAR_17 = VAR_5->height / (VAR_14 ? VAR_7->vsub : 1);
  unsigned int VAR_18;

  VAR_18 = (VAR_17 - 1) * VAR_5->pitches[VAR_14]
    + VAR_16 * VAR_7->cpp[VAR_14]
    + VAR_5->offsets[VAR_14];

  if (VAR_6[VAR_14]->size < VAR_18) {
   VAR_13 = -VAR_0;
   goto fail;
  }

  VAR_10->base.obj[VAR_14] = VAR_6[VAR_14];
 }

 FUNC_6(VAR_4, VAR_11, VAR_5);

 VAR_13 = FUNC_4(VAR_4, VAR_11, &VAR_3);
 if (VAR_13) {
  FUNC_2(VAR_4->dev, "framebuffer init failed: %d\n", VAR_13);
  goto fail;
 }

 FUNC_1("create: FB ID: %d (%p)", VAR_11->base.id, VAR_11);

 return VAR_11;

fail:
 FUNC_7(VAR_10);

 return FUNC_3(VAR_13);
}
