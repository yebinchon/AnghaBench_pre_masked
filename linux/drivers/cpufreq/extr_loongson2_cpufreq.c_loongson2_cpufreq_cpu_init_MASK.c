
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {struct clk* clk; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {unsigned long frequency; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,unsigned long) ;
 int VAR_2 ;
 int FUNC_5 (struct cpufreq_policy*,TYPE_1__*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct cpufreq_policy *VAR_4)
{
 struct clk *VAR_5;
 int VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(((void*)0), "cpu_clk");
 if (FUNC_0(VAR_5)) {
  FUNC_6("couldn't get CPU clk\n");
  return FUNC_1(VAR_5);
 }

 VAR_7 = VAR_2 / 1000;
 if (!VAR_7) {
  FUNC_3(VAR_5);
  return -VAR_1;
 }


 for (VAR_6 = 2;
      (VAR_3[VAR_6].frequency != VAR_0);
      VAR_6++)
  VAR_3[VAR_6].frequency = (VAR_7 * VAR_6) / 8;

 VAR_8 = FUNC_4(VAR_5, VAR_7 * 1000);
 if (VAR_8) {
  FUNC_3(VAR_5);
  return VAR_8;
 }

 VAR_4->clk = VAR_5;
 FUNC_5(VAR_4, &VAR_3[0], 0);
 return 0;
}
