
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_5__ {int skipped; int skipped_warning; scalar_t__* speed_msec; scalar_t__* speed_cnt; int speed_pos; } ;
typedef TYPE_1__ hc_device_param_t ;
struct TYPE_6__ {TYPE_3__* backend_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_7__ {TYPE_1__* devices_param; } ;
typedef TYPE_3__ backend_ctx_t ;


 int FUNC_0 (int ,int) ;

double FUNC_1 (const hashcat_ctx_t *VAR_0, const int VAR_1)
{


  const backend_ctx_t *VAR_2 = VAR_0->backend_ctx;

  u64 VAR_3 = 0;
  double VAR_4 = 0;

  hc_device_param_t *VAR_5 = &VAR_2->devices_param[VAR_1];

  if ((VAR_5->skipped == 0) && (VAR_5->skipped_warning == 0))
  {
    const u32 VAR_6 = FUNC_0 (VAR_5->speed_pos, 1);

    VAR_3 += VAR_5->speed_cnt[VAR_6 - 1];
    VAR_4 += VAR_5->speed_msec[VAR_6 - 1];
  }

  double VAR_7 = 0;

  if (VAR_4 > 0)
  {
    VAR_7 = (double) VAR_3 / VAR_4;
  }

  return VAR_7;
}
