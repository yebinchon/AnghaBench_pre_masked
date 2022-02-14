
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

int FUNC_4(const char *VAR_1, int VAR_2)
{
 int VAR_3;
 wchar_t VAR_4[VAR_0];
 if (FUNC_3(VAR_4, VAR_1) < 0)
  return -1;
 VAR_3 = FUNC_0(VAR_4);
 if (!VAR_3 && FUNC_1(VAR_1))
  return FUNC_2(VAR_4, 1);
 return VAR_3;
}
