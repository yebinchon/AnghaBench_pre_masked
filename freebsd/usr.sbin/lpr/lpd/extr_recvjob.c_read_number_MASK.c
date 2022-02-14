
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lin ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 char VAR_1[80];
 register FILE *VAR_2;

 if ((VAR_2 = FUNC_3(VAR_0, "r")) == ((void*)0))
  return (0);
 if (FUNC_2(VAR_1, sizeof(VAR_1), VAR_2) == ((void*)0)) {
  FUNC_1(VAR_2);
  return (0);
 }
 FUNC_1(VAR_2);
 return (FUNC_0(VAR_1));
}
