
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int task_info_t ;
struct TYPE_2__ {size_t resident_size; } ;
typedef TYPE_1__ task_basic_info_data_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;

int FUNC_3(size_t* VAR_3) {
  mach_msg_type_number_t VAR_4;
  task_basic_info_data_t VAR_5;
  kern_return_t VAR_6;

  VAR_4 = VAR_2;
  VAR_6 = FUNC_2(FUNC_1(),
                  VAR_1,
                  (task_info_t) &VAR_5,
                  &VAR_4);
  (void) &VAR_6;



  FUNC_0(VAR_6 == VAR_0);
  *VAR_3 = VAR_5.resident_size;

  return 0;
}
