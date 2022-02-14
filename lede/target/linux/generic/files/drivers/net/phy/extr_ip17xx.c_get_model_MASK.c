
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ip17xx_state {TYPE_1__* regs; } ;
struct TYPE_5__ {int MODEL_NO; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (struct ip17xx_state*,int,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ip17xx_state *VAR_6)
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_0(VAR_6, 0, 2);
 VAR_8 = FUNC_0(VAR_6, 0, 3);
 VAR_9 = (VAR_7 << 6) | ((VAR_8 >> 10) & 0x3f);
 VAR_10 = (VAR_8 >> 4) & 0x3f;
 VAR_11 = VAR_8 & 0xf;
 FUNC_1("IP17xx: Identified oui=%06x model=%02x rev=%X\n", VAR_9, VAR_10, VAR_11);

 if (VAR_9 != 0x0090c3)
  return -VAR_0;

 if (VAR_10 == VAR_2.MODEL_NO) {
  VAR_6->regs = &VAR_2;
 } else if (VAR_10 == VAR_3.MODEL_NO) {






  if (FUNC_0(VAR_6, 5, 2) == 0x0243) {
   VAR_6->regs = &VAR_5;
  } else {
   VAR_12 = FUNC_0(VAR_6, 20, 0);
   FUNC_1("IP17xx: Chip ID register reads %04x\n", VAR_12);
   if (VAR_12 == 0x175d) {
    VAR_6->regs = &VAR_4;
   } else {
    VAR_6->regs = &VAR_3;
   }
  }
 } else {
  FUNC_2("IP17xx: Found an unknown IC+ switch with model number %02x, revision %X.\n", VAR_10, VAR_11);
  return -VAR_1;
 }
 return 0;
}
