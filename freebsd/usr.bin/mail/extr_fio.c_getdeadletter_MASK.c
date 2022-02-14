
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char*) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3(void)
{
 char *VAR_1;

 if ((VAR_1 = FUNC_2("DEAD")) == ((void*)0) || (VAR_1 = FUNC_0(VAR_1)) == ((void*)0))
  VAR_1 = FUNC_0("~/dead.letter");
 else if (*VAR_1 != '/') {
  char VAR_2[VAR_0];

  (void)FUNC_1(VAR_2, sizeof(VAR_2), "~/%s", VAR_1);
  VAR_1 = FUNC_0(VAR_2);
 }
 return (VAR_1);
}
