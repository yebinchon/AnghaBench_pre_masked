
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpudata {int cpu; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static s16 FUNC_2(struct cpudata *VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->cpu, VAR_1, &VAR_4);
 if (VAR_5)
  return (s16)VAR_5;

 return (s16)(VAR_4 & 0x0f);
}
