
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int real_free; } ;
typedef TYPE_1__ perfstat_memory_total_t ;
typedef int mem_total ;


 int FUNC_0 (int *,TYPE_1__*,int,int) ;

uint64_t FUNC_1(void) {
  perfstat_memory_total_t VAR_0;
  int VAR_1 = FUNC_0(((void*)0), &VAR_0, sizeof(VAR_0), 1);
  if (VAR_1 == -1) {
    return 0;
  }
  return VAR_0.real_free * 4096;
}
