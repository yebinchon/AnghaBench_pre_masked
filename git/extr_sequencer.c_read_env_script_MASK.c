
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 int FUNC_0 (struct argv_array*,char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char**,char**,char**,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct argv_array *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;

 if (FUNC_2(FUNC_3(),
          &VAR_1, &VAR_2, &VAR_3, 0))
  return -1;

 FUNC_0(VAR_0, "GIT_AUTHOR_NAME=%s", VAR_1);
 FUNC_0(VAR_0, "GIT_AUTHOR_EMAIL=%s", VAR_2);
 FUNC_0(VAR_0, "GIT_AUTHOR_DATE=%s", VAR_3);
 FUNC_1(VAR_1);
 FUNC_1(VAR_2);
 FUNC_1(VAR_3);

 return 0;
}
