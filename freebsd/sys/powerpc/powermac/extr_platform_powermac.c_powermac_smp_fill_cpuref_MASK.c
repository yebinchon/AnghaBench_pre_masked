
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuref {int cr_cpuid; int cr_hwref; } ;
typedef int phandle_t ;
typedef int cpuid ;
typedef int cell_t ;


 int FUNC_0 (int ,char*,int*,int) ;

__attribute__((used)) static int
FUNC_1(struct cpuref *VAR_0, phandle_t VAR_1)
{
 cell_t VAR_2;
 int VAR_3;

 VAR_0->cr_hwref = VAR_1;
 VAR_3 = FUNC_0(VAR_1, "reg", &VAR_2, sizeof(VAR_2));





 if (VAR_3 < 0) {
  VAR_2 = 0;
 }

 VAR_0->cr_cpuid = VAR_2 & 0xff;
 return (0);
}
