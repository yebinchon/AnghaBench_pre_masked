
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cpufreq_policy {size_t cpu; } ;
struct TYPE_2__ {int scaling; } ;
struct cpudata {TYPE_1__ pstate; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct cpudata** VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t,int ,int *) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct cpufreq_policy *VAR_2, char *VAR_3)
{
 struct cpudata *VAR_4;
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->cpu);
 if (VAR_6 <= 0) {
  FUNC_2(VAR_2->cpu, VAR_0, &VAR_5);
  VAR_6 = FUNC_0(VAR_5);
 }

 VAR_4 = VAR_1[VAR_2->cpu];

 return FUNC_3(VAR_3, "%d\n", VAR_6 * VAR_4->pstate.scaling);
}
