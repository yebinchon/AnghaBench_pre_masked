
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* iaoq; int iir; scalar_t__* gr; } ;
struct exception_table_entry {int fixup; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct exception_table_entry* FUNC_2 (unsigned long) ;

int FUNC_3(struct pt_regs *VAR_3)
{
 const struct exception_table_entry *VAR_4;

 VAR_4 = FUNC_2(VAR_3->iaoq[0]);
 if (VAR_4) {







  if (VAR_4->fixup & 1) {
   VAR_3->gr[8] = -VAR_0;


   if (FUNC_1(0, VAR_3->iir) == VAR_2) {
    int VAR_5 = VAR_3->iir & 0x1f;
    FUNC_0(VAR_5 == 0);
    VAR_3->gr[VAR_5] = 0;
   }
  }

  VAR_3->iaoq[0] = (unsigned long)&VAR_4->fixup + VAR_4->fixup;
  VAR_3->iaoq[0] &= ~3;







  VAR_3->iaoq[1] = VAR_3->iaoq[0] + 4;
  VAR_3->gr[0] &= ~VAR_1;

  return 1;
 }

 return 0;
}
