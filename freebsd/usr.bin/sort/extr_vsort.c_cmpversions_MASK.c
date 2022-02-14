
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ bwstring_iterator ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(bwstring_iterator VAR_0, bwstring_iterator VAR_1,
    bwstring_iterator VAR_2, bwstring_iterator VAR_3)
{
 int VAR_4, VAR_5;

 while ((VAR_0 < VAR_1) || (VAR_2 < VAR_3)) {
  VAR_5 = 0;

  while (((VAR_0 < VAR_1) &&
      !FUNC_3(FUNC_0(VAR_0))) ||
      ((VAR_2 < VAR_3) && !FUNC_3(FUNC_0(VAR_2)))) {
   wchar_t VAR_6, VAR_7;

   VAR_6 = (VAR_0 < VAR_1) ? FUNC_0(VAR_0) : 0;
   VAR_7 = (VAR_2 < VAR_3) ? FUNC_0(VAR_2) : 0;

   VAR_4 = FUNC_2(VAR_6, VAR_7);
   if (VAR_4)
    return (VAR_4);

   if (VAR_0 < VAR_1)
    VAR_0 = FUNC_1(VAR_0, 1);
   if (VAR_2 < VAR_3)
    VAR_2 = FUNC_1(VAR_2, 1);
  }

  while (FUNC_0(VAR_0) == L'0')
   VAR_0 = FUNC_1(VAR_0, 1);

  while (FUNC_0(VAR_2) == L'0')
   VAR_2 = FUNC_1(VAR_2, 1);

  while (FUNC_3(FUNC_0(VAR_0)) &&
      FUNC_3(FUNC_0(VAR_2))) {
   if (!VAR_5)
    VAR_5 = ((int)FUNC_0(VAR_0) -
        (int)FUNC_0(VAR_2));
   VAR_0 = FUNC_1(VAR_0, 1);
   VAR_2 = FUNC_1(VAR_2, 1);
  }

  if (FUNC_3(FUNC_0(VAR_0)))
   return (1);

  if (FUNC_3(FUNC_0(VAR_2)))
   return (-1);

  if (VAR_5)
   return (VAR_5);
 }

 return (0);
}
