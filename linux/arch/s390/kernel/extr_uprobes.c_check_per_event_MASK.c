
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct pt_regs {TYPE_3__ psw; } ;
struct TYPE_5__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_6__ {TYPE_1__ per_user; } ;
struct TYPE_8__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned short VAR_2, unsigned long VAR_3,
      struct pt_regs *VAR_4)
{
 if (!(VAR_4->psw.mask & VAR_0))
  return 0;

 if (VAR_3 == 0)
  return 1;

 if ((VAR_3 & 0x20200000) && (VAR_2 & 0x2000))
  return 1;
 if (VAR_2 & 0x8000) {

  if ((VAR_3 & 0x80800000) == 0x80000000)
   return 1;

  if (((VAR_3 & 0x80800000) == 0x80800000) &&
      VAR_4->psw.addr >= VAR_1->thread.per_user.start &&
      VAR_4->psw.addr <= VAR_1->thread.per_user.end)
   return 1;
 }
 return 0;
}
