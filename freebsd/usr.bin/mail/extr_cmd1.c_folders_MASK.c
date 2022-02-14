
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dirname ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int,int,char*,int *) ;
 char* FUNC_3 (char*) ;

int
FUNC_4(void)
{
 char VAR_1[VAR_0];
 char *VAR_2;

 if (FUNC_0(VAR_1, sizeof(VAR_1)) < 0) {
  FUNC_1("No value set for \"folder\"\n");
  return (1);
 }
 if ((VAR_2 = FUNC_3("LISTER")) == ((void*)0))
  VAR_2 = "ls";
 (void)FUNC_2(VAR_2, 0, -1, -1, VAR_1, ((void*)0));
 return (0);
}
