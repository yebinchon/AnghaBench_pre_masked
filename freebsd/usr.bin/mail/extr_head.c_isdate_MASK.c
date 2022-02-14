
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int *) ;
 int ** VAR_0 ;

int
FUNC_1(char VAR_1[])
{
 int VAR_2;

 for(VAR_2 = 0; VAR_0[VAR_2] != ((void*)0); VAR_2++) {
  if (FUNC_0(VAR_1, VAR_0[VAR_2]))
   return (1);
 }
 return (0);
}
