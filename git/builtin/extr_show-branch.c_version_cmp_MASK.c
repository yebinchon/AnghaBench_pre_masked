
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 while (1) {
  int VAR_2, VAR_3;

  VAR_0 = FUNC_0(VAR_0, &VAR_2);
  VAR_1 = FUNC_0(VAR_1, &VAR_3);
  if (VAR_2 != VAR_3)
   return VAR_2 - VAR_3;

  while (1) {
   int VAR_4 = *VAR_0;
   int VAR_5 = *VAR_1;
   if ('0' <= VAR_4 && VAR_4 <= '9')
    VAR_4 = 0;
   if ('0' <= VAR_5 && VAR_5 <= '9')
    VAR_5 = 0;
   if (VAR_4 != VAR_5)
    return VAR_4 - VAR_5;
   if (!VAR_4)
    break;
   VAR_0++;
   VAR_1++;
  }
  if (!*VAR_0 && !*VAR_1)
   return 0;
 }
}
