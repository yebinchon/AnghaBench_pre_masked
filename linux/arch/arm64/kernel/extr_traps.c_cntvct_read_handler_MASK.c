
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pt_regs*,int ) ;
 int FUNC_3 (struct pt_regs*,int,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1, struct pt_regs *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1);

 FUNC_3(VAR_2, VAR_3, FUNC_1());
 FUNC_2(VAR_2, VAR_0);
}
