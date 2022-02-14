
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int bwstring_iterator ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

int
FUNC_2(bwstring_iterator VAR_0, bwstring_iterator VAR_1, size_t VAR_2)
{
 wchar_t VAR_3, VAR_4;
 size_t VAR_5 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_3 = FUNC_0(VAR_0);
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_3 != VAR_4)
   return (VAR_3 - VAR_4);
  VAR_0 = FUNC_1(VAR_0, 1);
  VAR_1 = FUNC_1(VAR_1, 1);
 }

 return (0);
}
