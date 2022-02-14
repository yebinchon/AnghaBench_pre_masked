
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
typedef int register_t ;


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
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_11, uint16_t VAR_12)
{
 register_t VAR_13;

 VAR_13 = FUNC_0(VAR_8);
 FUNC_1("cpu%u: ", VAR_11);
 FUNC_1("L1 I-cache %sabled, ", (VAR_13 & VAR_1) ? "en" : "dis");
 FUNC_1("L1 D-cache %sabled\n", (VAR_13 & VAR_0) ? "en" : "dis");

 FUNC_1("cpu%u: ", VAR_11);
   if (FUNC_0(VAR_9) & VAR_2) {
  switch (VAR_12) {
  case 130:
  case 129:
  case 128:
   FUNC_1("256KB L2 cache, ");
   if (FUNC_0(VAR_10) & VAR_6)
    FUNC_1("%cMB L3 backside cache",
        FUNC_0(VAR_10) & VAR_7 ? '2' : '1');
   else
    FUNC_1("L3 cache disabled");
   FUNC_1("\n");
   break;
  case 134:
   FUNC_1("512KB L2 cache\n");
   break;
  default:
   switch (FUNC_0(VAR_9) & VAR_4) {
   case 132:
    FUNC_1("256KB ");
    break;
   case 131:
    FUNC_1("512KB ");
    break;
   case 133:
    FUNC_1("1MB ");
    break;
   }
   FUNC_1("write-%s", (FUNC_0(VAR_9) & VAR_5)
       ? "through" : "back");
   if (FUNC_0(VAR_9) & VAR_3)
    FUNC_1(", with parity");
   FUNC_1(" backside cache\n");
   break;
  }
 } else
  FUNC_1("L2 cache disabled\n");
}
