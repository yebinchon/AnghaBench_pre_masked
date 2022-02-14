
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ attack_mode; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_8__ {int dicts_cnt; } ;
typedef TYPE_2__ straight_ctx_t ;
struct TYPE_9__ {int masks_cnt; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_10__ {int opti_type; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_11__ {TYPE_3__* mask_ctx; TYPE_2__* straight_ctx; TYPE_1__* user_options; TYPE_4__* hashconfig; } ;
typedef TYPE_5__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

int FUNC_0 (const hashcat_ctx_t *VAR_6)
{
  const hashconfig_t *VAR_7 = VAR_6->hashconfig;
  const user_options_t *VAR_8 = VAR_6->user_options;

  if (VAR_8->attack_mode == VAR_4)
  {
    return 1;
  }

  if (VAR_8->attack_mode == VAR_1)
  {
    return 1;
  }

  if (VAR_8->attack_mode == VAR_0)
  {
    return 1;
  }

  if (VAR_8->attack_mode == VAR_2)
  {
    const mask_ctx_t *VAR_9 = VAR_6->mask_ctx;

    return VAR_9->masks_cnt;
  }

  if (VAR_8->attack_mode == VAR_3)
  {
    if (VAR_7->opti_type & VAR_5)
    {
      const straight_ctx_t *VAR_10 = VAR_6->straight_ctx;

      return VAR_10->dicts_cnt;
    }

    const mask_ctx_t *VAR_11 = VAR_6->mask_ctx;

    return VAR_11->masks_cnt;
  }

  return 0;
}
