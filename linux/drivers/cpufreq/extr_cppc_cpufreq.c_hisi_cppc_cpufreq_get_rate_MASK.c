
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cppc_cpudata {int dummy; } ;


 unsigned int VAR_0 ;
 struct cppc_cpudata** VAR_1 ;
 unsigned int FUNC_0 (struct cppc_cpudata*,int ) ;
 int FUNC_1 (unsigned int,int *) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned int VAR_2)
{
 struct cppc_cpudata *VAR_3 = VAR_1[VAR_2];
 u64 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4);
}
