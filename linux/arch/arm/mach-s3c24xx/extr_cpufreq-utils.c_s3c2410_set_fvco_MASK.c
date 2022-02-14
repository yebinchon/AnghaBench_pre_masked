
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frequency; } ;
struct s3c_cpufreq_config {TYPE_1__ pll; int mpll; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct s3c_cpufreq_config *VAR_0)
{
 if (!FUNC_0(VAR_0->mpll))
  FUNC_1(VAR_0->mpll, VAR_0->pll.frequency);
}
