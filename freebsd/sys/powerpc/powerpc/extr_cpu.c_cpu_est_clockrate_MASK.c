
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef int register_t ;
typedef int phandle_t ;
typedef int cell_t ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(int VAR_12, uint64_t *VAR_13)
{
 uint16_t VAR_14;
 register_t VAR_15;
 phandle_t VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;
 char VAR_20[8];

 VAR_14 = FUNC_8() >> 16;
 VAR_15 = FUNC_7();
 FUNC_10(VAR_15 & ~VAR_4);

 switch (VAR_14) {
  case 131:
  case 130:
  case 129:
  case 128:
  case 139:
  case 135:
  case 134:
  case 133:
  case 132:
   FUNC_11(VAR_9, VAR_10);
   FUNC_11(VAR_11, 0);
   FUNC_11(VAR_9, FUNC_5(VAR_3));
   FUNC_0(1000);
   *VAR_13 = (FUNC_9(VAR_11) * 1000) + 4999;
   FUNC_11(VAR_9, VAR_10);

   FUNC_10(VAR_15);
   return (0);
  case 138:
  case 137:
  case 136:
   FUNC_6();
   FUNC_11(VAR_5, VAR_10);
   FUNC_6();
   FUNC_11(VAR_6, 0);
   FUNC_11(VAR_7, 0);
   FUNC_11(VAR_8, 0);
   FUNC_11(VAR_5,
       FUNC_4(VAR_2));
   FUNC_6();
   FUNC_0(1000);
   FUNC_12();
   FUNC_11(VAR_5, VAR_10);
   *VAR_13 = (FUNC_9(VAR_8) * 1000) + 4999;

   FUNC_10(VAR_15);
   return (0);

  default:
   VAR_18 = FUNC_3(0);
   if (VAR_18 == 0)
    return (VAR_1);

   VAR_17 = FUNC_1(VAR_18);
   while (VAR_17 != 0) {
    VAR_19 = FUNC_2(VAR_17, "name", VAR_20, sizeof(VAR_20));
    if (VAR_19 > 0 && FUNC_13(VAR_20, "cpus") == 0)
     break;
    VAR_17 = FUNC_3(VAR_17);
   }
   VAR_16 = FUNC_1(VAR_17);
   while (VAR_16 != 0) {
    VAR_19 = FUNC_2(VAR_16, "device_type", VAR_20,
      sizeof(VAR_20));
    if (VAR_19 > 0 && FUNC_13(VAR_20, "cpu") == 0)
     break;
    VAR_16 = FUNC_3(VAR_16);
   }
   if (VAR_16 == 0)
    return (VAR_0);
   if (FUNC_2(VAR_16, "ibm,extended-clock-frequency",
       VAR_13, sizeof(*VAR_13)) >= 0) {
    return (0);
   } else if (FUNC_2(VAR_16, "clock-frequency", VAR_13,
       sizeof(cell_t)) >= 0) {
    *VAR_13 >>= 32;
    return (0);
   } else {
    return (VAR_0);
   }
 }
}
