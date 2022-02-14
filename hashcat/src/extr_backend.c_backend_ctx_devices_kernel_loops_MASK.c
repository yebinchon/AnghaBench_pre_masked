
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int slow_candidates; } ;
typedef TYPE_2__ user_options_t ;
struct TYPE_17__ {scalar_t__ attack_kern; } ;
typedef TYPE_3__ user_options_extra_t ;
typedef int u32 ;
struct TYPE_18__ {scalar_t__ kernel_rules_cnt; } ;
typedef TYPE_4__ straight_ctx_t ;
struct TYPE_19__ {scalar_t__ bfs_cnt; } ;
typedef TYPE_5__ mask_ctx_t ;
struct TYPE_20__ {int skipped; int skipped_warning; scalar_t__ kernel_loops_min; scalar_t__ kernel_loops_min_sav; scalar_t__ kernel_loops_max; scalar_t__ kernel_loops_max_sav; } ;
typedef TYPE_6__ hc_device_param_t ;
struct TYPE_21__ {TYPE_1__* salts_buf; } ;
typedef TYPE_7__ hashes_t ;
struct TYPE_22__ {scalar_t__ attack_exec; } ;
typedef TYPE_8__ hashconfig_t ;
struct TYPE_23__ {TYPE_3__* user_options_extra; TYPE_2__* user_options; TYPE_4__* straight_ctx; TYPE_11__* backend_ctx; TYPE_5__* mask_ctx; TYPE_7__* hashes; TYPE_8__* hashconfig; TYPE_10__* combinator_ctx; } ;
typedef TYPE_9__ hashcat_ctx_t ;
struct TYPE_13__ {scalar_t__ combs_cnt; } ;
typedef TYPE_10__ combinator_ctx_t ;
struct TYPE_14__ {int enabled; int backend_devices_cnt; TYPE_6__* devices_param; } ;
typedef TYPE_11__ backend_ctx_t ;
struct TYPE_15__ {int salt_iter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

void FUNC_1 (hashcat_ctx_t *VAR_7)
{
  combinator_ctx_t *VAR_8 = VAR_7->combinator_ctx;
  hashconfig_t *VAR_9 = VAR_7->hashconfig;
  hashes_t *VAR_10 = VAR_7->hashes;
  mask_ctx_t *VAR_11 = VAR_7->mask_ctx;
  backend_ctx_t *VAR_12 = VAR_7->backend_ctx;
  straight_ctx_t *VAR_13 = VAR_7->straight_ctx;
  user_options_t *VAR_14 = VAR_7->user_options;
  user_options_extra_t *VAR_15 = VAR_7->user_options_extra;

  if (VAR_12->enabled == 0) return;

  for (int VAR_16 = 0; VAR_16 < VAR_12->backend_devices_cnt; VAR_16++)
  {
    hc_device_param_t *VAR_17 = &VAR_12->devices_param[VAR_16];

    if (VAR_17->skipped == 1) continue;

    if (VAR_17->skipped_warning == 1) continue;

    VAR_17->kernel_loops_min = VAR_17->kernel_loops_min_sav;
    VAR_17->kernel_loops_max = VAR_17->kernel_loops_max_sav;

    if (VAR_17->kernel_loops_min < VAR_17->kernel_loops_max)
    {
      u32 VAR_18 = 0;

      if (VAR_9->attack_exec == VAR_0)
      {
        if (VAR_14->slow_candidates == 1)
        {
          VAR_18 = 1;
        }
        else
        {
          if (VAR_15->attack_kern == VAR_3) VAR_18 = FUNC_0 (VAR_6, (u32) VAR_13->kernel_rules_cnt);
          else if (VAR_15->attack_kern == VAR_2) VAR_18 = FUNC_0 (VAR_5, (u32) VAR_8->combs_cnt);
          else if (VAR_15->attack_kern == VAR_1) VAR_18 = FUNC_0 (VAR_4, (u32) VAR_11->bfs_cnt);
        }
      }
      else
      {
        VAR_18 = VAR_10->salts_buf[0].salt_iter;
      }

      if ((VAR_18 >= VAR_17->kernel_loops_min) &&
          (VAR_18 <= VAR_17->kernel_loops_max))
      {
        VAR_17->kernel_loops_max = VAR_18;
      }
    }
  }
}
