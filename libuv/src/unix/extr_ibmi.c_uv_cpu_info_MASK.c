
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nice; scalar_t__ irq; scalar_t__ idle; scalar_t__ sys; scalar_t__ user; } ;
struct TYPE_6__ {TYPE_1__ cpu_times; int model; scalar_t__ speed; } ;
typedef TYPE_2__ uv_cpu_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*) ;

int FUNC_3(uv_cpu_info_t** VAR_2, int* VAR_3) {
  unsigned int VAR_4, VAR_5 = 0;
  uv_cpu_info_t* VAR_6;

  *VAR_2 = ((void*)0);
  *VAR_3 = 0;

  VAR_4 = FUNC_0(VAR_1);

  *VAR_2 = FUNC_1(VAR_4 * sizeof(uv_cpu_info_t));
  if (!*VAR_2) {
    return VAR_0;
  }

  VAR_6 = *VAR_2;
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    VAR_6->speed = 0;
    VAR_6->model = FUNC_2("unknown");
    VAR_6->cpu_times.user = 0;
    VAR_6->cpu_times.sys = 0;
    VAR_6->cpu_times.idle = 0;
    VAR_6->cpu_times.irq = 0;
    VAR_6->cpu_times.nice = 0;
    VAR_6++;
  }
  *VAR_3 = VAR_4;

  return 0;
}
