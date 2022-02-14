
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char,char*) ;
 int FUNC_1 (char*,...) ;
 int * VAR_0 ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char,char*) ;

int
FUNC_4(char VAR_1, char *VAR_2)
{

 FUNC_0(1,"parsing board option: -%c %s", VAR_1, VAR_2);

 if (VAR_0 != ((void*)0)) {
  FUNC_1("only one board option allowed");
  return -1;
 }

 if (FUNC_3(VAR_1, VAR_2))
  return -1;

 VAR_0 = FUNC_2(VAR_2);
 if (VAR_0 == ((void*)0)){
  FUNC_1("invalid/unknown board specified: %s", VAR_2);
  return -1;
 }

 return 0;
}
