
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gengetopt_args_info {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char*,char const*) ;
 int FUNC_3 (int *,struct gengetopt_args_info*) ;
 int VAR_2 ;

int
FUNC_4(const char *VAR_3, struct gengetopt_args_info *VAR_4)
{
  FILE *VAR_5;
  int VAR_6 = 0;

  VAR_5 = FUNC_1(VAR_3, "w");

  if (!VAR_5)
    {
      FUNC_2 (VAR_2, "%s: cannot open file for writing: %s\n", VAR_1, VAR_3);
      return VAR_0;
    }

  VAR_6 = FUNC_3(VAR_5, VAR_4);
  FUNC_0 (VAR_5);

  return VAR_6;
}
