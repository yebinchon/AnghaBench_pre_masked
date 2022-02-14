
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* common_rates; int num_common_rates; } ;



__attribute__((used)) static int FUNC_0(struct intel_dp *VAR_0)
{
 return VAR_0->common_rates[VAR_0->num_common_rates - 1];
}
