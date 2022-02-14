
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plane {scalar_t__ dma_addr; } ;
struct TYPE_2__ {int id; } ;
struct drm_framebuffer {TYPE_1__ base; struct drm_gem_object** obj; } ;
struct omap_framebuffer {struct plane* planes; int lock; struct drm_format_info const* format; struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {unsigned int* pitches; unsigned int height; scalar_t__ pixel_format; unsigned int* offsets; int width; } ;
struct drm_gem_object {unsigned int size; } ;
struct drm_format_info {int num_planes; unsigned int* cpp; int vsub; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (char*,struct drm_device*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct drm_device*,struct drm_framebuffer*,int *) ;
 struct drm_format_info* FUNC_6 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_7 (struct drm_device*,struct drm_framebuffer*,struct drm_mode_fb_cmd2 const*) ;
 scalar_t__* VAR_3 ;
 int FUNC_8 (struct omap_framebuffer*) ;
 struct omap_framebuffer* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int FUNC_11 (struct drm_gem_object*) ;

struct drm_framebuffer *FUNC_12(struct drm_device *VAR_5,
  const struct drm_mode_fb_cmd2 *VAR_6, struct drm_gem_object **VAR_7)
{
 const struct drm_format_info *VAR_8 = ((void*)0);
 struct omap_framebuffer *VAR_9 = ((void*)0);
 struct drm_framebuffer *VAR_10 = ((void*)0);
 unsigned int VAR_11 = VAR_6->pitches[0];
 int VAR_12, VAR_13;

 FUNC_1("create framebuffer: dev=%p, mode_cmd=%p (%dx%d@%4.4s)",
   VAR_5, VAR_6, VAR_6->width, VAR_6->height,
   (char *)&VAR_6->pixel_format);

 VAR_8 = FUNC_6(VAR_5, VAR_6);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_3); VAR_13++) {
  if (VAR_3[VAR_13] == VAR_6->pixel_format)
   break;
 }

 if (!VAR_8 || VAR_13 == FUNC_0(VAR_3)) {
  FUNC_3(VAR_5->dev, "unsupported pixel format: %4.4s\n",
   (char *)&VAR_6->pixel_format);
  VAR_12 = -VAR_0;
  goto fail;
 }

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_12 = -VAR_1;
  goto fail;
 }

 VAR_10 = &VAR_9->base;
 VAR_9->format = VAR_8;
 FUNC_10(&VAR_9->lock);






 if (VAR_8->num_planes == 2 && VAR_11 != VAR_6->pitches[1]) {
  FUNC_3(VAR_5->dev, "pitches differ between planes 0 and 1\n");
  VAR_12 = -VAR_0;
  goto fail;
 }

 if (VAR_11 % VAR_8->cpp[0]) {
  FUNC_3(VAR_5->dev,
   "buffer pitch (%u bytes) is not a multiple of pixel size (%u bytes)\n",
   VAR_11, VAR_8->cpp[0]);
  VAR_12 = -VAR_0;
  goto fail;
 }

 for (VAR_13 = 0; VAR_13 < VAR_8->num_planes; VAR_13++) {
  struct plane *VAR_14 = &VAR_9->planes[VAR_13];
  unsigned int VAR_15 = VAR_13 == 0 ? 1 : VAR_8->vsub;
  unsigned int VAR_16;

  VAR_16 = VAR_11 * VAR_6->height / VAR_15;

  if (VAR_16 > FUNC_11(VAR_7[VAR_13]) - VAR_6->offsets[VAR_13]) {
   FUNC_3(VAR_5->dev,
    "provided buffer object is too small! %zu < %d\n",
    VAR_7[VAR_13]->size - VAR_6->offsets[VAR_13], VAR_16);
   VAR_12 = -VAR_0;
   goto fail;
  }

  VAR_10->obj[VAR_13] = VAR_7[VAR_13];
  VAR_14->dma_addr = 0;
 }

 FUNC_7(VAR_5, VAR_10, VAR_6);

 VAR_12 = FUNC_5(VAR_5, VAR_10, &VAR_4);
 if (VAR_12) {
  FUNC_4(VAR_5->dev, "framebuffer init failed: %d\n", VAR_12);
  goto fail;
 }

 FUNC_1("create: FB ID: %d (%p)", VAR_10->base.id, VAR_10);

 return VAR_10;

fail:
 FUNC_8(VAR_9);

 return FUNC_2(VAR_12);
}
