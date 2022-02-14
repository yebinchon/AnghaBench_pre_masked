
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int machine_readable; int status_json; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_15__ {int device_info_cnt; int device_info_active; int speed_sec_all; TYPE_4__* device_info_buf; } ;
typedef TYPE_2__ hashcat_status_t ;
struct TYPE_16__ {TYPE_1__* user_options; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_17__ {int skipped_dev; int skipped_warning_dev; int exec_msec_dev; int speed_sec_dev; } ;
typedef TYPE_4__ device_info_t ;


 int FUNC_0 (TYPE_3__*,char*,int,...) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

void FUNC_7 (hashcat_ctx_t *VAR_0)
{
  const user_options_t *VAR_1 = VAR_0->user_options;

  if (VAR_1->machine_readable == 1)
  {
    FUNC_5 (VAR_0);

    return;
  }

  if (VAR_1->status_json == 1)
  {
    FUNC_4 (VAR_0);

    return;
  }

  hashcat_status_t *VAR_2 = (hashcat_status_t *) FUNC_3 (sizeof (hashcat_status_t));

  if (FUNC_1 (VAR_0, VAR_2) == -1)
  {
    FUNC_2 (VAR_2);

    return;
  }

  for (int VAR_3 = 0; VAR_3 < VAR_2->device_info_cnt; VAR_3++)
  {
    const device_info_t *VAR_4 = VAR_2->device_info_buf + VAR_3;

    if (VAR_4->skipped_dev == 1) continue;

    if (VAR_4->skipped_warning_dev == 1) continue;

    FUNC_0 (VAR_0,
      "Speed.#%d.........: %9sH/s (%0.2fms)", VAR_3 + 1,
      VAR_4->speed_sec_dev,
      VAR_4->exec_msec_dev);
  }

  if (VAR_2->device_info_active > 1)
  {
    FUNC_0 (VAR_0,
      "Speed.#*.........: %9sH/s",
      VAR_2->speed_sec_all);
  }

  FUNC_6 (VAR_0, VAR_2);

  FUNC_2 (VAR_2);
}
