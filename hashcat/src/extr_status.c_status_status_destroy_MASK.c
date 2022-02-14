
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int accessible; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_8__ {int device_info_cnt; TYPE_4__* device_info_buf; int * cpt; int * guess_charset; int * guess_mod; int * guess_base; int * speed_sec_all; int * time_started_relative; int * time_started_absolute; int * time_estimated_relative; int * time_estimated_absolute; int * session; int * hash_name; int * hash_target; } ;
typedef TYPE_2__ hashcat_status_t ;
struct TYPE_9__ {TYPE_1__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_10__ {int * brain_link_send_bytes_sec_dev; int * brain_link_recv_bytes_sec_dev; int * brain_link_send_bytes_dev; int * brain_link_recv_bytes_dev; int * hwmon_dev; int * guess_candidates_dev; int * speed_sec_dev; } ;
typedef TYPE_4__ device_info_t ;


 int FUNC_0 (int *) ;

void FUNC_1 (hashcat_ctx_t *VAR_0, hashcat_status_t *VAR_1)
{
  const status_ctx_t *VAR_2 = VAR_0->status_ctx;

  if (VAR_2 == ((void*)0)) return;

  if (VAR_2->accessible == 0) return;

  FUNC_0 (VAR_1->hash_target);
  FUNC_0 (VAR_1->hash_name);
  FUNC_0 (VAR_1->session);
  FUNC_0 (VAR_1->time_estimated_absolute);
  FUNC_0 (VAR_1->time_estimated_relative);
  FUNC_0 (VAR_1->time_started_absolute);
  FUNC_0 (VAR_1->time_started_relative);
  FUNC_0 (VAR_1->speed_sec_all);
  FUNC_0 (VAR_1->guess_base);
  FUNC_0 (VAR_1->guess_mod);
  FUNC_0 (VAR_1->guess_charset);
  FUNC_0 (VAR_1->cpt);

  VAR_1->hash_target = ((void*)0);
  VAR_1->hash_name = ((void*)0);
  VAR_1->session = ((void*)0);
  VAR_1->time_estimated_absolute = ((void*)0);
  VAR_1->time_estimated_relative = ((void*)0);
  VAR_1->time_started_absolute = ((void*)0);
  VAR_1->time_started_relative = ((void*)0);
  VAR_1->speed_sec_all = ((void*)0);
  VAR_1->guess_base = ((void*)0);
  VAR_1->guess_mod = ((void*)0);
  VAR_1->guess_charset = ((void*)0);
  VAR_1->cpt = ((void*)0);

  for (int VAR_3 = 0; VAR_3 < VAR_1->device_info_cnt; VAR_3++)
  {
    device_info_t *VAR_4 = VAR_1->device_info_buf + VAR_3;

    FUNC_0 (VAR_4->speed_sec_dev);
    FUNC_0 (VAR_4->guess_candidates_dev);
    FUNC_0 (VAR_4->hwmon_dev);







    VAR_4->speed_sec_dev = ((void*)0);
    VAR_4->guess_candidates_dev = ((void*)0);
    VAR_4->hwmon_dev = ((void*)0);






  }
}
