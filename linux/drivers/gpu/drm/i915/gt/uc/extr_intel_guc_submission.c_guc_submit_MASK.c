
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_guc_client {int wq_lock; } ;
struct intel_guc {struct intel_guc_client* execbuf_client; } ;
struct intel_engine_cs {TYPE_3__* gt; } ;
struct i915_request {TYPE_1__* ring; } ;
struct TYPE_5__ {struct intel_guc guc; } ;
struct TYPE_6__ {TYPE_2__ uc; } ;
struct TYPE_4__ {int vma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_guc*,struct i915_request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0,
         struct i915_request **VAR_1,
         struct i915_request **VAR_2)
{
 struct intel_guc *VAR_3 = &VAR_0->gt->uc.guc;
 struct intel_guc_client *VAR_4 = VAR_3->execbuf_client;

 FUNC_2(&VAR_4->wq_lock);

 do {
  struct i915_request *VAR_5 = *VAR_1++;

  FUNC_0(VAR_5->ring->vma);
  FUNC_1(VAR_3, VAR_5);
 } while (VAR_1 != VAR_2);

 FUNC_3(&VAR_4->wq_lock);
}
