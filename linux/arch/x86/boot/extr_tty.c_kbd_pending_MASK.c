
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct biosregs {int ah; int eflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct biosregs VAR_1, VAR_2;

 FUNC_0(&VAR_1);
 VAR_1.ah = 0x01;
 FUNC_1(0x16, &VAR_1, &VAR_2);

 return !(VAR_2.eflags & VAR_0);
}
