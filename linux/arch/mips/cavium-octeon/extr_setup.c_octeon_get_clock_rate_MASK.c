
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cvmx_sysinfo {int cpu_clock_hz; } ;


 struct cvmx_sysinfo* FUNC_0 () ;

uint64_t FUNC_1(void)
{
 struct cvmx_sysinfo *VAR_0 = FUNC_0();

 return VAR_0->cpu_clock_hz;
}
