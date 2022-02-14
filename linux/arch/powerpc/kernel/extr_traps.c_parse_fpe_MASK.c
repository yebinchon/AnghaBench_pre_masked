
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pt_regs {int nip; } ;
struct TYPE_5__ {int fpscr; } ;
struct TYPE_6__ {TYPE_1__ fp_state; } ;
struct TYPE_7__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pt_regs*,int,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_1->thread.fp_state.fpscr);

 FUNC_1(VAR_0, VAR_2, VAR_3, VAR_2->nip);
}
