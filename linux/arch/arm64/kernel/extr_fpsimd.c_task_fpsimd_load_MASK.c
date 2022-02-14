
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fpsr; } ;
struct TYPE_5__ {TYPE_3__ fpsimd_state; } ;
struct TYPE_6__ {TYPE_1__ uw; int sve_vl; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
 FUNC_0(!FUNC_2());

 if (FUNC_6() && FUNC_7(VAR_0))
  FUNC_3(FUNC_4(&VAR_1->thread),
          &VAR_1->thread.uw.fpsimd_state.fpsr,
          FUNC_5(VAR_1->thread.sve_vl) - 1);
 else
  FUNC_1(&VAR_1->thread.uw.fpsimd_state);
}
