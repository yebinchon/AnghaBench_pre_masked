
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utmpx {short ut_type; int ut_tv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (struct utmpx*) ;

__attribute__((used)) static int
FUNC_3(short VAR_0)
{
 struct utmpx VAR_1 = { .ut_type = VAR_0 };

 (void)FUNC_0(&VAR_1.ut_tv, ((void*)0));
 if (FUNC_2(&VAR_1) == ((void*)0)) {
  FUNC_1("pututxline");
  return (1);
 }
 return (0);
}
