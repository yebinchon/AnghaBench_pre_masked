
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ attack_mode; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_10__ {int dict; } ;
typedef TYPE_2__ straight_ctx_t ;
struct TYPE_11__ {int mask; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_12__ {int opti_type; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_13__ {TYPE_3__* mask_ctx; TYPE_2__* straight_ctx; TYPE_6__* combinator_ctx; TYPE_1__* user_options; TYPE_4__* hashconfig; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_14__ {scalar_t__ combs_mode; int dict1; int dict2; } ;
typedef TYPE_6__ combinator_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (TYPE_5__ const*) ;
 char* FUNC_1 (int ) ;

char *FUNC_2 (const hashcat_ctx_t *VAR_7)
{
  const hashconfig_t *VAR_8 = VAR_7->hashconfig;
  const user_options_t *VAR_9 = VAR_7->user_options;

  if (VAR_9->attack_mode == VAR_4)
  {
    return FUNC_0 (VAR_7);
  }

  if (VAR_9->attack_mode == VAR_1)
  {
    const combinator_ctx_t *VAR_10 = VAR_7->combinator_ctx;

    if (VAR_10->combs_mode == VAR_5)
    {
      return FUNC_1 (VAR_10->dict2);
    }
    return FUNC_1 (VAR_10->dict1);
  }

  if (VAR_9->attack_mode == VAR_0)
  {

  }

  if (VAR_9->attack_mode == VAR_2)
  {
    const mask_ctx_t *VAR_11 = VAR_7->mask_ctx;

    return FUNC_1 (VAR_11->mask);
  }

  if (VAR_9->attack_mode == VAR_3)
  {
    if (VAR_8->opti_type & VAR_6)
    {
      const straight_ctx_t *VAR_12 = VAR_7->straight_ctx;

      return FUNC_1 (VAR_12->dict);
    }

    const mask_ctx_t *VAR_13 = VAR_7->mask_ctx;

    return FUNC_1 (VAR_13->mask);
  }

  return ((void*)0);
}
