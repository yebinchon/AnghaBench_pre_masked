
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int register_t ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 scalar_t__ VAR_16 ;
 int FUNC_0 (int,int) ;
 int * VAR_17 ;
 int * VAR_18 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_19 ;
 int FUNC_4 (char*,int,int,char const*) ;

void
FUNC_5(int VAR_20, uint16_t VAR_21)
{
 register_t VAR_22, VAR_23;
 const char *VAR_24;

 VAR_22 = FUNC_2(VAR_15);
 VAR_23 = FUNC_1();




 switch (VAR_21) {
  case 141:
  case 140:
  case 139:
  case 138:
  case 130:
  case 142:
  case 137:
  case 136:
  case 129:
  case 128:

   VAR_22 &= ~(VAR_5 | VAR_11 | VAR_13);
   VAR_22 |= VAR_5 | VAR_6;
   VAR_19 = 1;
   break;

  case 134:
  case 135:
  case 131:
  case 132:
  case 133:

   VAR_22 |= VAR_12 | VAR_3;
   VAR_22 |= VAR_10 | VAR_9 | VAR_1;

   if (((VAR_23 >> 16) == 133 && (VAR_23 & 0xFFFF) <= 0x0200)
     || (VAR_23 >> 16) == 131)
    VAR_22 &= ~VAR_3;

   VAR_22 &= ~(VAR_5 | VAR_11 | VAR_13);
   VAR_22 |= VAR_11 | VAR_6;
   VAR_19 = 1;
   break;

  default:
                                            ;
 }

 switch (VAR_21) {
  case 142:
  case 130:
   VAR_22 &= ~VAR_4;
   VAR_22 |= VAR_8 | VAR_3 | VAR_12 | VAR_1;
   break;

  case 137:
  case 136:
   VAR_22 &= ~VAR_14;
   VAR_22 |= VAR_8 | VAR_3 | VAR_12 | VAR_1;
   VAR_22 |= VAR_7;
   break;

 }

 FUNC_3(VAR_15, VAR_22);

 if (VAR_16)
  FUNC_0(VAR_20, VAR_21);

 switch (VAR_21) {
  case 135:
  case 134:
  case 133:
  case 132:
  case 131:
   VAR_24 = VAR_0;
   break;
  default:
   VAR_24 = VAR_2;
   break;
 }

 FUNC_4("cpu%d: HID0 %b\n", VAR_20, (int)VAR_22, VAR_24);

 if (VAR_18 == ((void*)0))
  VAR_18 = VAR_17;
}
