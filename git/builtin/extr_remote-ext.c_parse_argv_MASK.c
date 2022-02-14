
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int FUNC_0 (struct argv_array*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char const*,char const**) ;

__attribute__((used)) static void FUNC_3(struct argv_array *VAR_0, const char *VAR_1, const char *VAR_2)
{
 while (*VAR_1) {
  char *VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_1);
  if (VAR_3)
   FUNC_0(VAR_0, VAR_3);
  FUNC_1(VAR_3);
 }
}
