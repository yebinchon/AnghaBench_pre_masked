
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_qos_request {int dummy; } ;
struct cpufreq_policy {struct freq_qos_request* driver_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct freq_qos_request*) ;
 int FUNC_1 (struct freq_qos_request*) ;

void FUNC_2(struct cpufreq_policy *VAR_1)
{
 struct freq_qos_request *VAR_2 = VAR_1->driver_data;

 if (VAR_0) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
}
