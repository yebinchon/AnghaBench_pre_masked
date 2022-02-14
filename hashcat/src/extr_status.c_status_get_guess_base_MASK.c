
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ attack_mode; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_10__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_2__ user_options_extra_t ;
struct TYPE_11__ {int dict; } ;
typedef TYPE_3__ straight_ctx_t ;
struct TYPE_12__ {int mask; } ;
typedef TYPE_4__ mask_ctx_t ;
struct TYPE_13__ {int opti_type; } ;
typedef TYPE_5__ hashconfig_t ;
struct TYPE_14__ {TYPE_3__* straight_ctx; TYPE_4__* mask_ctx; TYPE_7__* combinator_ctx; TYPE_2__* user_options_extra; TYPE_1__* user_options; TYPE_5__* hashconfig; } ;
typedef TYPE_6__ hashcat_ctx_t ;
struct TYPE_15__ {scalar_t__ combs_mode; int dict2; int dict1; } ;
typedef TYPE_7__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_0 (int ) ;

char *FUNC_1 (const hashcat_ctx_t *VAR_8)
{
  const hashconfig_t *VAR_9 = VAR_8->hashconfig;
  const user_options_t *VAR_10 = VAR_8->user_options;
  const user_options_extra_t *VAR_11 = VAR_8->user_options_extra;

  if (VAR_10->attack_mode == VAR_4)
  {
    if (VAR_11->wordlist_mode == VAR_7)
    {
      const straight_ctx_t *VAR_12 = VAR_8->straight_ctx;

      return FUNC_0 (VAR_12->dict);
    }
  }

  if (VAR_10->attack_mode == VAR_1)
  {
    const combinator_ctx_t *VAR_13 = VAR_8->combinator_ctx;

    if (VAR_13->combs_mode == VAR_5)
    {
      return FUNC_0 (VAR_13->dict1);
    }
    return FUNC_0 (VAR_13->dict2);
  }

  if (VAR_10->attack_mode == VAR_0)
  {
    const mask_ctx_t *VAR_14 = VAR_8->mask_ctx;

    return FUNC_0 (VAR_14->mask);
  }

  if (VAR_10->attack_mode == VAR_2)
  {
    const straight_ctx_t *VAR_15 = VAR_8->straight_ctx;

    return FUNC_0 (VAR_15->dict);
  }

  if (VAR_10->attack_mode == VAR_3)
  {
    if (VAR_9->opti_type & VAR_6)
    {
      const mask_ctx_t *VAR_16 = VAR_8->mask_ctx;

      return FUNC_0 (VAR_16->mask);
    }

    const straight_ctx_t *VAR_17 = VAR_8->straight_ctx;

    return FUNC_0 (VAR_17->dict);
  }
  return ((void*)0);
}
