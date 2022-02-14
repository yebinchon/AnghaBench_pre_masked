
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int * regs; } ;
struct TYPE_4__ {int fcr31; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_0->thread.fpu.fcr31;
 VAR_6 = VAR_1[FUNC_2(VAR_4) >> 2];

 if (((VAR_5 & VAR_6) == 0) && FUNC_0(VAR_4))
  VAR_3->regs[FUNC_0(VAR_4)] = VAR_3->regs[FUNC_1(VAR_4)];

 FUNC_3(VAR_2);

 return 0;
}
