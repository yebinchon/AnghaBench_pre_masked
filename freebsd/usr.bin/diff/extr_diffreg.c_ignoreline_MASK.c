
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool
FUNC_1(char *VAR_1, bool VAR_2)
{

 if (VAR_0 != ((void*)0) && VAR_2)
  return (FUNC_0(VAR_1) || *VAR_1 == '\0');
 if (VAR_0 != ((void*)0))
  return (FUNC_0(VAR_1));
 if (VAR_2)
  return (*VAR_1 == '\0');

 return (0);
}
