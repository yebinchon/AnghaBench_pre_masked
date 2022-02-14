
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int * FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_2)
{
 char VAR_3[VAR_1];
 int VAR_4, VAR_5;

 for (VAR_4 = 1; FUNC_1(VAR_3, sizeof(VAR_3), VAR_2) != ((void*)0); VAR_4++) {
  if (*VAR_3 == '#')
   continue;
  if ((VAR_5 = FUNC_0(VAR_3)) != 0) {
   FUNC_2("line %d: error in file", VAR_4);
   return (VAR_5);
  }
 }
 return (VAR_0);
}
