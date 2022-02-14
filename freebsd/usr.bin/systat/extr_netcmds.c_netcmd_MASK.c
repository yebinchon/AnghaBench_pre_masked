
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int
FUNC_12(const char *VAR_1, const char *VAR_2)
{

 if (FUNC_5(VAR_1, "proto")) {
  if (*VAR_2 == '\0') {
   FUNC_4(VAR_0, 0);
   FUNC_2();
   FUNC_0("which proto?");
  } else if (!FUNC_8(VAR_2)) {
   FUNC_3("%s: Unknown protocol.", VAR_2);
  }
  return (1);
 }
 if (FUNC_5(VAR_1, "ignore") || FUNC_5(VAR_1, "display")) {
  FUNC_1(VAR_2, FUNC_5(VAR_1, "display"));
  return (1);
 }
 if (FUNC_5(VAR_1, "reset")) {
  FUNC_8(0);
  FUNC_6(0, 0);
  FUNC_7(-1, 0);
  return (1);
 }
 if (FUNC_5(VAR_1, "show")) {
  FUNC_4(VAR_0, 0); FUNC_2();
  if (*VAR_2 == '\0') {
   FUNC_11();
   FUNC_9();
   FUNC_10();
   return (1);
  }
  if (FUNC_5(VAR_2, "protos"))
   FUNC_11();
  else if (FUNC_5(VAR_2, "hosts"))
   FUNC_9();
  else if (FUNC_5(VAR_2, "ports"))
   FUNC_10();
  else
   FUNC_0("show what?");
  return (1);
 }
 return (0);
}
