
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_3(const char *VAR_2)
{
 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_2);
 if (VAR_1) {
  FUNC_2("Patching file %s using Plan %s...\n", VAR_2,
      (VAR_0 ? "A" : "B"));
 }
}
