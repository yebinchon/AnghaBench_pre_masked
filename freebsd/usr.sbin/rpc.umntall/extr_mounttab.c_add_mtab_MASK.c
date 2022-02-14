
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,long,char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(char *VAR_1, char *VAR_2)
{
 FILE *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, "a")) == ((void*)0))
  return (0);
 else {
  FUNC_2(VAR_3, "%ld\t%s\t%s\n",
      (long)FUNC_3(((void*)0)), VAR_1, VAR_2);
  FUNC_0(VAR_3);
  return (1);
 }
}
