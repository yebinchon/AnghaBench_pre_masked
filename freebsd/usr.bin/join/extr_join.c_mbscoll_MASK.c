
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char const*) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_1, const char *VAR_2)
{
 wchar_t *VAR_3, *VAR_4;
 int VAR_5;

 if (VAR_0 == 1)
  return (FUNC_2(VAR_1, VAR_2));
 if ((VAR_3 = FUNC_3(VAR_1)) == ((void*)0) || (VAR_4 = FUNC_3(VAR_2)) == ((void*)0))
  FUNC_0(1, ((void*)0));
 VAR_5 = FUNC_4(VAR_3, VAR_4);
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 return (VAR_5);
}
