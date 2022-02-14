
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quakefile_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_0 ;
 char* FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

quakefile_t *FUNC_5(char *VAR_1)
{
 char *VAR_2;
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 char VAR_5[VAR_0];

 FUNC_3(VAR_3, VAR_1);
 FUNC_0(VAR_3);
 FUNC_3(VAR_4, VAR_3);

 VAR_2 = FUNC_2(VAR_4, ".pak", 0);
 if (!VAR_2) VAR_2 = FUNC_2(VAR_4, ".pk3", 0);

 if (VAR_2)
 {
  VAR_2 += FUNC_4(".pak");
  if (*VAR_2)
  {
   *VAR_2++ = '\0';
   while(*VAR_2 == '\\' || *VAR_2 == '/') VAR_2++;
   FUNC_3(VAR_5, VAR_2);
   return FUNC_1(VAR_4, VAR_5);
  }
 }
 return FUNC_1(((void*)0), VAR_3);
}
