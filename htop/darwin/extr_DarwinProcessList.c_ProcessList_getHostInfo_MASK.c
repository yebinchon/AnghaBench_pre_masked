
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int host_info_t ;
typedef int host_basic_info_data_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 () ;

void FUNC_3(host_basic_info_data_t *VAR_2) {
   mach_msg_type_number_t VAR_3 = VAR_1;

   if(0 != FUNC_1(FUNC_2(), VAR_0, (host_info_t)VAR_2, &VAR_3)) {
       FUNC_0("Unable to retrieve host info\n");
   }
}
