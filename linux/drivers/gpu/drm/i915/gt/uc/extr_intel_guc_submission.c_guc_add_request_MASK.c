
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_guc_client {int dummy; } ;
struct intel_guc {struct intel_guc_client* execbuf_client; } ;
struct intel_engine_cs {int guc_id; } ;
struct TYPE_3__ {int seqno; } ;
struct i915_request {TYPE_1__ fence; int tail; int ring; TYPE_2__* hw_context; struct intel_engine_cs* engine; } ;
struct TYPE_4__ {int lrc_desc; } ;


 int FUNC_0 (struct intel_guc_client*) ;
 int FUNC_1 (struct intel_guc_client*,int ,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_guc *VAR_0, struct i915_request *VAR_1)
{
 struct intel_guc_client *VAR_2 = VAR_0->execbuf_client;
 struct intel_engine_cs *VAR_3 = VAR_1->engine;
 u32 VAR_4 = FUNC_3(VAR_1->hw_context->lrc_desc);
 u32 VAR_5 = FUNC_2(VAR_1->ring, VAR_1->tail) / sizeof(u64);

 FUNC_1(VAR_2, VAR_3->guc_id, VAR_4,
      VAR_5, VAR_1->fence.seqno);
 FUNC_0(VAR_2);
}
