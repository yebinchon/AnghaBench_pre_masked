
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_usage {int nice_ticks; int idle_ticks; int system_ticks; int user_ticks; } ;
typedef int mach_msg_type_number_t ;
typedef int host_info_t ;
struct TYPE_2__ {int * cpu_ticks; } ;
typedef TYPE_1__ host_cpu_load_info_data_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 () ;

struct cpu_usage FUNC_2() {
    host_cpu_load_info_data_t VAR_6;
    mach_msg_type_number_t VAR_7 = VAR_5;
    FUNC_0(FUNC_1(), VAR_4, (host_info_t) &VAR_6, &VAR_7);
    struct cpu_usage VAR_8;
    VAR_8.user_ticks = VAR_6.cpu_ticks[VAR_3];
    VAR_8.system_ticks = VAR_6.cpu_ticks[VAR_2];
    VAR_8.idle_ticks = VAR_6.cpu_ticks[VAR_0];
    VAR_8.nice_ticks = VAR_6.cpu_ticks[VAR_1];
    return VAR_8;
}
