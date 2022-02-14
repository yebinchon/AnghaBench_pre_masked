
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int slow_candidates; scalar_t__ limit; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_11__ {scalar_t__ attack_kern; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef int u64 ;
struct TYPE_12__ {int kernel_rules_cnt; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_13__ {int words_cnt; int words_base; } ;
typedef TYPE_4__ status_ctx_t ;
struct TYPE_14__ {int bfs_cnt; } ;
typedef TYPE_5__ mask_ctx_t ;
struct TYPE_15__ {int salts_cnt; } ;
typedef TYPE_6__ hashes_t ;
struct TYPE_16__ {TYPE_3__* straight_ctx; TYPE_5__* mask_ctx; TYPE_8__* combinator_ctx; TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_4__* status_ctx; TYPE_6__* hashes; } ;
typedef TYPE_7__ hashcat_ctx_t ;
struct TYPE_17__ {int combs_cnt; } ;
typedef TYPE_8__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

u64 FUNC_1 (const hashcat_ctx_t *VAR_3)
{
  const hashes_t *VAR_4 = VAR_3->hashes;
  const status_ctx_t *VAR_5 = VAR_3->status_ctx;
  const user_options_t *VAR_6 = VAR_3->user_options;
  const user_options_extra_t *VAR_7 = VAR_3->user_options_extra;

  u64 VAR_8 = VAR_5->words_cnt * VAR_4->salts_cnt;

  if (VAR_6->limit)
  {
    const combinator_ctx_t *VAR_9 = VAR_3->combinator_ctx;
    const mask_ctx_t *VAR_10 = VAR_3->mask_ctx;
    const straight_ctx_t *VAR_11 = VAR_3->straight_ctx;

    VAR_8 = FUNC_0 (VAR_6->limit, VAR_5->words_base) * VAR_4->salts_cnt;

    if (VAR_6->slow_candidates == 1)
    {

    }
    else
    {
      if (VAR_7->attack_kern == VAR_2) VAR_8 *= VAR_11->kernel_rules_cnt;
      else if (VAR_7->attack_kern == VAR_1) VAR_8 *= VAR_9->combs_cnt;
      else if (VAR_7->attack_kern == VAR_0) VAR_8 *= VAR_10->bfs_cnt;
    }
  }

  return VAR_8;
}
