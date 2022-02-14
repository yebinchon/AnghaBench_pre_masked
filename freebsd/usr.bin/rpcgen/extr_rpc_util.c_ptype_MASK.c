
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,...) ;
 char const* FUNC_1 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char*) ;

void
FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_1 != ((void*)0)) {
  if (FUNC_2(VAR_1, "enum")) {
   FUNC_0(VAR_0, "enum ");
  } else {
   FUNC_0(VAR_0, "struct ");
  }
 }
 if (FUNC_2(VAR_2, "bool")) {
  FUNC_0(VAR_0, "bool_t ");
 } else if (FUNC_2(VAR_2, "string")) {
  FUNC_0(VAR_0, "char *");
 } else {
  FUNC_0(VAR_0, "%s ", VAR_3 ? FUNC_1(VAR_2) : VAR_2);
 }
}
