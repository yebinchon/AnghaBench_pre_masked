
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdinfo {scalar_t__ ci_io; scalar_t__ ci_mem; scalar_t__ ci_stime; scalar_t__ ci_utime; scalar_t__ ci_etime; scalar_t__ ci_calls; } ;



__attribute__((used)) static void
FUNC_0(const struct cmdinfo *VAR_0, struct cmdinfo *VAR_1)
{
 VAR_1->ci_calls += VAR_0->ci_calls;
 VAR_1->ci_etime += VAR_0->ci_etime;
 VAR_1->ci_utime += VAR_0->ci_utime;
 VAR_1->ci_stime += VAR_0->ci_stime;
 VAR_1->ci_mem += VAR_0->ci_mem;
 VAR_1->ci_io += VAR_0->ci_io;
}
