
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(u8 VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_0);

 VAR_6 &= ~VAR_4;
 switch (VAR_5) {
 case 130:
  VAR_6 |= VAR_2;
  break;
 case 128:
  VAR_6 |= VAR_1;
  break;
 case 129:
  VAR_6 |= VAR_3;
  break;
 default:
  FUNC_2("Unsupported mode %u\n", VAR_5);
 }

 FUNC_1(VAR_6, VAR_0);
}
