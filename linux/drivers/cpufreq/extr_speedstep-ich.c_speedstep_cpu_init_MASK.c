
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_freqs {int ret; struct cpufreq_policy* policy; } ;
struct cpufreq_policy {int freq_table; int cpus; int cpu; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,int ,struct get_freqs*,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_3)
{
 unsigned int VAR_4;
 struct get_freqs VAR_5;





 VAR_4 = FUNC_0(VAR_3->cpus, VAR_0);


 VAR_5.policy = VAR_3;
 FUNC_2(VAR_4, VAR_1, &VAR_5, 1);
 if (VAR_5.ret)
  return VAR_5.ret;

 VAR_3->freq_table = VAR_2;

 return 0;
}
