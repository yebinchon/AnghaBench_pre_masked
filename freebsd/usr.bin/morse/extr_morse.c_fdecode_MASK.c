
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (char*,int ) ;

void
FUNC_6(FILE *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 char VAR_6[VAR_0];

 VAR_5 = VAR_6;
 while (FUNC_1(VAR_5, VAR_0 - (VAR_5 - VAR_6), VAR_2)) {
  VAR_4 = VAR_6;

  while (*VAR_4 && FUNC_2(*VAR_4)) {
   VAR_4++;
  }
  while (*VAR_4 && FUNC_3(*VAR_4)) {
   VAR_4++;
   FUNC_4 (' ');
  }
  while (*VAR_4) {
   VAR_3 = FUNC_5(VAR_4, VAR_1);
   if (VAR_3 == ((void*)0)) {




    for (VAR_5 = VAR_6; *VAR_4; *VAR_5++ = *VAR_4++)
     ;
   } else {
    *VAR_3 = '\0';
    VAR_3++;
    FUNC_0(VAR_4);
    VAR_4 = VAR_3;
   }
  }
 }
 FUNC_4('\n');
}
