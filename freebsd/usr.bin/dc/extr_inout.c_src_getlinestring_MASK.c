
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct source*) ;

__attribute__((used)) static char *
FUNC_2(struct source *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4, VAR_5;

 VAR_4 = 0;
 while (VAR_4 < VAR_0-1) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == VAR_1)
   break;
  VAR_3[VAR_4++] = VAR_5;
  if (VAR_5 == '\n')
   break;
 }
 VAR_3[VAR_4] = '\0';
 return (FUNC_0(VAR_3));
}
