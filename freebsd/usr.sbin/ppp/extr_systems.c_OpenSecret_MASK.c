
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;

FILE *
FUNC_3(const char *VAR_2)
{
  FILE *VAR_3;
  char VAR_4[100];

  FUNC_2(VAR_4, sizeof VAR_4, "%s/%s", VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_4, "r");
  if (VAR_3 == ((void*)0))
    FUNC_1(VAR_0, "OpenSecret: Can't open %s.\n", VAR_4);
  return (VAR_3);
}
