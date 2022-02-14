
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ nice; scalar_t__ irq; scalar_t__ idle; scalar_t__ sys; scalar_t__ user; } ;
struct TYPE_11__ {TYPE_2__ cpu_times; int * model; scalar_t__ speed; } ;
typedef TYPE_3__ uv_cpu_info_t ;
typedef int kstat_t ;
struct TYPE_9__ {scalar_t__ ui64; scalar_t__ i64; scalar_t__ i32; } ;
struct TYPE_12__ {scalar_t__ data_type; TYPE_1__ value; } ;
typedef TYPE_4__ kstat_named_t ;
typedef int kstat_ctl_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int,char*) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *,int *) ;
 TYPE_3__* FUNC_7 (int) ;
 int * FUNC_8 (int ) ;

int FUNC_9(uv_cpu_info_t** VAR_6, int* VAR_7) {
  int VAR_8;
  kstat_ctl_t *VAR_9;
  kstat_t *VAR_10;
  kstat_named_t *VAR_11;
  uv_cpu_info_t* VAR_12;

  VAR_9 = FUNC_5();
  if (VAR_9 == ((void*)0))
    return VAR_5;


  VAR_8 = 0;
  while ((VAR_10 = FUNC_4(VAR_9, (char*) "cpu_info", VAR_8, ((void*)0)))) {
    VAR_8++;
  }

  *VAR_6 = FUNC_7(VAR_8 * sizeof(**VAR_6));
  if (!(*VAR_6)) {
    FUNC_2(VAR_9);
    return VAR_4;
  }

  *VAR_7 = VAR_8;

  VAR_12 = *VAR_6;
  VAR_8 = 0;
  while ((VAR_10 = FUNC_4(VAR_9, (char*) "cpu_info", VAR_8, ((void*)0)))) {
    if (FUNC_6(VAR_9, VAR_10, ((void*)0)) == -1) {
      VAR_12->speed = 0;
      VAR_12->model = ((void*)0);
    } else {
      VAR_11 = FUNC_3(VAR_10, (char*) "clock_MHz");
      FUNC_1(VAR_11->data_type == VAR_0 ||
             VAR_11->data_type == VAR_1);
      VAR_12->speed = (VAR_11->data_type == VAR_0) ? VAR_11->value.i32
                                                             : VAR_11->value.i64;

      VAR_11 = FUNC_3(VAR_10, (char*) "brand");
      FUNC_1(VAR_11->data_type == VAR_2);
      VAR_12->model = FUNC_8(FUNC_0(VAR_11));
    }

    VAR_8++;
    VAR_12++;
  }

  VAR_12 = *VAR_6;
  VAR_8 = 0;
  for (;;) {
    VAR_10 = FUNC_4(VAR_9, (char*) "cpu", VAR_8, (char*) "sys");

    if (VAR_10 == ((void*)0))
      break;

    if (FUNC_6(VAR_9, VAR_10, ((void*)0)) == -1) {
      VAR_12->cpu_times.user = 0;
      VAR_12->cpu_times.nice = 0;
      VAR_12->cpu_times.sys = 0;
      VAR_12->cpu_times.idle = 0;
      VAR_12->cpu_times.irq = 0;
    } else {
      VAR_11 = FUNC_3(VAR_10, (char*) "cpu_ticks_user");
      FUNC_1(VAR_11->data_type == VAR_3);
      VAR_12->cpu_times.user = VAR_11->value.ui64;

      VAR_11 = FUNC_3(VAR_10, (char*) "cpu_ticks_kernel");
      FUNC_1(VAR_11->data_type == VAR_3);
      VAR_12->cpu_times.sys = VAR_11->value.ui64;

      VAR_11 = FUNC_3(VAR_10, (char*) "cpu_ticks_idle");
      FUNC_1(VAR_11->data_type == VAR_3);
      VAR_12->cpu_times.idle = VAR_11->value.ui64;

      VAR_11 = FUNC_3(VAR_10, (char*) "intr");
      FUNC_1(VAR_11->data_type == VAR_3);
      VAR_12->cpu_times.irq = VAR_11->value.ui64;
      VAR_12->cpu_times.nice = 0;
    }

    VAR_8++;
    VAR_12++;
  }

  FUNC_2(VAR_9);

  return 0;
}
