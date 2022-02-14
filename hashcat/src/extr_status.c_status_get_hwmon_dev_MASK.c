
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int mux_hwmon; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_13__ {int skipped; int skipped_warning; } ;
typedef TYPE_2__ hc_device_param_t ;
struct TYPE_14__ {TYPE_1__* status_ctx; TYPE_4__* backend_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_15__ {TYPE_2__* devices_param; } ;
typedef TYPE_4__ backend_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int const) ;
 int FUNC_4 (TYPE_3__*,int const) ;
 int FUNC_5 (TYPE_3__*,int const) ;
 int FUNC_6 (TYPE_3__*,int const) ;
 int FUNC_7 (TYPE_3__*,int const) ;
 int FUNC_8 (TYPE_3__*,int const) ;
 scalar_t__ FUNC_9 (char*,scalar_t__,char*,...) ;

char *FUNC_10 (const hashcat_ctx_t *VAR_1, const int VAR_2)
{
  const backend_ctx_t *VAR_3 = VAR_1->backend_ctx;

  hc_device_param_t *VAR_4 = &VAR_3->devices_param[VAR_2];

  char *VAR_5 = (char *) FUNC_2 (VAR_0);

  FUNC_9 (VAR_5, VAR_0, "N/A");

  if (VAR_4->skipped == 1) return VAR_5;

  if (VAR_4->skipped_warning == 1) return VAR_5;

  status_ctx_t *VAR_6 = VAR_1->status_ctx;

  FUNC_0 (VAR_6->mux_hwmon);

  const int VAR_7 = FUNC_7 ((hashcat_ctx_t *) VAR_1, VAR_2);
  const int VAR_8 = FUNC_5 ((hashcat_ctx_t *) VAR_1, VAR_2);
  const int VAR_9 = FUNC_8 ((hashcat_ctx_t *) VAR_1, VAR_2);
  const int VAR_10 = FUNC_4 ((hashcat_ctx_t *) VAR_1, VAR_2);
  const int VAR_11 = FUNC_6 ((hashcat_ctx_t *) VAR_1, VAR_2);
  const int VAR_12 = FUNC_3 ((hashcat_ctx_t *) VAR_1, VAR_2);

  int VAR_13 = 0;

  if (VAR_7 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Temp:%3dc ", VAR_7);
  }

  if (VAR_8 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Fan:%3d%% ", VAR_8);
  }

  if (VAR_9 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Util:%3d%% ", VAR_9);
  }

  if (VAR_10 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Core:%4dMHz ", VAR_10);
  }

  if (VAR_11 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Mem:%4dMHz ", VAR_11);
  }

  if (VAR_12 >= 0)
  {
    VAR_13 += FUNC_9 (VAR_5 + VAR_13, VAR_0 - VAR_13, "Bus:%d ", VAR_12);
  }

  if (VAR_13 > 0)
  {


    VAR_5[VAR_13 - 1] = 0;
  }
  else
  {
    FUNC_9 (VAR_5, VAR_0, "N/A");
  }

  FUNC_1 (VAR_6->mux_hwmon);

  return VAR_5;
}
