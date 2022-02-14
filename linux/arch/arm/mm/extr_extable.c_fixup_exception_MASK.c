
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ARM_cpsr; int ARM_pc; } ;
struct exception_table_entry {int fixup; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 struct exception_table_entry* FUNC_1 (int ) ;

int FUNC_2(struct pt_regs *VAR_1)
{
 const struct exception_table_entry *VAR_2;

 VAR_2 = FUNC_1(FUNC_0(VAR_1));
 if (VAR_2) {
  VAR_1->ARM_pc = VAR_2->fixup;




 }

 return VAR_2 != ((void*)0);
}
