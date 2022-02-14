
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_8__ {int addr; int mask; } ;
struct pt_regs {TYPE_3__ psw; int * gprs; } ;
struct TYPE_9__ {int ui; } ;
typedef TYPE_4__ freg_t ;
struct TYPE_6__ {TYPE_4__* fprs; scalar_t__ vxrs; } ;
struct TYPE_7__ {TYPE_1__ fpu; } ;
struct TYPE_10__ {TYPE_2__ thread; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_5__* VAR_8 ;
 int FUNC_1 (struct pt_regs*) ;

u64 FUNC_2(struct pt_regs *VAR_9, int VAR_10)
{
 freg_t VAR_11;

 if (VAR_10 >= VAR_6 && VAR_10 <= VAR_7)
  return VAR_9->gprs[VAR_10];

 if (VAR_10 >= VAR_1 && VAR_10 <= VAR_2) {
  if (!FUNC_1(VAR_9))
   return 0;

  VAR_10 -= VAR_1;
  VAR_11 = VAR_0 ? *(freg_t *)(VAR_8->thread.fpu.vxrs + VAR_10)
        : VAR_8->thread.fpu.fprs[VAR_10];
  return VAR_11.ui;
 }

 if (VAR_10 == VAR_3)
  return VAR_9->psw.mask;
 if (VAR_10 == VAR_5)
  return VAR_9->psw.addr;

 FUNC_0((u32)VAR_10 >= VAR_4);
 return 0;
}
