
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rp_gen; int rp_gen_func_max; int rp_gen_func_min; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ u32 ;
typedef int kernel_rule_t ;
struct TYPE_5__ {TYPE_1__* user_options; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;

int FUNC_6 (hashcat_ctx_t *VAR_1, kernel_rule_t **VAR_2, u32 *VAR_3)
{
  const user_options_t *VAR_4 = VAR_1->user_options;

  u32 VAR_5 = 0;
  kernel_rule_t *VAR_6 = (kernel_rule_t *) FUNC_2 (VAR_4->rp_gen, sizeof (kernel_rule_t));

  char *VAR_7 = (char *) FUNC_4 (VAR_0);

  for (VAR_5 = 0; VAR_5 < VAR_4->rp_gen; VAR_5++)
  {
    FUNC_5 (VAR_7, 0, VAR_0);

    int VAR_8 = FUNC_1 (VAR_7, VAR_4->rp_gen_func_min, VAR_4->rp_gen_func_max);

    if (FUNC_0 (VAR_7, VAR_8, &VAR_6[VAR_5]) == -1) continue;
  }

  FUNC_3 (VAR_7);

  *VAR_3 = VAR_5;
  *VAR_2 = VAR_6;

  return 0;
}
