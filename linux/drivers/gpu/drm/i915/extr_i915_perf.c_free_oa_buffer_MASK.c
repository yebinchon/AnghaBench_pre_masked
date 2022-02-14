
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * vaddr; int vma; } ;
struct i915_perf_stream {TYPE_2__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct i915_perf_stream *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_priv;

 FUNC_1(&VAR_2->drm.struct_mutex);

 FUNC_0(&VAR_1->oa_buffer.vma,
       VAR_0);

 FUNC_2(&VAR_2->drm.struct_mutex);

 VAR_1->oa_buffer.vaddr = ((void*)0);
}
