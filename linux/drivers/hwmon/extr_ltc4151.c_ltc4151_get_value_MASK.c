
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ltc4151_data {int* regs; int shunt; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ltc4151_data *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 VAR_2 = (VAR_0->regs[VAR_1] << 4) + (VAR_0->regs[VAR_1 + 1] >> 4);

 switch (VAR_1) {
 case 130:

  VAR_2 = VAR_2 * 500 / 1000;
  break;
 case 129:




  VAR_2 = VAR_2 * 20 * 1000 / VAR_0->shunt;
  break;
 case 128:

  VAR_2 = VAR_2 * 25;
  break;
 default:

  FUNC_0(1);
  VAR_2 = 0;
  break;
 }

 return VAR_2;
}
