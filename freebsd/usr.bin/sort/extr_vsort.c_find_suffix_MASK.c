
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ bwstring_iterator ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(bwstring_iterator VAR_0, bwstring_iterator VAR_1, size_t *VAR_2)
{
 wchar_t VAR_3;
 size_t VAR_4;
 bool VAR_5, VAR_6;

 VAR_6 = 0;
 VAR_5 = 0;
 *VAR_2 = 0;
 VAR_4 = 0;

 while ((VAR_0 < VAR_1) && (VAR_3 = FUNC_0(VAR_0))) {
  if (VAR_5) {
   VAR_5 = 0;
   if (!FUNC_3(VAR_3) && (VAR_3 != L'~'))
    VAR_6 = 0;
  } else if (VAR_3 == L'.') {
   VAR_5 = 1;
   if (!VAR_6) {
    VAR_6 = 1;
    *VAR_2 = VAR_4;
   }
  } else if (!FUNC_2(VAR_3) && (VAR_3 != L'~'))
   VAR_6 = 0;

  VAR_0 = FUNC_1(VAR_0, 1);
  ++VAR_4;
 }
 if (!VAR_6)
  *VAR_2 = VAR_4;
}
