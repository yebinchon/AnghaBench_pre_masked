
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gr2d {int addr_regs; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 struct gr2d* FUNC_0 (struct device*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct gr2d *VAR_4 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  if (VAR_3 == 0x2b)
   return 1;

  break;

 case 130:
 case 129:
  if (VAR_3 >= VAR_0)
   break;

  if (FUNC_1(VAR_3, VAR_4->addr_regs))
   return 1;

  break;
 }

 return 0;
}
