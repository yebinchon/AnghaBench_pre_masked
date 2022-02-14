
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3)
{
 const char VAR_4[] = "TN=";
 int VAR_5;

 if (FUNC_3(VAR_3, VAR_4, sizeof(VAR_4) - 1) == 0) {




  VAR_2 = FUNC_0(((void*)0));
  VAR_5 = FUNC_1(VAR_2, VAR_0,
      FUNC_4(((void*)0)), VAR_3 + sizeof(VAR_4) - 1);
  if (VAR_5 == -2) {
   FUNC_5("Non-existent time specified on -D %s", VAR_3);
   return (0);
  } else if (VAR_5 < 0) {
   FUNC_5("Malformed time given on -D %s", VAR_3);
   return (0);
  }
  return (1);

 }

 if (FUNC_2(VAR_3, "ats") == 0) {
  VAR_1++;
  return (1);
 }


 if ((FUNC_2(VAR_3, "neworder") == 0) || (FUNC_2(VAR_3, "oldorder")
     == 0)) {
  FUNC_5("NOTE: newsyslog always uses 'neworder'.");
  return (1);
 }

 FUNC_5("Unknown -D (debug) option: '%s'", VAR_3);
 return (0);
}
