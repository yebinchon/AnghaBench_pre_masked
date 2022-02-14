
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct freq_qos_request {int dummy; } ;
struct cpufreq_policy {struct freq_qos_request* driver_data; TYPE_1__* freq_table; int constraints; } ;
struct TYPE_2__ {int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct freq_qos_request*,int ,int ) ;
 int FUNC_1 (struct freq_qos_request*) ;
 struct freq_qos_request* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(struct cpufreq_policy *VAR_3)
{
 struct freq_qos_request *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_0(&VAR_3->constraints, VAR_4, VAR_0,
       VAR_3->freq_table[0].frequency);
 if (VAR_5 < 0) {
  FUNC_3("Failed to add freq constraint (%d)\n", VAR_5);
  FUNC_1(VAR_4);
  return;
 }

 VAR_3->driver_data = VAR_4;
}
