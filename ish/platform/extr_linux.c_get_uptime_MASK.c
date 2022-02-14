
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uptime_info {int load_15m; int load_5m; int load_1m; int uptime_ticks; } ;
struct sysinfo {int * loads; int uptime; } ;


 int FUNC_0 (struct sysinfo*) ;

struct uptime_info FUNC_1() {
    struct sysinfo VAR_0;
    FUNC_0(&VAR_0);
    struct uptime_info VAR_1 = {
        .uptime_ticks = VAR_0.uptime,
        .load_1m = VAR_0.loads[0],
        .load_5m = VAR_0.loads[1],
        .load_15m = VAR_0.loads[2],
    };
    return VAR_1;
}
