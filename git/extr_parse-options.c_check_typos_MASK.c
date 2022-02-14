
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ type; char const* long_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, const struct option *VAR_2)
{
 if (FUNC_4(VAR_1) < 3)
  return;

 if (FUNC_3(VAR_1, "no-")) {
  FUNC_1(FUNC_0("did you mean `--%s` (with two dashes ?)"), VAR_1);
  FUNC_2(129);
 }

 for (; VAR_2->type != VAR_0; VAR_2++) {
  if (!VAR_2->long_name)
   continue;
  if (FUNC_3(VAR_2->long_name, VAR_1)) {
   FUNC_1(FUNC_0("did you mean `--%s` (with two dashes ?)"), VAR_1);
   FUNC_2(129);
  }
 }
}
