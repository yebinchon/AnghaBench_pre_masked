
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;






 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

void FUNC_4(int VAR_17)
{
 uint32_t VAR_18, VAR_19;

 VAR_18 = FUNC_2(VAR_1);
 VAR_19 = FUNC_2(VAR_6);

 VAR_19 &= ~(VAR_10 | VAR_7 | VAR_8
  | VAR_16 | VAR_15);
 VAR_18 &= ~(VAR_3
  | VAR_5);

 switch (VAR_17) {
 case 128:

  VAR_19 |= VAR_15 | VAR_7;

 case 129:
  VAR_19 |= VAR_14;
  VAR_19 |= VAR_16;

 case 132:
  VAR_19 |= VAR_10;

 case 133:
  VAR_19 |= VAR_8;

 case 131:
  VAR_18 |= VAR_3;
  VAR_18 |= VAR_5;
  VAR_18 |= FUNC_1(3)
   | FUNC_0(3);

 case 130:
  break;
 }


 VAR_18 |= VAR_2;
 VAR_18 |= VAR_4;
 FUNC_3(0x0, VAR_0);


 VAR_19 |= VAR_11 | VAR_12 | VAR_9
  | VAR_13;


 VAR_19 |= VAR_14;


 FUNC_3(VAR_18, VAR_1);
 FUNC_3(VAR_19, VAR_6);

}
