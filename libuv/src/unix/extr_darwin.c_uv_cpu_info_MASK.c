
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_address_t ;
struct TYPE_6__ {unsigned int user; unsigned int nice; unsigned int sys; unsigned int idle; scalar_t__ irq; } ;
struct TYPE_7__ {unsigned int speed; int model; TYPE_1__ cpu_times; } ;
typedef TYPE_2__ uv_cpu_info_t ;
typedef unsigned int uint64_t ;
typedef int processor_info_array_t ;
struct TYPE_8__ {scalar_t__* cpu_ticks; } ;
typedef TYPE_3__ processor_cpu_load_info_data_t ;
typedef int natural_t ;
typedef int model ;
typedef int mach_msg_type_number_t ;
typedef int cpuspeed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int*,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,...) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9(uv_cpu_info_t** VAR_6, int* VAR_7) {
  unsigned int VAR_8 = (unsigned int)FUNC_4(VAR_4),
               VAR_9 = ((uint64_t)1000L / VAR_8);
  char VAR_10[512];
  uint64_t VAR_11;
  size_t VAR_12;
  unsigned int VAR_13;
  natural_t VAR_14;
  mach_msg_type_number_t VAR_15;
  processor_cpu_load_info_data_t *VAR_16;
  uv_cpu_info_t* VAR_17;

  VAR_12 = sizeof(VAR_10);
  if (FUNC_5("machdep.cpu.brand_string", &VAR_10, &VAR_12, ((void*)0), 0) &&
      FUNC_5("hw.model", &VAR_10, &VAR_12, ((void*)0), 0)) {
    return FUNC_0(VAR_5);
  }

  VAR_12 = sizeof(VAR_11);
  if (FUNC_5("hw.cpufrequency", &VAR_11, &VAR_12, ((void*)0), 0))
    return FUNC_0(VAR_5);

  if (FUNC_1(FUNC_2(), VAR_1, &VAR_14,
                          (processor_info_array_t*)&VAR_16,
                          &VAR_15) != VAR_0) {
    return VAR_2;
  }

  *VAR_6 = FUNC_6(VAR_14 * sizeof(**VAR_6));
  if (!(*VAR_6)) {
    FUNC_8(FUNC_3(), (vm_address_t)VAR_16, VAR_15);
    return VAR_3;
  }

  *VAR_7 = VAR_14;

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
    VAR_17 = &(*VAR_6)[VAR_13];

    VAR_17->cpu_times.user = (uint64_t)(VAR_16[VAR_13].cpu_ticks[0]) * VAR_9;
    VAR_17->cpu_times.nice = (uint64_t)(VAR_16[VAR_13].cpu_ticks[3]) * VAR_9;
    VAR_17->cpu_times.sys = (uint64_t)(VAR_16[VAR_13].cpu_ticks[1]) * VAR_9;
    VAR_17->cpu_times.idle = (uint64_t)(VAR_16[VAR_13].cpu_ticks[2]) * VAR_9;
    VAR_17->cpu_times.irq = 0;

    VAR_17->model = FUNC_7(VAR_10);
    VAR_17->speed = VAR_11/1000000;
  }
  FUNC_8(FUNC_3(), (vm_address_t)VAR_16, VAR_15);

  return 0;
}
