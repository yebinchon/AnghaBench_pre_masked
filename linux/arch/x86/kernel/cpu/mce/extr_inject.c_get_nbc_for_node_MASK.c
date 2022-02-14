
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int x86_max_cores; } ;


 int FUNC_0 () ;
 struct cpuinfo_x86 VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_1(int VAR_2)
{
 struct cpuinfo_x86 *VAR_3 = &VAR_0;
 u32 VAR_4;

 VAR_4 = (VAR_3->x86_max_cores * VAR_1) / FUNC_0();

 return VAR_4 * VAR_2;
}
