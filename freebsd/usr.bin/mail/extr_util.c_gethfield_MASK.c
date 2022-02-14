
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int,int *) ;

int
FUNC_5(FILE *VAR_1, char VAR_2[], int VAR_3, char **VAR_4)
{
 char VAR_5[VAR_0];
 char *VAR_6, *VAR_7;
 int VAR_8;

 for (;;) {
  if (--VAR_3 < 0)
   return (-1);
  if ((VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_0)) <= 0)
   return (-1);
  for (VAR_6 = VAR_2; FUNC_2((unsigned char)*VAR_6) && *VAR_6 != ' ' && *VAR_6 != ':';
      VAR_6++)
   ;
  if (*VAR_6 != ':' || VAR_6 == VAR_2)
   continue;




  *VAR_4 = VAR_6;
  VAR_6 = VAR_2 + VAR_8;
  for (;;) {
   while (--VAR_6 >= VAR_2 && (*VAR_6 == ' ' || *VAR_6 == '\t'))
    ;
   VAR_6++;
   if (VAR_3 <= 0)
    break;
   FUNC_4(VAR_8 = FUNC_1(VAR_1), VAR_1);
   if (VAR_8 != ' ' && VAR_8 != '\t')
    break;
   if ((VAR_8 = FUNC_3(VAR_1, VAR_5, VAR_0)) < 0)
    break;
   VAR_3--;
   for (VAR_7 = VAR_5; *VAR_7 == ' ' || *VAR_7 == '\t'; VAR_7++)
    ;
   VAR_8 -= VAR_7 - VAR_5;
   if (VAR_6 + VAR_8 >= VAR_2 + VAR_0 - 2)
    break;
   *VAR_6++ = ' ';
   FUNC_0(VAR_7, VAR_6, VAR_8);
   VAR_6 += VAR_8;
  }
  *VAR_6 = 0;
  return (VAR_3);
 }

}
