
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_execlists {int dummy; } ;
struct intel_engine_cs {int name; scalar_t__ context_size; scalar_t__ pinned_default_state; struct intel_engine_execlists execlists; } ;
struct intel_context {TYPE_1__* ring; int * lrc_reg_state; int state; int active; } ;
struct i915_request {int head; struct intel_context* hw_context; } ;
struct TYPE_4__ {int tail; int head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct intel_context*,struct intel_engine_cs*) ;
 int FUNC_3 (struct i915_request*,int) ;
 int FUNC_4 (struct intel_engine_cs*) ;
 struct i915_request* FUNC_5 (struct i915_request*) ;
 int FUNC_6 (struct intel_engine_execlists* const) ;
 struct i915_request* FUNC_7 (struct intel_engine_execlists* const) ;
 int FUNC_8 (int *,struct intel_context*,struct intel_engine_cs*,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct i915_request*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (int *,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct intel_engine_cs*) ;
 int FUNC_16 (struct intel_engine_cs*) ;

__attribute__((used)) static void FUNC_17(struct intel_engine_cs *VAR_2, bool VAR_3)
{
 struct intel_engine_execlists * const VAR_4 = &VAR_2->execlists;
 struct intel_context *VAR_5;
 struct i915_request *VAR_6;
 u32 *VAR_7;

 FUNC_15(VAR_2);


 FUNC_16(VAR_2);






 VAR_6 = FUNC_7(VAR_4);
 if (!VAR_6)
  goto unwind;

 VAR_5 = VAR_6->hw_context;
 FUNC_0(FUNC_9(&VAR_5->active));
 FUNC_0(!FUNC_11(VAR_5->state));
 VAR_6 = FUNC_5(VAR_6);
 if (!VAR_6) {
  VAR_5->ring->head = VAR_5->ring->tail;
  goto out_replay;
 }

 VAR_5->ring->head = FUNC_13(VAR_5->ring, VAR_6->head);
 if (!FUNC_10(VAR_6))
  goto out_replay;
 FUNC_3(VAR_6, VAR_3);
 if (!VAR_3)
  goto out_replay;
 VAR_7 = VAR_5->lrc_reg_state;
 if (VAR_2->pinned_default_state) {
  FUNC_14(VAR_7,
         VAR_2->pinned_default_state + VAR_0 * VAR_1,
         VAR_2->context_size - VAR_1);
 }
 FUNC_8(VAR_7, VAR_5, VAR_2, VAR_5->ring);

out_replay:
 FUNC_1("%s replay {head:%04x, tail:%04x\n",
    VAR_2->name, VAR_5->ring->head, VAR_5->ring->tail);
 FUNC_12(VAR_5->ring);
 FUNC_2(VAR_5, VAR_2);

unwind:

 FUNC_6(VAR_4);
 FUNC_4(VAR_2);
}
