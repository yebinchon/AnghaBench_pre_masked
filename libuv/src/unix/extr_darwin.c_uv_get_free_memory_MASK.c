
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ free_count; } ;
typedef TYPE_1__ vm_statistics_data_t ;
typedef int uint64_t ;
typedef int mach_msg_type_number_t ;
typedef int integer_t ;
typedef int info ;
typedef int host_info_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

uint64_t FUNC_3(void) {
  vm_statistics_data_t VAR_4;
  mach_msg_type_number_t VAR_5 = sizeof(VAR_4) / sizeof(integer_t);

  if (FUNC_0(FUNC_1(), VAR_0,
                      (host_info_t)&VAR_4, &VAR_5) != VAR_1) {
    return VAR_2;
  }

  return (uint64_t) VAR_4.free_count * FUNC_2(VAR_3);
}
