
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int resource_size_t ;





 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(resource_size_t VAR_1, int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 switch (VAR_1) {
 case 130:
  VAR_3 = 0;
  break;
 case 129:
  VAR_3 = 1;
  break;
 case 128:
  VAR_3 = 6;
  break;
 default:
  FUNC_0(1, "lpc32xx_hs: Warning: Unknown port at %08x\n", VAR_1);
  return;
 }

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_2)
  VAR_4 |= (1 << VAR_3);
 else
  VAR_4 &= ~(1 << VAR_3);
 FUNC_2(VAR_4, VAR_0);
}
