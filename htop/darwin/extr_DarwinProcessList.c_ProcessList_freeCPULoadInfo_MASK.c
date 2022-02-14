
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * processor_cpu_load_info_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;

void FUNC_2(processor_cpu_load_info_t *VAR_1) {
   if(((void*)0) != VAR_1 && ((void*)0) != *VAR_1) {
       if(0 != FUNC_1(*VAR_1, VAR_0)) {
           FUNC_0("Unable to free old CPU load information\n");
       }
       *VAR_1 = ((void*)0);
   }
}
