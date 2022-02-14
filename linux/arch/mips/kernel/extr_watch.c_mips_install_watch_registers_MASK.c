
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mips3264_watch_reg_state {unsigned int* watchhi; int * watchlo; } ;
struct TYPE_4__ {struct mips3264_watch_reg_state mips3264; } ;
struct TYPE_5__ {TYPE_1__ watch; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_6__ {int watch_reg_use_cnt; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct task_struct *VAR_3)
{
 struct mips3264_watch_reg_state *VAR_4 = &VAR_3->thread.watch.mips3264;
 unsigned int VAR_5 = VAR_0 |
          VAR_1;

 switch (VAR_2.watch_reg_use_cnt) {
 default:
  FUNC_0();
 case 4:
  FUNC_8(VAR_4->watchlo[3]);
  FUNC_4(VAR_5 | VAR_4->watchhi[3]);

 case 3:
  FUNC_7(VAR_4->watchlo[2]);
  FUNC_3(VAR_5 | VAR_4->watchhi[2]);

 case 2:
  FUNC_6(VAR_4->watchlo[1]);
  FUNC_2(VAR_5 | VAR_4->watchhi[1]);

 case 1:
  FUNC_5(VAR_4->watchlo[0]);
  FUNC_1(VAR_5 | VAR_4->watchhi[0]);
 }
}
