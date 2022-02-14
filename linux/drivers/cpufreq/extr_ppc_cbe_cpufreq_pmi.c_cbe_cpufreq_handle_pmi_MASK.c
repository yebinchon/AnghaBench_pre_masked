
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct freq_qos_request {int dummy; } ;
struct cpufreq_policy {TYPE_1__* freq_table; struct freq_qos_request* driver_data; } ;
struct TYPE_5__ {scalar_t__ type; size_t data1; size_t data2; } ;
typedef TYPE_2__ pmi_message_t ;
struct TYPE_4__ {int frequency; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (size_t) ;
 struct cpufreq_policy* FUNC_2 (int) ;
 int FUNC_3 (struct cpufreq_policy*) ;
 int FUNC_4 (struct freq_qos_request*,int ) ;
 int FUNC_5 (char*,size_t,size_t) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(pmi_message_t VAR_1)
{
 struct cpufreq_policy *VAR_2;
 struct freq_qos_request *VAR_3;
 u8 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_1.type != VAR_0);

 VAR_4 = VAR_1.data1;
 VAR_5 = VAR_1.data2;

 VAR_6 = FUNC_1(VAR_4);

 FUNC_5("cbe_handle_pmi: node: %d max_freq: %d\n", VAR_4, VAR_5);

 VAR_2 = FUNC_2(VAR_6);
 if (!VAR_2) {
  FUNC_6("cpufreq policy not found cpu%d\n", VAR_6);
  return;
 }

 VAR_3 = VAR_2->driver_data;

 VAR_7 = FUNC_4(VAR_3,
   VAR_2->freq_table[VAR_5].frequency);
 if (VAR_7 < 0)
  FUNC_6("Failed to update freq constraint: %d\n", VAR_7);
 else
  FUNC_5("limiting node %d to slow mode %d\n", VAR_4, VAR_5);

 FUNC_3(VAR_2);
}
