
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, size_t VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 const char *VAR_4 = VAR_0 + VAR_1;
 const char *VAR_5 = VAR_2 + VAR_3;


 while (VAR_0 < VAR_4 && (VAR_4[-1] == '\r' || VAR_4[-1] == '\n'))
  VAR_4--;
 while (VAR_2 < VAR_5 && (VAR_5[-1] == '\r' || VAR_5[-1] == '\n'))
  VAR_5--;

 while (VAR_0 < VAR_4 && VAR_2 < VAR_5) {
  if (FUNC_0(*VAR_0)) {




   if (!FUNC_0(*VAR_2))
    return 0;
   while (VAR_0 < VAR_4 && FUNC_0(*VAR_0))
    VAR_0++;
   while (VAR_2 < VAR_5 && FUNC_0(*VAR_2))
    VAR_2++;
  } else if (*VAR_0++ != *VAR_2++)
   return 0;
 }


 return VAR_0 == VAR_4 && VAR_2 == VAR_5;
}
