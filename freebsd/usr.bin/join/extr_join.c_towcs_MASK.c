
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int * FUNC_0 (size_t) ;
 size_t FUNC_1 (int *,char const**,size_t,int *) ;

__attribute__((used)) static wchar_t *
FUNC_2(const char *VAR_0)
{
 wchar_t *VAR_1;
 size_t VAR_2;

 if ((VAR_2 = FUNC_1(((void*)0), &VAR_0, 0, ((void*)0))) == (size_t)-1)
  return (((void*)0));
 if ((VAR_1 = FUNC_0((VAR_2 + 1) * sizeof(*VAR_1))) == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_1, &VAR_0, VAR_2 + 1, ((void*)0));
 return (VAR_1);
}
