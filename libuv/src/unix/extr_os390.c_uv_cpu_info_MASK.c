
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int user; scalar_t__ nice; scalar_t__ irq; scalar_t__ idle; scalar_t__ sys; } ;
struct TYPE_11__ {int speed; TYPE_3__ cpu_times; void* model; } ;
typedef TYPE_4__ uv_cpu_info_t ;
struct TYPE_9__ {int si11v1cpcmodel; } ;
struct TYPE_8__ {scalar_t__ si22v1cpucapability; } ;
struct TYPE_12__ {TYPE_2__ siv1v2si11v1; TYPE_1__ siv1v2si22v1; } ;
typedef TYPE_5__ siv1v2 ;
typedef void* data_area_ptr_assign_type ;
struct TYPE_13__ {scalar_t__ deref; void* assign; int member_0; } ;
typedef TYPE_6__ data_area_ptr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (void*,char,int) ;
 void* FUNC_2 (int) ;

int FUNC_3(uv_cpu_info_t** VAR_8, int* VAR_9) {
  uv_cpu_info_t* VAR_10;
  int VAR_11;
  siv1v2 VAR_12;
  data_area_ptr VAR_13 = {0};
  data_area_ptr VAR_14 = {0};
  data_area_ptr VAR_15 = {0};
  data_area_ptr VAR_16 = {0};
  int VAR_17;

  VAR_13.assign = *(data_area_ptr_assign_type*)(VAR_4);

  VAR_14.assign = *((data_area_ptr_assign_type *) (VAR_13.deref + VAR_2));
  VAR_16.assign = *((data_area_ptr_assign_type *) (VAR_13.deref + VAR_3));
  VAR_15.assign = *((data_area_ptr_assign_type *) (VAR_16.deref + VAR_6));

  *VAR_9 = *((int*) (VAR_14.deref + VAR_1));
  VAR_17 = *((unsigned short int*) (VAR_15.deref + VAR_5));

  *VAR_8 = FUNC_2(*VAR_9 * sizeof(uv_cpu_info_t));
  if (!*VAR_8)
    return VAR_7;

  VAR_10 = *VAR_8;
  VAR_11 = 0;
  while (VAR_11 < *VAR_9) {
    VAR_10->speed = *(int*)(VAR_12.siv1v2si22v1.si22v1cpucapability);
    VAR_10->model = FUNC_2(VAR_0 + 1);
    FUNC_1(VAR_10->model, '\0', VAR_0 + 1);
    FUNC_0(VAR_10->model, VAR_12.siv1v2si11v1.si11v1cpcmodel, VAR_0);
    VAR_10->cpu_times.user = VAR_17;

    VAR_10->cpu_times.sys = 0;
    VAR_10->cpu_times.idle = 0;
    VAR_10->cpu_times.irq = 0;
    VAR_10->cpu_times.nice = 0;
    ++VAR_10;
    ++VAR_11;
  }

  return 0;
}
