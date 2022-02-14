
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct ltc4261_data {int* regs; } ;





 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ltc4261_data *VAR_0, u8 VAR_1)
{
 u32 VAR_2;

 VAR_2 = (VAR_0->regs[VAR_1] << 2) + (VAR_0->regs[VAR_1 + 1] >> 6);

 switch (VAR_1) {
 case 129:
 case 130:

  VAR_2 = VAR_2 * 25 / 10;
  break;
 case 128:







  VAR_2 = VAR_2 * 625 / 10;
  break;
 default:

  FUNC_0(1);
  VAR_2 = 0;
  break;
 }

 return VAR_2;
}
