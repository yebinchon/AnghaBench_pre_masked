
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,unsigned long) ;
 char* FUNC_1 (char const*,char) ;
 unsigned long FUNC_2 (char const*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0,
   const char **VAR_1, unsigned long *VAR_2,
   const char **VAR_3, unsigned long *VAR_4,
   unsigned long *VAR_5,
   const char **VAR_6, unsigned long *VAR_7)
{
 const char *VAR_8;

 while (*VAR_0 && *VAR_0 != '\n') {
  VAR_8 = FUNC_1(VAR_0, '\n');
  if (*VAR_8)
   VAR_8++;
  VAR_0 = VAR_8;
 }

 while (*VAR_0 == '\n')
  VAR_0++;


 *VAR_6 = VAR_0 + FUNC_0(VAR_0, FUNC_2(VAR_0));
 *VAR_7 = FUNC_2(*VAR_6);


 *VAR_1 = VAR_0;

 while (VAR_0 < *VAR_6 && *VAR_0 && *VAR_0 != '\n') {
  VAR_8 = FUNC_1(VAR_0, '\n');
  if (*VAR_8)
   VAR_8++;
  VAR_0 = VAR_8;
 }
 *VAR_2 = VAR_0 - *VAR_1;

 if (*VAR_2 && (*VAR_1)[*VAR_2 - 1] == '\n')
  *VAR_2 -= 1;


 while (*VAR_0 == '\n')
  VAR_0++;
 *VAR_3 = VAR_0;
 *VAR_4 = FUNC_2(VAR_0);
 *VAR_5 = *VAR_6 - VAR_0;
}
