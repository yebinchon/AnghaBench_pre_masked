
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, FILE *VAR_4)
{
 char VAR_5[VAR_1];

 FUNC_1(VAR_4);
 while (FUNC_0(VAR_5, VAR_1, VAR_4)) {
  if (VAR_5[0] != '\0')
   if (VAR_5[FUNC_3(VAR_5)-1] == '\n')
    VAR_5[FUNC_3(VAR_5)-1] = '\0';
  if (0 == FUNC_2(VAR_5, VAR_3))
   return VAR_2;
 }
 return VAR_0;
}
