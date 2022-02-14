
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_file; } ;
struct TYPE_2__ {scalar_t__ size; int filp; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct vm_area_struct*) ;
 struct drm_i915_gem_object* FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dma_buf *VAR_2, struct vm_area_struct *VAR_3)
{
 struct drm_i915_gem_object *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_4->base.size < VAR_3->vm_end - VAR_3->vm_start)
  return -VAR_0;

 if (!VAR_4->base.filp)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_4->base.filp, VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_3->vm_file);
 VAR_3->vm_file = FUNC_3(VAR_4->base.filp);

 return 0;
}
