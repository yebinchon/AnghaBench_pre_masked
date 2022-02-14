
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {scalar_t__ context_size; scalar_t__ pinned_default_state; } ;
struct intel_context {TYPE_1__* ring; int * lrc_reg_state; } ;
struct TYPE_3__ {int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_context*,struct intel_engine_cs*) ;
 int FUNC_1 (int *,struct intel_context*,struct intel_engine_cs*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;

void FUNC_4(struct intel_engine_cs *VAR_2,
       struct intel_context *VAR_3,
       u32 VAR_4,
       bool VAR_5)
{
 if (VAR_5) {
  u32 *VAR_6 = VAR_3->lrc_reg_state;

  if (VAR_2->pinned_default_state) {
   FUNC_3(VAR_6,
          VAR_2->pinned_default_state + VAR_0 * VAR_1,
          VAR_2->context_size - VAR_1);
  }
  FUNC_1(VAR_6, VAR_3, VAR_2, VAR_3->ring);
 }


 VAR_3->ring->head = VAR_4;
 FUNC_2(VAR_3->ring);

 FUNC_0(VAR_3, VAR_2);
}
