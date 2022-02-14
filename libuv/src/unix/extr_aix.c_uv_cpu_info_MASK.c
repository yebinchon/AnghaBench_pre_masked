
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nice; int irq; int idle; int sys; int user; } ;
struct TYPE_12__ {int speed; TYPE_1__ cpu_times; int model; } ;
typedef TYPE_2__ uv_cpu_info_t ;
typedef int ps_total ;
struct TYPE_13__ {int name; } ;
typedef TYPE_3__ perfstat_id_t ;
struct TYPE_14__ {int processorHZ; int description; } ;
typedef TYPE_4__ perfstat_cpu_total_t ;
struct TYPE_15__ {int wait; int idle; int sys; int user; } ;
typedef TYPE_5__ perfstat_cpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*,int,int) ;
 int FUNC_1 (int *,TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(uv_cpu_info_t** VAR_3, int* VAR_4) {
  uv_cpu_info_t* VAR_5;
  perfstat_cpu_total_t VAR_6;
  perfstat_cpu_t* VAR_7;
  perfstat_id_t VAR_8;
  int VAR_9, VAR_10, VAR_11 = 0;

  VAR_9 = FUNC_1(((void*)0), &VAR_6, sizeof(VAR_6), 1);
  if (VAR_9 == -1) {
    return VAR_2;
  }

  VAR_10 = VAR_9 = FUNC_0(((void*)0), ((void*)0), sizeof(perfstat_cpu_t), 0);
  if (VAR_9 == -1) {
    return VAR_2;
  }

  VAR_7 = (perfstat_cpu_t*) FUNC_3(VAR_10 * sizeof(perfstat_cpu_t));
  if (!VAR_7) {
    return VAR_1;
  }


  FUNC_5(VAR_8.name, VAR_0, sizeof(VAR_8.name));
  VAR_9 = FUNC_0(&VAR_8, VAR_7, sizeof(perfstat_cpu_t), VAR_10);
  if (VAR_9 == -1) {
    FUNC_2(VAR_7);
    return VAR_2;
  }

  *VAR_3 = (uv_cpu_info_t*) FUNC_3(VAR_10 * sizeof(uv_cpu_info_t));
  if (!*VAR_3) {
    FUNC_2(VAR_7);
    return VAR_1;
  }

  *VAR_4 = VAR_10;

  VAR_5 = *VAR_3;
  while (VAR_11 < VAR_10) {
    VAR_5->speed = (int)(VAR_6.processorHZ / 1000000);
    VAR_5->model = FUNC_4(VAR_6.description);
    VAR_5->cpu_times.user = VAR_7[VAR_11].user;
    VAR_5->cpu_times.sys = VAR_7[VAR_11].sys;
    VAR_5->cpu_times.idle = VAR_7[VAR_11].idle;
    VAR_5->cpu_times.irq = VAR_7[VAR_11].wait;
    VAR_5->cpu_times.nice = 0;
    VAR_5++;
    VAR_11++;
  }

  FUNC_2(VAR_7);
  return 0;
}
