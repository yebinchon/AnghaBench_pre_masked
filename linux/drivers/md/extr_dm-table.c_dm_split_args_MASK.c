
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char** FUNC_1 (unsigned int*,char**) ;
 char* FUNC_2 (char*) ;

int FUNC_3(int *VAR_1, char ***VAR_2, char *VAR_3)
{
 char *VAR_4, *VAR_5 = VAR_3, *VAR_6, **VAR_7 = ((void*)0);
 unsigned VAR_8 = 0;

 *VAR_1 = 0;

 if (!VAR_3) {
  *VAR_2 = ((void*)0);
  return 0;
 }

 VAR_7 = FUNC_1(&VAR_8, VAR_7);
 if (!VAR_7)
  return -VAR_0;

 while (1) {

  VAR_4 = FUNC_2(VAR_5);

  if (!*VAR_4)
   break;


  VAR_5 = VAR_6 = VAR_4;
  while (*VAR_5) {

   if (*VAR_5 == '\\' && *(VAR_5 + 1)) {
    *VAR_6++ = *(VAR_5 + 1);
    VAR_5 += 2;
    continue;
   }

   if (FUNC_0(*VAR_5))
    break;

   *VAR_6++ = *VAR_5++;
  }


  if ((*VAR_1 + 1) > VAR_8) {
   VAR_7 = FUNC_1(&VAR_8, VAR_7);
   if (!VAR_7)
    return -VAR_0;
  }


  if (*VAR_5)
   VAR_5++;


  *VAR_6 = '\0';
  VAR_7[*VAR_1] = VAR_4;
  (*VAR_1)++;
 }

 *VAR_2 = VAR_7;
 return 0;
}
