
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int num_common_rates; int common_rates; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(const struct intel_dp *VAR_0,
       int VAR_1)
{
 return FUNC_0(VAR_0->common_rates,
           VAR_0->num_common_rates, VAR_1);
}
