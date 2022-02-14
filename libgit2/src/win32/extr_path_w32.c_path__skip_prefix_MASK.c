
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;

__attribute__((used)) static wchar_t *FUNC_5(wchar_t *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  VAR_2 += VAR_1;

  if (FUNC_4(VAR_2, L"UNC\\", 4) == 0)
   VAR_2 = FUNC_3(VAR_2 + 4);
  else if (FUNC_0(VAR_2))
   VAR_2 += VAR_0;
 } else if (FUNC_0(VAR_2)) {
  VAR_2 += VAR_0;
 } else if (FUNC_2(VAR_2)) {
  VAR_2 = FUNC_3(VAR_2 + 2);
 }

 return VAR_2;
}
