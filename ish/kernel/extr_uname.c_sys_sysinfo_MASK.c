
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uptime_info {int load_15m; int load_5m; int load_1m; int uptime_ticks; } ;
struct sys_info {int * loads; int uptime; int member_0; } ;
typedef int dword_t ;
typedef int addr_t ;


 int VAR_0 ;
 struct uptime_info FUNC_0 () ;
 int FUNC_1 (struct sys_info*) ;
 scalar_t__ FUNC_2 (int ,struct sys_info) ;

dword_t FUNC_3(addr_t VAR_1) {
    struct sys_info VAR_2 = {0};
    struct uptime_info VAR_3 = FUNC_0();
    VAR_2.uptime = VAR_3.uptime_ticks;
    VAR_2.loads[0] = VAR_3.load_1m;
    VAR_2.loads[1] = VAR_3.load_5m;
    VAR_2.loads[2] = VAR_3.load_15m;
    FUNC_1(&VAR_2);

    if (FUNC_2(VAR_1, VAR_2))
        return VAR_0;
    return 0;
}
