
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct biosregs {int ax; int al; } ;


 int VAR_0 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static u8 FUNC_2(void)
{
 struct biosregs VAR_1, VAR_2;
 u8 VAR_3;

 FUNC_0(&VAR_1);


 VAR_1.ax = 0x0f00;
 FUNC_1(0x10, &VAR_1, &VAR_2);
 VAR_3 = VAR_2.al;

 if (VAR_3 != 3 && VAR_3 != 7)
  VAR_3 = 3;


 VAR_1.ax = VAR_3;
 FUNC_1(0x10, &VAR_1, ((void*)0));
 VAR_0 = 1;
 return VAR_3;
}
