
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *,char*,char*,...) ;
 char* FUNC_1 (struct object_id const*) ;

__attribute__((used)) static int FUNC_2(FILE *VAR_0, const char *VAR_1,
         const struct object_id *VAR_2,
         const struct object_id *VAR_3)
{
 if (FUNC_0(VAR_0, "%s %s\n", FUNC_1(VAR_2), VAR_1) < 0 ||
     (VAR_3 && FUNC_0(VAR_0, "^%s\n", FUNC_1(VAR_3)) < 0))
  return -1;

 return 0;
}
