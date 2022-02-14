
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 () ;
 char const* FUNC_3 (struct commit*,int *,char const*) ;
 struct commit* FUNC_4 (char const*) ;

__attribute__((used)) static const char *FUNC_5(const char *VAR_0)
{
 const char *VAR_1;
 struct commit *VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (!VAR_2)
  FUNC_1(FUNC_0("could not lookup commit %s"), VAR_0);
 VAR_1 = FUNC_2();
 return FUNC_3(VAR_2, ((void*)0), VAR_1);
}
