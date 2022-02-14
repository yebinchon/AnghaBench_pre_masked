
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,char const*) ;

int FUNC_4(const char *VAR_2, const char *VAR_3)
{
 wchar_t VAR_4[VAR_0], VAR_5[VAR_0];
 if (FUNC_3(VAR_4, VAR_2) < 0 ||
  FUNC_3(VAR_5, VAR_3) < 0)
  return -1;

 if (!FUNC_0(VAR_5, VAR_4, ((void*)0))) {
  VAR_1 = FUNC_2(FUNC_1());
  return -1;
 }
 return 0;
}
