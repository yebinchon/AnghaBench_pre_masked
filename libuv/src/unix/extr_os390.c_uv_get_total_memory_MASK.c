
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* data_area_ptr_assign_type ;
struct TYPE_2__ {scalar_t__ deref; void* assign; int member_0; } ;
typedef TYPE_1__ data_area_ptr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

uint64_t FUNC_0(void) {
  uint64_t VAR_3;

  data_area_ptr VAR_4 = {0};
  data_area_ptr VAR_5 = {0};
  VAR_4.assign = *(data_area_ptr_assign_type*)(VAR_1);
  VAR_5.assign = *(data_area_ptr_assign_type*)(VAR_4.deref + VAR_0);
  VAR_3 = *((uint64_t*)(VAR_5.deref + VAR_2)) * 4;
  return VAR_3;
}
