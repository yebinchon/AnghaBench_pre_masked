
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int slow_candidates; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {scalar_t__ attack_kern; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef int u64 ;
struct TYPE_10__ {int kernel_rules_cnt; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_11__ {int bfs_cnt; } ;
typedef TYPE_4__ mask_ctx_t ;
struct TYPE_12__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* straight_ctx; TYPE_4__* mask_ctx; TYPE_6__* combinator_ctx; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_13__ {int combs_cnt; } ;
typedef TYPE_6__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

u64 FUNC_0 (hashcat_ctx_t *VAR_3)
{
  const combinator_ctx_t *VAR_4 = VAR_3->combinator_ctx;
  const mask_ctx_t *VAR_5 = VAR_3->mask_ctx;
  const straight_ctx_t *VAR_6 = VAR_3->straight_ctx;
  const user_options_t *VAR_7 = VAR_3->user_options;
  const user_options_extra_t *VAR_8 = VAR_3->user_options_extra;

  if (VAR_7->slow_candidates == 1)
  {
    return 1;
  }

  if (VAR_8->attack_kern == VAR_2)
  {
    if (VAR_6->kernel_rules_cnt)
    {
      return VAR_6->kernel_rules_cnt;
    }
  }
  else if (VAR_8->attack_kern == VAR_1)
  {
    if (VAR_4->combs_cnt)
    {
      return VAR_4->combs_cnt;
    }
  }
  else if (VAR_8->attack_kern == VAR_0)
  {
    if (VAR_5->bfs_cnt)
    {
      return VAR_5->bfs_cnt;
    }
  }

  return 1;
}
