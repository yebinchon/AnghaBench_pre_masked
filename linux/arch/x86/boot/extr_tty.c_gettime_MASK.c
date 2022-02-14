
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct biosregs {int ah; int dh; } ;


 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static u8 FUNC_2(void)
{
 struct biosregs VAR_0, VAR_1;

 FUNC_0(&VAR_0);
 VAR_0.ah = 0x02;
 FUNC_1(0x1a, &VAR_0, &VAR_1);

 return VAR_1.dh;
}
