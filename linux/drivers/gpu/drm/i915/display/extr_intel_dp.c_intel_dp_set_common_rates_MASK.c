
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int num_common_rates; int* common_rates; int num_sink_rates; int sink_rates; int num_source_rates; int source_rates; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct intel_dp *VAR_0)
{
 FUNC_0(!VAR_0->num_source_rates || !VAR_0->num_sink_rates);

 VAR_0->num_common_rates = FUNC_1(VAR_0->source_rates,
           VAR_0->num_source_rates,
           VAR_0->sink_rates,
           VAR_0->num_sink_rates,
           VAR_0->common_rates);


 if (FUNC_0(VAR_0->num_common_rates == 0)) {
  VAR_0->common_rates[0] = 162000;
  VAR_0->num_common_rates = 1;
 }
}
