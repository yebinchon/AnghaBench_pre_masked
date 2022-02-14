
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
 int FUNC_0 (scalar_t__) ;






 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;




 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int VAR_1 ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(int VAR_2)
{
 uint64_t VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = 0;
 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_12(0);
  break;
 case 128:
  VAR_4 = FUNC_13(0);
  break;
 case 137:
  VAR_4 = FUNC_8(0);
  break;
 case 141:
 case 140:
 case 139:
 case 138:
  if (FUNC_20())
   VAR_4 = FUNC_2(0);
  else
   VAR_4 = FUNC_7(0);
  break;
 case 131:
  VAR_4 = FUNC_10(0);
  break;
 case 142:
  VAR_4 = FUNC_6(0);
  break;
 case 136:
  VAR_4 = FUNC_9(0);
  break;
 case 130:
  VAR_4 = FUNC_11(0);
  break;
 default:
  if (FUNC_20()) {
   switch (VAR_2) {

   case 147:
    VAR_4 = FUNC_3(0);
    break;
   case 146:
    VAR_4 = FUNC_4(0);
    break;
   case 145:
    VAR_4 = FUNC_5(0);
    break;
   }
  } else {
   switch (VAR_2) {
   case 144:
    VAR_4 = FUNC_14(0);
    break;
   case 143:
    VAR_4 = FUNC_15(0);
    break;
   case 135:
    VAR_4 = FUNC_16(0);
    break;
   case 134:
    VAR_4 = FUNC_17(0);
    break;
   case 133:
    VAR_4 = FUNC_18(0);
    break;
   case 132:
    VAR_4 = FUNC_19(0);
    break;
   }
  }
 }

 if (VAR_4 != 0) {
  uint32_t VAR_6;

  VAR_3 = FUNC_21(VAR_4);
  VAR_6 = FUNC_22(VAR_3, VAR_1);
  if (VAR_6 == 0xffffffff) {
   VAR_5 = -1;
  } else {
   VAR_5 = VAR_6 & 0xffff;

   switch (VAR_2) {
   case 140:
    VAR_5 = VAR_5 + 1; break;
   case 139:
    VAR_5 = VAR_5 + 2; break;
   case 138:
    VAR_5 = VAR_5 + 3; break;
   }
  }
 } else if (VAR_2 >= FUNC_1(0) &&
   VAR_2 <= FUNC_1(3)) {

  VAR_5 = FUNC_0(VAR_2 -
     VAR_0);
 } else {
  VAR_5 = -1;
 }
 return VAR_5;
}
