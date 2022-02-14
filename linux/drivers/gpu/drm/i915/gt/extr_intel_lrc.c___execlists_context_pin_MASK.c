
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {int i915; } ;
struct intel_context {TYPE_1__* state; void* lrc_reg_state; int lrc_desc; int gem_context; } ;
struct TYPE_2__ {int obj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct intel_context*,struct intel_engine_cs*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct intel_context*) ;
 int FUNC_10 (struct intel_context*) ;
 int FUNC_11 (struct intel_context*,struct intel_engine_cs*) ;

__attribute__((used)) static int
FUNC_12(struct intel_context *VAR_3,
   struct intel_engine_cs *VAR_4)
{
 void *VAR_5;
 int VAR_6;

 FUNC_0(!VAR_3->state);

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6)
  goto err;
 FUNC_0(!FUNC_8(VAR_3->state));

 VAR_5 = FUNC_6(VAR_3->state->obj,
     FUNC_4(VAR_4->i915) |
     VAR_0);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  goto unpin_active;
 }

 VAR_6 = FUNC_5(VAR_3->gem_context);
 if (VAR_6)
  goto unpin_map;

 VAR_3->lrc_desc = FUNC_11(VAR_3, VAR_4);
 VAR_3->lrc_reg_state = VAR_5 + VAR_1 * VAR_2;
 FUNC_3(VAR_3, VAR_4);

 return 0;

unpin_map:
 FUNC_7(VAR_3->state->obj);
unpin_active:
 FUNC_10(VAR_3);
err:
 return VAR_6;
}
