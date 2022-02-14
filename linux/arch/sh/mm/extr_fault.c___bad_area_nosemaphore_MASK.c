
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pt_regs*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static void
FUNC_4(struct pt_regs *VAR_1, unsigned long VAR_2,
         unsigned long VAR_3, int VAR_4)
{

 if (FUNC_3(VAR_1)) {



  FUNC_1();

  FUNC_0(VAR_0, VAR_4, VAR_3);

  return;
 }

 FUNC_2(VAR_1, VAR_2, VAR_3);
}
