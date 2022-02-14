
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {struct clk* clk; TYPE_1__* freq_tbl; } ;
struct TYPE_3__ {int frequency; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 long FUNC_2 (struct clk*,long) ;
 int FUNC_3 (struct clk*,long) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 struct clk* FUNC_6 (long) ;
 int FUNC_7 (struct clk*,long) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_8(struct cpufreq_policy *VAR_1,
  unsigned int VAR_2)
{
 long VAR_3;
 struct clk *VAR_4;
 int VAR_5, VAR_6 = 1;

 VAR_3 = VAR_0.freq_tbl[VAR_2].frequency * 1000;

 if (FUNC_4("st,spear1340")) {







  VAR_4 = FUNC_6(VAR_3);
  if (FUNC_0(VAR_4)) {
   FUNC_5("Failed to get src clk\n");
   return FUNC_1(VAR_4);
  }


  VAR_6 = 2;
 } else {




  VAR_4 = VAR_0.clk;
 }

 VAR_3 = FUNC_2(VAR_4, VAR_3 * VAR_6);
 if (VAR_3 <= 0) {
  FUNC_5("clk_round_rate failed for cpu src clock\n");
  return VAR_3;
 }

 if (VAR_6 == 2)
  VAR_5 = FUNC_7(VAR_4, VAR_3);
 else
  VAR_5 = FUNC_3(VAR_0.clk, VAR_3);

 if (VAR_5)
  FUNC_5("CPU Freq: cpu clk_set_rate failed: %d\n", VAR_5);

 return VAR_5;
}
