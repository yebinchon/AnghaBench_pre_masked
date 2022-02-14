
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(int VAR_12)
{
 uint32_t VAR_13, VAR_14;

 VAR_13 = FUNC_1(VAR_0);
 VAR_14 = FUNC_1(VAR_5);
 VAR_14 &= ~(VAR_9 | VAR_8 | VAR_6
   | VAR_7 | VAR_11 | (1 << 13));
 VAR_13 &= ~VAR_3;

 switch (VAR_12) {
 case 128:
  VAR_14 |= VAR_9;
  VAR_14 |= VAR_11;

 case 131:
  VAR_14 |= VAR_9;

 case 132:
  VAR_14 |= VAR_6;

 case 133:
  VAR_14 |= VAR_7;
  VAR_14 |= VAR_8;
  VAR_13 |= VAR_4;
  VAR_14 |= VAR_10;

 case 130:
  VAR_13 |= VAR_3;
  VAR_13 &= ~VAR_1;
  VAR_13 |= FUNC_0(3)
   | VAR_2;
  break;
 case 129:
  VAR_14 &= ~VAR_10;
  break;
 }


 VAR_14 |= (1 << 30) | (1 << 25);


 FUNC_2(VAR_13, VAR_0);
 FUNC_2(VAR_14, VAR_5);
}
