
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct pt_regs*,unsigned int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,struct mm_struct*,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct mm_struct *VAR_3, unsigned long VAR_4, unsigned int VAR_5,
    struct pt_regs *VAR_6)
{



 if (FUNC_3(VAR_6))
  return;




 FUNC_0(1);
 FUNC_4("8<--- cut here ---\n");
 FUNC_4("Unable to handle kernel %s at virtual address %08lx\n",
   (VAR_4 < VAR_1) ? "NULL pointer dereference" :
   "paging request", VAR_4);

 FUNC_5(VAR_0, VAR_3, VAR_4);
 FUNC_1("Oops", VAR_6, VAR_5);
 FUNC_0(0);
 FUNC_2(VAR_2);
}
