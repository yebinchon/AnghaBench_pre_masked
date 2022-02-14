
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *) ;
 size_t FUNC_1 (scalar_t__*,char*,int ,int *) ;

__attribute__((used)) static char *
FUNC_2(char **VAR_2, const wchar_t *VAR_3)
{
 char *VAR_4, *VAR_5;
 const wchar_t *VAR_6;
 wchar_t VAR_7, VAR_8;
 size_t VAR_9;

 if ((VAR_4 = *VAR_2) == ((void*)0))
  return (((void*)0));
 for (VAR_5 = VAR_4;;) {
  VAR_9 = FUNC_1(&VAR_7, VAR_4, VAR_1, ((void*)0));
  if (VAR_9 == (size_t)-1 || VAR_9 == (size_t)-2)
   FUNC_0(1, VAR_0, ((void*)0));
  VAR_4 += VAR_9;
  VAR_6 = VAR_3;
  do {
   if ((VAR_8 = *VAR_6++) == VAR_7) {
    if (VAR_7 == 0)
     VAR_4 = ((void*)0);
    else
     VAR_4[-VAR_9] = '\0';
    *VAR_2 = VAR_4;
    return (VAR_5);
   }
  } while (VAR_8 != 0);
 }
}
