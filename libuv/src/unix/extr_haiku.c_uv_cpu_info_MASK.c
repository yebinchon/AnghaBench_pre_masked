
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int speed; int model; } ;
typedef TYPE_3__ uv_cpu_info_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_15__ {int cpu_count; } ;
typedef TYPE_4__ system_info ;
typedef scalar_t__ status_t ;
struct TYPE_12__ {int default_frequency; } ;
struct TYPE_13__ {TYPE_1__ core; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_2__ data; } ;
typedef TYPE_5__ cpu_topology_node_info ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_5__* FUNC_5 (int) ;
 int FUNC_6 (char*) ;

int FUNC_7(uv_cpu_info_t** VAR_4, int* VAR_5) {
  cpu_topology_node_info* VAR_6;
  int VAR_7;
  status_t VAR_8;
  system_info VAR_9;
  uint32_t VAR_10;
  uint64_t VAR_11;
  uv_cpu_info_t* VAR_12;

  if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
    return VAR_2;

  VAR_8 = FUNC_1(((void*)0), &VAR_10);
  if (VAR_8 != VAR_0)
    return FUNC_0(VAR_8);

  VAR_6 = FUNC_5(VAR_10 * sizeof(*VAR_6));
  if (VAR_6 == ((void*)0))
    return VAR_3;

  VAR_8 = FUNC_1(VAR_6, &VAR_10);
  if (VAR_8 != VAR_0) {
    FUNC_4(VAR_6);
    return FUNC_0(VAR_8);
  }

  VAR_11 = 0;
  for (VAR_7 = 0; VAR_7 < (int)VAR_10; VAR_7++) {
    if (VAR_6[VAR_7].type == VAR_1) {
      VAR_11 = VAR_6[VAR_7].data.core.default_frequency;
      break;
    }
  }

  FUNC_4(VAR_6);

  VAR_8 = FUNC_2(&VAR_9);
  if (VAR_8 != VAR_0)
    return FUNC_0(VAR_8);

  *VAR_4 = FUNC_3(VAR_9.cpu_count, sizeof(**VAR_4));
  if (*VAR_4 == ((void*)0))
    return VAR_3;


  VAR_12 = *VAR_4;
  for (VAR_7 = 0; VAR_7 < (int)VAR_9.cpu_count; VAR_7++) {
    VAR_12->model = FUNC_6("unknown");
    VAR_12->speed = (int)(VAR_11 / 1000000);
    VAR_12++;
  }
  *VAR_5 = VAR_9.cpu_count;

  return 0;
}
