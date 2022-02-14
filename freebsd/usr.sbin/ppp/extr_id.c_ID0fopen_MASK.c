
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int * FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int ,char*,int *,char const*,char const*) ;

FILE *
FUNC_4(const char *VAR_1, const char *VAR_2)
{
  FILE *VAR_3;

  FUNC_0();
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_3(VAR_0, "%p = fopen(\"%s\", \"%s\")\n", VAR_3, VAR_1, VAR_2);
  FUNC_1();
  return VAR_3;
}
