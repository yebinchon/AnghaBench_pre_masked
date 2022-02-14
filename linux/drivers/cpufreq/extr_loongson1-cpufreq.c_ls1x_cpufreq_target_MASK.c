
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct cpufreq_policy {unsigned int cur; int clk; TYPE_1__* freq_table; int cpu; } ;
struct TYPE_4__ {int mux_clk; int osc_clk; } ;
struct TYPE_3__ {unsigned int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (struct device*,char*,unsigned int,unsigned int) ;
 struct device* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct cpufreq_policy *VAR_4,
          unsigned int VAR_5)
{
 struct device *VAR_6 = FUNC_5(VAR_4->cpu);
 unsigned int VAR_7, VAR_8;

 VAR_7 = VAR_4->cur;
 VAR_8 = VAR_4->freq_table[VAR_5].frequency;
 FUNC_2(VAR_4->clk, VAR_3->osc_clk);
 FUNC_1(FUNC_0(VAR_0) | VAR_2 | VAR_1,
       VAR_0);
 FUNC_1(FUNC_0(VAR_0) & ~(VAR_2 | VAR_1),
       VAR_0);
 FUNC_3(VAR_3->mux_clk, VAR_8 * 1000);
 FUNC_2(VAR_4->clk, VAR_3->mux_clk);
 FUNC_4(VAR_6, "%u KHz --> %u KHz\n", VAR_7, VAR_8);

 return 0;
}
