
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* common_rates; int max_link_rate; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_dp*,int ) ;

int
FUNC_2(struct intel_dp *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, VAR_0->max_link_rate);
 if (FUNC_0(VAR_1 <= 0))
  return 162000;

 return VAR_0->common_rates[VAR_1 - 1];
}
