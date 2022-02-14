
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,unsigned char*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(wchar_t *VAR_2, unsigned char *VAR_3, unsigned char *VAR_4)
{
 for (; VAR_3 < VAR_4 && FUNC_0(VAR_2, VAR_3, VAR_4) == VAR_1; ++VAR_3) {
  for (; VAR_3 < VAR_4 && *VAR_3 != '\n'; ++VAR_3)
   if (FUNC_2(*VAR_3) == VAR_0)
    FUNC_1(2, "stdout");
  if (FUNC_2('\n') == VAR_0)
   FUNC_1(2, "stdout");
 }
}
