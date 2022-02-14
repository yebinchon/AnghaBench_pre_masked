
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;
struct exception_table_entry {int fixup; } ;


 int FUNC_0 (char*,struct pt_regs*,int) ;
 struct exception_table_entry* FUNC_1 (int ) ;

void FUNC_2(struct pt_regs *VAR_0, unsigned long VAR_1, int VAR_2)
{
 const struct exception_table_entry *VAR_3;


 VAR_3 = FUNC_1(VAR_0->pc);
 if (VAR_3) {
  VAR_0->pc = VAR_3->fixup;
  return;
 }


 FUNC_0("kernel access of bad area", VAR_0, VAR_2);
}
