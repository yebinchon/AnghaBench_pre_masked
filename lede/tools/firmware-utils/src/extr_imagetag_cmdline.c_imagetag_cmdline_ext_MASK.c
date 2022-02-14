
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imagetag_cmdline_params {int dummy; } ;
struct gengetopt_args_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gengetopt_args_info*) ;
 int FUNC_2 (int,char**,struct gengetopt_args_info*,struct imagetag_cmdline_params*,int ) ;

int
FUNC_3 (int VAR_1, char **VAR_2, struct gengetopt_args_info *VAR_3,
                   struct imagetag_cmdline_params *VAR_4)
{
  int VAR_5;
  VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4, 0);

  if (VAR_5 == VAR_0)
    {
      FUNC_1 (VAR_3);
      FUNC_0 (VAR_0);
    }

  return VAR_5;
}
