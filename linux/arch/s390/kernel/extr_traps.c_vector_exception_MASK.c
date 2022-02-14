
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_0 (struct pt_regs*,int ,int,char*) ;
 int FUNC_1 () ;

void FUNC_2(struct pt_regs *VAR_10)
{
 int VAR_11, VAR_12;

 if (!VAR_6) {
  FUNC_0(VAR_10, VAR_8, VAR_5, "illegal operation");
  return;
 }


 FUNC_1();
 VAR_12 = (VAR_9->thread.fpu.fpc & 0xf00) >> 8;
 switch (VAR_12) {
 case 1:
  VAR_11 = VAR_1;
  break;
 case 2:
  VAR_11 = VAR_0;
  break;
 case 3:
  VAR_11 = VAR_2;
  break;
 case 4:
  VAR_11 = VAR_4;
  break;
 case 5:
  VAR_11 = VAR_3;
  break;
 default:
  VAR_11 = 0;
 }
 FUNC_0(VAR_10, VAR_7, VAR_11, "vector exception");
}
