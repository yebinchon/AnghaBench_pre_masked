
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


struct TYPE_9__ {int quiet; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_10__ {scalar_t__ wordlist_mode; } ;
typedef TYPE_2__ user_options_extra_t ;
typedef scalar_t__ u32 ;
struct TYPE_11__ {scalar_t__ words_base; } ;
typedef TYPE_3__ status_ctx_t ;
struct TYPE_12__ {int skipped; int skipped_warning; scalar_t__ kernel_power; } ;
typedef TYPE_4__ hc_device_param_t ;
struct TYPE_13__ {TYPE_1__* user_options; TYPE_2__* user_options_extra; TYPE_3__* status_ctx; TYPE_6__* backend_ctx; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_14__ {int enabled; int backend_devices_cnt; scalar_t__ kernel_power_all; TYPE_4__* devices_param; } ;
typedef TYPE_6__ backend_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,char*) ;

void FUNC_1 (hashcat_ctx_t *VAR_2)
{
  backend_ctx_t *VAR_3 = VAR_2->backend_ctx;
  status_ctx_t *VAR_4 = VAR_2->status_ctx;
  user_options_extra_t *VAR_5 = VAR_2->user_options_extra;
  user_options_t *VAR_6 = VAR_2->user_options;

  if (VAR_3->enabled == 0) return;

  u32 VAR_7 = 0;

  for (int VAR_8 = 0; VAR_8 < VAR_3->backend_devices_cnt; VAR_8++)
  {
    hc_device_param_t *VAR_9 = &VAR_3->devices_param[VAR_8];

    if (VAR_9->skipped == 1) continue;

    if (VAR_9->skipped_warning == 1) continue;

    VAR_7 += VAR_9->kernel_power;
  }

  VAR_3->kernel_power_all = VAR_7;





  if ((VAR_5->wordlist_mode == VAR_0) || (VAR_5->wordlist_mode == VAR_1))
  {
    if (VAR_4->words_base < VAR_7)
    {
      if (VAR_6->quiet == 0)
      {
        FUNC_0 (VAR_2, "The wordlist or mask that you are using is too small.");
        FUNC_0 (VAR_2, "This means that hashcat cannot use the full parallel power of your device(s).");
        FUNC_0 (VAR_2, "Unless you supply more work, your cracking speed will drop.");
        FUNC_0 (VAR_2, "For tips on supplying more work, see: https://hashcat.net/faq/morework");
        FUNC_0 (VAR_2, ((void*)0));
      }
    }
  }
}
