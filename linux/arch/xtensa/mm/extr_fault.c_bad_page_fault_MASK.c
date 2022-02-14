
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int * areg; int pc; } ;
struct exception_table_entry {int fixup; } ;
struct TYPE_3__ {unsigned long bad_uaddr; } ;
struct TYPE_4__ {TYPE_1__ thread; int comm; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 struct exception_table_entry* FUNC_3 (int ) ;

void
FUNC_4(struct pt_regs *VAR_1, unsigned long VAR_2, int VAR_3)
{
 extern void FUNC_0(const char*, struct pt_regs*, long);
 const struct exception_table_entry *VAR_4;


 if ((VAR_4 = FUNC_3(VAR_1->pc)) != ((void*)0)) {
  FUNC_2("%s: Exception at pc=%#010lx (%lx)\n",
    VAR_0->comm, VAR_1->pc, VAR_4->fixup);
  VAR_0->thread.bad_uaddr = VAR_2;
  VAR_1->pc = VAR_4->fixup;
  return;
 }




 FUNC_1("Unable to handle kernel paging request at virtual "
   "address %08lx\n pc = %08lx, ra = %08lx\n",
   VAR_2, VAR_1->pc, VAR_1->areg[0]);
 FUNC_0("Oops", VAR_1, VAR_3);
 FUNC_0(VAR_3);
}
