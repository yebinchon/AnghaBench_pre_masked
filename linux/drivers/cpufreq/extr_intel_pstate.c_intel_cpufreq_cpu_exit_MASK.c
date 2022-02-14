
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_qos_request {int dummy; } ;
struct cpufreq_policy {struct freq_qos_request* driver_data; } ;


 int FUNC_0 (struct freq_qos_request*) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct freq_qos_request*) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_0)
{
 struct freq_qos_request *VAR_1;

 VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1 + 1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 return FUNC_1(VAR_0);
}
