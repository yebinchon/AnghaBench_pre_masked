
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int al; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

int FUNC_2(void)
{
 struct biosregs VAR_0, VAR_1;

 FUNC_0(&VAR_0);

 FUNC_1(0x16, &VAR_0, &VAR_1);

 return VAR_1.al;
}
