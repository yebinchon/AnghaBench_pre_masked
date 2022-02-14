
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (char,char*) ;

int
FUNC_2(char VAR_1, char *VAR_2)
{

 if (VAR_0 != ((void*)0)) {
  FUNC_0("only one output file allowed");
  return -1;
 }

 if (FUNC_1(VAR_1, VAR_2))
  return -1;

 VAR_0 = VAR_2;

 return 0;
}
