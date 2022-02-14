
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, int VAR_4,
          const char *VAR_5, int VAR_6,
          long VAR_7)
{
 if (VAR_7 & VAR_2) {
  for (; VAR_4 > 0 && FUNC_0(VAR_3[VAR_4 - 1]); VAR_4--);
  for (; VAR_6 > 0 && FUNC_0(VAR_5[VAR_6 - 1]); VAR_6--);
 }

 if (!(VAR_7 & (VAR_0 | VAR_1)))
  return (VAR_4 == VAR_6 && !FUNC_1(VAR_3, VAR_5, VAR_4));

 while (VAR_4 > 0 && VAR_6 > 0) {
  VAR_4--;
  VAR_6--;
  if (FUNC_0(VAR_3[VAR_4]) || FUNC_0(VAR_5[VAR_6])) {
   if ((VAR_7 & VAR_1) &&
       (!FUNC_0(VAR_3[VAR_4]) || !FUNC_0(VAR_5[VAR_6])))
    return 0;

   for (; VAR_4 > 0 && FUNC_0(VAR_3[VAR_4]); VAR_4--);
   for (; VAR_6 > 0 && FUNC_0(VAR_5[VAR_6]); VAR_6--);
  }
  if (VAR_3[VAR_4] != VAR_5[VAR_6])
   return 0;
 }

 if (VAR_7 & VAR_0) {

  for (; VAR_4 > 0 && FUNC_0(VAR_3[VAR_4 - 1]); VAR_4--);
  for (; VAR_6 > 0 && FUNC_0(VAR_5[VAR_6 - 1]); VAR_6--);
 }


 if (!VAR_4 && !VAR_6)
  return 1;

 return 0;
}
