
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static int
FUNC_2(const wchar_t *VAR_2, const wchar_t *VAR_3)
{
 int VAR_4 = 0;

 VAR_1 = 0;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_1 == VAR_0) {
  VAR_1 = 0;
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_1 != 0) {
   for (size_t VAR_5 = 0; ; ++VAR_5) {
    wchar_t VAR_6 = VAR_2[VAR_5];
    wchar_t VAR_7 = VAR_3[VAR_5];
    if (VAR_6 == L'\0')
     return ((VAR_7 == L'\0') ? 0 : -1);
    if (VAR_7 == L'\0')
     return (+1);
    if (VAR_6 == VAR_7)
     continue;
    return ((int)(VAR_6 - VAR_7));
   }
  }
 }
 return (VAR_4);
}
