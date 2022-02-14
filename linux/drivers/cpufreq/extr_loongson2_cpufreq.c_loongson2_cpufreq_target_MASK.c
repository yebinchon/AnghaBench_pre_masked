
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int clk; } ;
struct TYPE_2__ {int driver_data; } ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4;

 VAR_4 =
     ((VAR_0 / 1000) *
      VAR_1[VAR_3].driver_data) / 8;


 FUNC_0(VAR_2->clk, VAR_4 * 1000);

 return 0;
}
