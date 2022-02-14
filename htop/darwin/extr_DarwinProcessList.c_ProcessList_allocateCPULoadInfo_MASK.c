
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int processor_info_array_t ;
typedef int processor_cpu_load_info_t ;
typedef int mach_msg_type_number_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int*,int *,int*) ;
 int FUNC_2 () ;

unsigned FUNC_3(processor_cpu_load_info_t *VAR_1) {
   mach_msg_type_number_t VAR_2 = sizeof(processor_cpu_load_info_t);
   unsigned VAR_3;


   if(0 != FUNC_1(FUNC_2(), VAR_0, &VAR_3, (processor_info_array_t *)VAR_1, &VAR_2)) {
       FUNC_0("Unable to retrieve CPU info\n");
   }

   return VAR_3;
}
