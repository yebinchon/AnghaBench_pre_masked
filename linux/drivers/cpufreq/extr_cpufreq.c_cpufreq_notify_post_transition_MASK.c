
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {int new; int old; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_freqs*,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_2,
  struct cpufreq_freqs *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, VAR_3, VAR_0);
 if (!VAR_4)
  return;

 FUNC_1(VAR_3->old, VAR_3->new);
 FUNC_0(VAR_2, VAR_3, VAR_1);
 FUNC_0(VAR_2, VAR_3, VAR_0);
}
