
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static u32
FUNC_0(u8 VAR_10)
{
 u32 VAR_11 = 0;

 switch (VAR_10 & VAR_5) {
 case 131:
 default:
  VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 |= VAR_7;
  break;
 case 129:
  VAR_11 |= VAR_8;
  break;
 case 128:
  VAR_11 |= VAR_9;
  break;
 }
 switch (VAR_10 & VAR_4) {
 case 135:
 default:
  VAR_11 |= VAR_0;
  break;
 case 134:
  VAR_11 |= VAR_1;
  break;
 case 133:
  VAR_11 |= VAR_2;
  break;
 case 132:
  VAR_11 |= VAR_3;
  break;
 }
 return VAR_11;
}
