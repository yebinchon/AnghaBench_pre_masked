
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clock_board {scalar_t__ clock_ver_reg; scalar_t__ clock_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct clock_board *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1->clock_regs + VAR_0) & 0xc0;

 switch (VAR_2) {
 case 0x40:
  return 16;

 case 0xc0:
  return 8;

 case 0x80:
  VAR_2 = 0;
  if (VAR_1->clock_ver_reg)
   VAR_2 = FUNC_0(VAR_1->clock_ver_reg);
  if (VAR_2) {
   if (VAR_2 & 0x80)
    return 4;
   else
    return 5;
  }

 default:
  return 4;
 }
}
