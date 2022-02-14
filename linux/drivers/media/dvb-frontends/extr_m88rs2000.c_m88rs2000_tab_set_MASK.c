
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct m88rs2000_state {int dummy; } ;
struct inittab {int cmd; int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m88rs2000_state*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct m88rs2000_state *VAR_2,
  struct inittab *VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5;
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < 255; VAR_5++) {
  switch (VAR_3[VAR_5].cmd) {
  case 0x01:
   VAR_4 = FUNC_0(VAR_2, VAR_3[VAR_5].reg,
    VAR_3[VAR_5].val);
   break;
  case 0x10:
   if (VAR_3[VAR_5].reg > 0)
    FUNC_1(VAR_3[VAR_5].reg);
   break;
  case 0xff:
   if (VAR_3[VAR_5].reg == 0xaa && VAR_3[VAR_5].val == 0xff)
    return 0;
  case 0x00:
   break;
  default:
   return -VAR_0;
  }
  if (VAR_4 < 0)
   return -VAR_1;
 }
 return 0;
}
