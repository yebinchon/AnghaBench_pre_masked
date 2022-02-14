
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_timeline_cacheline {int vaddr; TYPE_1__* hwsp; } ;
struct intel_timeline {int mutex; scalar_t__ hwsp_offset; struct intel_timeline_cacheline* hwsp_cacheline; } ;
struct i915_request {struct intel_timeline* timeline; struct intel_timeline_cacheline* hwsp_cacheline; } ;
struct TYPE_2__ {int vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct intel_timeline_cacheline*,struct i915_request*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct i915_request*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct i915_request *VAR_3,
        struct i915_request *VAR_4,
        u32 *VAR_5)
{
 struct intel_timeline_cacheline *VAR_6 = VAR_3->hwsp_cacheline;
 struct intel_timeline *VAR_7 = VAR_3->timeline;
 int VAR_8;

 FUNC_0(VAR_4->timeline == VAR_7);

 FUNC_5(&VAR_7->mutex, VAR_2);
 VAR_8 = FUNC_3(VAR_3);
 if (!VAR_8)
  VAR_8 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_8) {
  if (FUNC_4(VAR_6 == VAR_7->hwsp_cacheline)) {
   *VAR_5 = VAR_7->hwsp_offset;
  } else {
   *VAR_5 = FUNC_2(VAR_6->hwsp->vma) +
    FUNC_7(VAR_6->vaddr, VAR_0) *
    VAR_1;
  }
 }
 FUNC_6(&VAR_7->mutex);

 return VAR_8;
}
