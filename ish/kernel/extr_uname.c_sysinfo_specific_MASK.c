
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo {int mem_unit; int freehigh; int totalhigh; int procs; int freeswap; int totalswap; int sharedram; int freeram; int totalram; } ;
struct sys_info {int mem_unit; int freehigh; int totalhigh; int procs; int freeswap; int totalswap; int sharedram; int freeram; int totalram; } ;


 int FUNC_0 (struct sysinfo*) ;

__attribute__((used)) static void FUNC_1(struct sys_info *VAR_0) {
    struct sysinfo VAR_1;
    FUNC_0(&VAR_1);
    VAR_0->totalram = VAR_1.totalram;
    VAR_0->freeram = VAR_1.freeram;
    VAR_0->sharedram = VAR_1.sharedram;
    VAR_0->totalswap = VAR_1.totalswap;
    VAR_0->freeswap = VAR_1.freeswap;
    VAR_0->procs = VAR_1.procs;
    VAR_0->totalhigh = VAR_1.totalhigh;
    VAR_0->freehigh = VAR_1.freehigh;
    VAR_0->mem_unit = VAR_1.mem_unit;
}
