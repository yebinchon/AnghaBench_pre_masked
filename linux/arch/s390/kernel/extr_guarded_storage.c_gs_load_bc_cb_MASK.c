
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct gs_cb {int dummy; } ;
struct TYPE_3__ {struct gs_cb* gs_cb; struct gs_cb* gs_bc_cb; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct gs_cb*) ;
 int FUNC_3 (struct gs_cb*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct pt_regs *VAR_2)
{
 struct gs_cb *VAR_3;

 FUNC_4();
 FUNC_1(VAR_0);
 VAR_3 = VAR_1->thread.gs_bc_cb;
 if (VAR_3) {
  FUNC_2(VAR_1->thread.gs_cb);
  VAR_1->thread.gs_bc_cb = ((void*)0);
  FUNC_0(2, 4);
  FUNC_3(VAR_3);
  VAR_1->thread.gs_cb = VAR_3;
 }
 FUNC_5();
}
