
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;







 int VAR_0 ;
 double FUNC_0 (int*) ;
 int FUNC_1 (int*,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, u_char *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_2[0] & 0x40) {
  FUNC_1(&VAR_3, "\t\t-{e:predicted_failure/true} Predicted Failure\n");
 }
 if (VAR_2[0] & 0x20) {
  FUNC_1(&VAR_3, "\t\t-{e:disabled/true} Disabled\n");
 }
 if (VAR_2[0] & 0x10) {
  FUNC_1(&VAR_3, "\t\t-{e:swapped/true} Swapped\n");
 }
 switch (VAR_1) {
 case 131:
 case 132:
  if (VAR_2[2] & 0x02) {
   FUNC_1(&VAR_3, "\t\t- LED={q:led/locate}\n");
  }
  if (VAR_2[2] & 0x20) {
   FUNC_1(&VAR_3, "\t\t- LED={q:led/fault}\n");
  }
  break;
 case 130:
  FUNC_1(&VAR_3, "\t\t- Speed: {:speed/%d}{Uw:rpm}\n",
      (((0x7 & VAR_2[1]) << 8) + VAR_2[2]) * 10);
  break;
 case 129:
  if (VAR_2[2]) {
   FUNC_1(&VAR_3, "\t\t- Temperature: {:temperature/%d}{Uw:C}\n",
       VAR_2[2] - VAR_0);
  } else {
   FUNC_1(&VAR_3, "\t\t- Temperature: -{q:temperature/reserved}-\n");
  }
  break;
 case 128:
  FUNC_1(&VAR_3, "\t\t- Voltage: {:voltage/%.2f}{Uw:V}\n",
      FUNC_0(VAR_2 + 2) / 100.0);
  break;
 }
 if (VAR_3) {
  FUNC_2("extra_status");
 }
}
