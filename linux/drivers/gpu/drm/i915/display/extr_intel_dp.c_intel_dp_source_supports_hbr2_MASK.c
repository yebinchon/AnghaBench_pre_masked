
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* source_rates; int num_source_rates; } ;



bool FUNC_0(struct intel_dp *VAR_0)
{
 int VAR_1 = VAR_0->source_rates[VAR_0->num_source_rates - 1];

 return VAR_1 >= 540000;
}
