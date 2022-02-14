
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int slow_candidates; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_13__ {scalar_t__ attack_kern; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_14__ {scalar_t__ kernel_rules_cnt; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_15__ {scalar_t__ il_pos; scalar_t__ gidvid; } ;
typedef TYPE_4__ plain_t ;
struct TYPE_16__ {scalar_t__ bfs_cnt; } ;
typedef TYPE_5__ mask_ctx_t ;
struct TYPE_17__ {scalar_t__ const innerloop_pos; scalar_t__ words_off; } ;
typedef TYPE_6__ hc_device_param_t ;
struct TYPE_18__ {TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_3__* straight_ctx; TYPE_5__* mask_ctx; TYPE_8__* combinator_ctx; } ;
typedef TYPE_7__ hashcat_ctx_t ;
struct TYPE_19__ {scalar_t__ combs_cnt; } ;
typedef TYPE_8__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0 (hashcat_ctx_t *VAR_3, hc_device_param_t *VAR_4, plain_t *VAR_5, u64 *VAR_6)
{
  const combinator_ctx_t *VAR_7 = VAR_3->combinator_ctx;
  const mask_ctx_t *VAR_8 = VAR_3->mask_ctx;
  const straight_ctx_t *VAR_9 = VAR_3->straight_ctx;
  const user_options_t *VAR_10 = VAR_3->user_options;
  const user_options_extra_t *VAR_11 = VAR_3->user_options_extra;

  const u64 VAR_12 = VAR_5->gidvid;
  const u32 VAR_13 = VAR_5->il_pos;

  u64 VAR_14 = VAR_4->words_off;

  if (VAR_10->slow_candidates == 1)
  {
    VAR_14 = VAR_12;
  }
  else
  {
    if (VAR_11->attack_kern == VAR_1)
    {
      VAR_14 += VAR_12;
      VAR_14 *= VAR_9->kernel_rules_cnt;
      VAR_14 += VAR_4->innerloop_pos + VAR_13;
    }
    else if (VAR_11->attack_kern == VAR_0)
    {
      VAR_14 += VAR_12;
      VAR_14 *= VAR_7->combs_cnt;
      VAR_14 += VAR_4->innerloop_pos + VAR_13;
    }
    else if (VAR_11->attack_kern == VAR_2)
    {
      VAR_14 += VAR_12;
      VAR_14 *= VAR_8->bfs_cnt;
      VAR_14 += VAR_4->innerloop_pos + VAR_13;
    }
  }

  *VAR_6 = VAR_14;

  return 0;
}
