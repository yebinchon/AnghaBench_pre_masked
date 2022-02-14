
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int ax; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct biosregs VAR_0;

 FUNC_0(&VAR_0);
 VAR_0.ax = 0x2401;
 FUNC_1(0x15, &VAR_0, ((void*)0));
}
