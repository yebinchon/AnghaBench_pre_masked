
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ QuadPart; } ;
struct TYPE_7__ {int skipped; int speed_only_finish; int size_pws_comp; int size_pws_idx; TYPE_1__ timer_speed; scalar_t__ words_done; scalar_t__ words_off; scalar_t__ pws_cnt; scalar_t__ pws_idx; scalar_t__ pws_comp; scalar_t__ innerloop_left; scalar_t__ innerloop_pos; scalar_t__ outerloop_left; scalar_t__ outerloop_pos; scalar_t__ outerloop_msec; scalar_t__ exec_msec; scalar_t__ exec_pos; scalar_t__ speed_msec; scalar_t__ speed_cnt; scalar_t__ speed_pos; } ;
typedef TYPE_2__ hc_device_param_t ;
struct TYPE_8__ {TYPE_4__* backend_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_9__ {int enabled; int backend_devices_cnt; scalar_t__ kernel_power_final; scalar_t__ kernel_power_all; TYPE_2__* devices_param; } ;
typedef TYPE_4__ backend_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int) ;

void FUNC_1 (hashcat_ctx_t *VAR_2)
{
  backend_ctx_t *VAR_3 = VAR_2->backend_ctx;

  if (VAR_3->enabled == 0) return;

  for (int VAR_4 = 0; VAR_4 < VAR_3->backend_devices_cnt; VAR_4++)
  {
    hc_device_param_t *VAR_5 = &VAR_3->devices_param[VAR_4];

    if (VAR_5->skipped == 1) continue;

    VAR_5->speed_pos = 0;

    FUNC_0 (VAR_5->speed_cnt, 0, VAR_1 * sizeof (u64));
    FUNC_0 (VAR_5->speed_msec, 0, VAR_1 * sizeof (double));

    VAR_5->speed_only_finish = 0;

    VAR_5->exec_pos = 0;

    FUNC_0 (VAR_5->exec_msec, 0, VAR_0 * sizeof (double));

    VAR_5->outerloop_msec = 0;
    VAR_5->outerloop_pos = 0;
    VAR_5->outerloop_left = 0;
    VAR_5->innerloop_pos = 0;
    VAR_5->innerloop_left = 0;



    if (VAR_5->pws_comp) FUNC_0 (VAR_5->pws_comp, 0, VAR_5->size_pws_comp);
    if (VAR_5->pws_idx) FUNC_0 (VAR_5->pws_idx, 0, VAR_5->size_pws_idx);

    VAR_5->pws_cnt = 0;

    VAR_5->words_off = 0;
    VAR_5->words_done = 0;




    VAR_5->timer_speed.tv_sec = 0;

  }

  VAR_3->kernel_power_all = 0;
  VAR_3->kernel_power_final = 0;
}
