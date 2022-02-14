
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int32_t ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {int set; scalar_t__ rulenum; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ip_fw*,int) ;
 int FUNC_3 (int,char*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_6, u_int32_t VAR_7, int VAR_8)
{
 struct ip_fw *VAR_9;
 char *VAR_10;
 int VAR_11;

 uint16_t VAR_12 = VAR_7 & 0xffff;
 uint8_t VAR_13 = (VAR_7 >> 16) & 0xff;
 uint8_t VAR_14 = (VAR_7 >> 24) & 0xff;

 if (VAR_14 > 1)
  return (VAR_0);
 if (VAR_14 == 1 && VAR_13 > VAR_3)
  return (VAR_0);

 FUNC_0(VAR_6);
 if (VAR_12 == 0) {
  VAR_5 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_6->n_rules; VAR_11++) {
   VAR_9 = VAR_6->map[VAR_11];

   if (VAR_14 == 1 && VAR_9->set != VAR_13)
    continue;
   FUNC_2(VAR_9, VAR_8);
  }
  VAR_10 = VAR_8 ? "All logging counts reset" :
      "Accounting cleared";
 } else {
  int VAR_15 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_6->n_rules; VAR_11++) {
   VAR_9 = VAR_6->map[VAR_11];
   if (VAR_9->rulenum == VAR_12) {
    if (VAR_14 == 0 || VAR_9->set == VAR_13)
     FUNC_2(VAR_9, VAR_8);
    VAR_15 = 1;
   }
   if (VAR_9->rulenum > VAR_12)
    break;
  }
  if (!VAR_15) {
   FUNC_1(VAR_6);
   return (VAR_0);
  }
  VAR_10 = VAR_8 ? "logging count reset" : "cleared";
 }
 FUNC_1(VAR_6);

 if (VAR_4) {
  int VAR_16 = VAR_2 | VAR_1;

  if (VAR_12)
   FUNC_3(VAR_16, "ipfw: Entry %d %s.\n", VAR_12, VAR_10);
  else
   FUNC_3(VAR_16, "ipfw: %s.\n", VAR_10);
 }
 return (0);
}
