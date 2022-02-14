
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_commit ;


 char* FUNC_0 (int const*) ;
 int * FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const git_commit *VAR_0, const char *VAR_1) {
 const char *VAR_2 = ((void*)0);

 if (VAR_1 == ((void*)0))
  return 1;

 if ((VAR_2 = FUNC_0(VAR_0)) != ((void*)0) &&
  FUNC_1(VAR_2, VAR_1) != ((void*)0))
  return 1;

 return 0;
}
