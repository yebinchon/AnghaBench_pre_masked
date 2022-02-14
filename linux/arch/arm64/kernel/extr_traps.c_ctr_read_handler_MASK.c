
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (struct pt_regs*,int ) ;
 int FUNC_3 (struct pt_regs*,int,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2, struct pt_regs *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5 = FUNC_1(&VAR_1);

 FUNC_3(VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_3, VAR_0);
}
