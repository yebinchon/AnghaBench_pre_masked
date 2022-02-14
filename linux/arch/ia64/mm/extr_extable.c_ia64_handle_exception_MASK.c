
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u64 ;
struct pt_regs {long cr_iip; scalar_t__ r9; int r8; } ;
struct exception_table_entry {int fixup; } ;
struct TYPE_2__ {long ri; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct pt_regs*) ;

void
FUNC_1 (struct pt_regs *VAR_1, const struct exception_table_entry *VAR_2)
{
 long VAR_3 = (u64) &VAR_2->fixup + VAR_2->fixup;

 VAR_1->r8 = -VAR_0;
 if (VAR_3 & 4)
  VAR_1->r9 = 0;
 VAR_1->cr_iip = VAR_3 & ~0xf;
 FUNC_0(VAR_1)->ri = VAR_3 & 0x3;
}
