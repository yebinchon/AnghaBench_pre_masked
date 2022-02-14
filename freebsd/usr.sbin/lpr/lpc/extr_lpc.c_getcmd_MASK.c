
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* c_name; } ;


 struct cmd* VAR_0 ;

__attribute__((used)) static struct cmd *
FUNC_0(const char *VAR_1)
{
 register const char *VAR_2, *VAR_3;
 register struct cmd *VAR_4, *VAR_5;
 register int VAR_6, VAR_7;

 VAR_7 = 0;
 VAR_6 = 0;
 VAR_5 = ((void*)0);
 for (VAR_4 = VAR_0; (VAR_2 = VAR_4->c_name); VAR_4++) {
  for (VAR_3 = VAR_1; *VAR_3 == *VAR_2++; VAR_3++)
   if (*VAR_3 == 0)
    return(VAR_4);
  if (!*VAR_3) {
   if (VAR_3 - VAR_1 > VAR_7) {
    VAR_7 = VAR_3 - VAR_1;
    VAR_6 = 1;
    VAR_5 = VAR_4;
   } else if (VAR_3 - VAR_1 == VAR_7)
    VAR_6++;
  }
 }
 if (VAR_6 > 1)
  return((struct cmd *)-1);
 return(VAR_5);
}
