
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mips3264_watch_reg_state {unsigned int* watchhi; unsigned int* watchlo; } ;
struct TYPE_5__ {struct mips3264_watch_reg_state mips3264; } ;
struct TYPE_6__ {TYPE_1__ watch; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;
struct TYPE_7__ {int watch_reg_use_cnt; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;
 unsigned int FUNC_1 () ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;

void FUNC_5(void)
{
 struct mips3264_watch_reg_state *VAR_4 =
  &VAR_2->thread.watch.mips3264;
 unsigned int VAR_5 = VAR_1 | VAR_0;

 switch (VAR_3.watch_reg_use_cnt) {
 default:
  FUNC_0();
 case 4:
  VAR_4->watchhi[3] = (FUNC_4() & VAR_5);

 case 3:
  VAR_4->watchhi[2] = (FUNC_3() & VAR_5);

 case 2:
  VAR_4->watchhi[1] = (FUNC_2() & VAR_5);

 case 1:
  VAR_4->watchhi[0] = (FUNC_1() & VAR_5);
 }
 if (VAR_3.watch_reg_use_cnt == 1 &&
     (VAR_4->watchhi[0] & VAR_0) == 0) {





  VAR_4->watchhi[0] |= (VAR_4->watchlo[0] & VAR_0);
 }
 }
