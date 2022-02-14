
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ipc; } ;
struct exception_table_entry {int fixup; } ;


 int FUNC_0 (struct pt_regs*) ;
 struct exception_table_entry* FUNC_1 (int ) ;

int FUNC_2(struct pt_regs *VAR_0)
{
 const struct exception_table_entry *VAR_1;

 VAR_1 = FUNC_1(FUNC_0(VAR_0));
 if (VAR_1)
  VAR_0->ipc = VAR_1->fixup;

 return VAR_1 != ((void*)0);
}
