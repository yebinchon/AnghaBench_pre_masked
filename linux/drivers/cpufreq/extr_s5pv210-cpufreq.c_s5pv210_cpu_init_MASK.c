
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {scalar_t__ cpu; void* clk; int suspend_freq; } ;
struct TYPE_2__ {int refresh; void* freq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 unsigned long FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct cpufreq_policy*,int ,int) ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct cpufreq_policy *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 VAR_9->clk = FUNC_3(((void*)0), "armclk");
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 VAR_4 = FUNC_3(((void*)0), "sclk_dmc0");
 if (FUNC_0(VAR_4)) {
  VAR_11 = FUNC_1(VAR_4);
  goto out_dmc0;
 }

 VAR_5 = FUNC_3(((void*)0), "hclk_msys");
 if (FUNC_0(VAR_5)) {
  VAR_11 = FUNC_1(VAR_5);
  goto out_dmc1;
 }

 if (VAR_9->cpu != 0) {
  VAR_11 = -VAR_0;
  goto out_dmc1;
 }





 VAR_10 = FUNC_2(VAR_6[0]);

 if ((VAR_10 != VAR_1) && (VAR_10 != VAR_2)) {
  FUNC_7("CPUFreq doesn't support this memory type\n");
  VAR_11 = -VAR_0;
  goto out_dmc1;
 }


 VAR_7[0].refresh = (FUNC_8(VAR_6[0] + 0x30) * 1000);
 VAR_7[0].freq = FUNC_4(VAR_4);

 VAR_7[1].refresh = (FUNC_8(VAR_6[1] + 0x30) * 1000);
 VAR_7[1].freq = FUNC_4(VAR_5);

 VAR_9->suspend_freq = VAR_3;
 FUNC_6(VAR_9, VAR_8, 40000);
 return 0;

out_dmc1:
 FUNC_5(VAR_4);
out_dmc0:
 FUNC_5(VAR_9->clk);
 return VAR_11;
}
