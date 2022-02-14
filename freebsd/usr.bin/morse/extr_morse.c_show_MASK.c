
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_2)
{
 if (VAR_0) {
  FUNC_0("%s ", VAR_2);
 } else if (VAR_1) {
  FUNC_0(" %s\n", VAR_2);
 } else {
  for (; *VAR_2; ++VAR_2)
   FUNC_0(" %s", *VAR_2 == '.' ? *(VAR_2 + 1) == '\0' ? "dit" :
       "di" : "dah");
  FUNC_0("\n");
 }
}
