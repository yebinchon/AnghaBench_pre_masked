
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int num_sink_rates; int sink_rates; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct intel_dp *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->sink_rates,
        VAR_0->num_sink_rates, VAR_1);

 if (FUNC_0(VAR_2 < 0))
  VAR_2 = 0;

 return VAR_2;
}
