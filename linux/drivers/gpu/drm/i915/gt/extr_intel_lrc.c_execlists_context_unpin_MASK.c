
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {TYPE_2__* ring; TYPE_1__* state; int gem_context; int engine; scalar_t__ lrc_reg_state; } ;
struct TYPE_4__ {int tail; } ;
struct TYPE_3__ {int obj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_context *VAR_2)
{
 FUNC_0((void *)VAR_2->lrc_reg_state - VAR_0 * VAR_1,
        VAR_2->engine);

 FUNC_1(VAR_2->gem_context);
 FUNC_2(VAR_2->state->obj);
 FUNC_3(VAR_2->ring, VAR_2->ring->tail);
}
