
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct TYPE_4__ {unsigned int driver_data; } ;
struct TYPE_3__ {int base; int ddr_clk; int powersave_clk; int cpu_clk; } ;


 unsigned long VAR_0 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__ VAR_2 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_3,
       unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_1[VAR_4].driver_data;
 unsigned long VAR_6;

 FUNC_2();


 VAR_6 = FUNC_4(VAR_2.base);
 VAR_6 |= VAR_0;
 FUNC_5(VAR_6, VAR_2.base);

 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_2.powersave_clk, VAR_2.cpu_clk);
  break;
 case 128:
  FUNC_0(VAR_2.powersave_clk, VAR_2.ddr_clk);
  break;
 }


 FUNC_1();


 VAR_6 = FUNC_4(VAR_2.base);
 VAR_6 &= ~VAR_0;
 FUNC_5(VAR_6, VAR_2.base);

 FUNC_3();

 return 0;
}
