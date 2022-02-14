
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sg_table {int dummy; } ;
struct intel_context {int vm; } ;
struct i915_sleeve {int dummy; } ;
struct i915_page_sizes {int dummy; } ;
struct TYPE_2__ {int resv; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct clear_pages_work {int wait; int dma; int irq_work; int work; struct intel_context* ce; struct i915_sleeve* sleeve; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct i915_sleeve*) ;
 int FUNC_2 (struct i915_sleeve*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct i915_sleeve* FUNC_3 (int ,struct drm_i915_gem_object*,struct sg_table*,struct i915_page_sizes*) ;
 int FUNC_4 (struct i915_sleeve*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int *) ;
 int VAR_8 ;
 int FUNC_9 (struct drm_i915_gem_object*) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (int *,int ,int *,int,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 struct clear_pages_work* FUNC_15 (int,int ) ;

int FUNC_16(struct drm_i915_gem_object *VAR_9,
         struct intel_context *VAR_10,
         struct sg_table *VAR_11,
         struct i915_page_sizes *VAR_12,
         u32 VAR_13)
{
 struct clear_pages_work *VAR_14;
 struct i915_sleeve *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_10->vm, VAR_9, VAR_11, VAR_12);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 VAR_14 = FUNC_15(sizeof(*VAR_14), VAR_1);
 if (!VAR_14) {
  FUNC_4(VAR_15);
  return -VAR_0;
 }

 VAR_14->value = VAR_13;
 VAR_14->sleeve = VAR_15;
 VAR_14->ce = VAR_10;

 FUNC_0(&VAR_14->work, VAR_7);

 FUNC_14(&VAR_14->irq_work, VAR_4);

 FUNC_6(&VAR_14->dma, &VAR_6, &VAR_8, 0, 0);
 FUNC_13(&VAR_14->wait, VAR_5);

 FUNC_9(VAR_9);
 VAR_16 = FUNC_11(&VAR_14->wait,
           VAR_9->base.resv, ((void*)0),
           1, VAR_3,
           VAR_2);
 if (VAR_16 < 0) {
  FUNC_7(&VAR_14->dma, VAR_16);
 } else {
  FUNC_8(VAR_9->base.resv, &VAR_14->dma);
  VAR_16 = 0;
 }
 FUNC_10(VAR_9);

 FUNC_5(&VAR_14->dma);
 FUNC_12(&VAR_14->wait);

 return VAR_16;
}
