
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct clk* FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,unsigned long,int ) ;
 int FUNC_8 (struct device*) ;
 struct device* FUNC_9 (int ) ;
 int FUNC_10 (char*,int,int *,int ) ;
 int FUNC_11 (char*) ;
 unsigned long FUNC_12 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_4)
{
 struct device *VAR_5;
 unsigned long VAR_6, VAR_7;
 unsigned long VAR_8;
 struct clk *VAR_9;
 int VAR_10;

 VAR_5 = FUNC_9(0);
 if (!VAR_5) {
  FUNC_11("Cannot get CPU for cpufreq driver\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_5, ((void*)0));
 if (FUNC_0(VAR_9)) {
  FUNC_6(VAR_5, "Cannot get clock for CPU0\n");
  return FUNC_1(VAR_9);
 }





 VAR_6 = FUNC_12(FUNC_5(VAR_9, 0), VAR_1);
 VAR_7 = FUNC_12(FUNC_5(VAR_9, VAR_2), VAR_1);
 FUNC_4(VAR_9);

 for (VAR_8 = VAR_6; VAR_8 <= VAR_7; VAR_8 += VAR_1) {
  VAR_10 = FUNC_7(VAR_5, VAR_8, 0);
  if (VAR_10)
   goto remove_opp;
 }

 VAR_3 = FUNC_10("cpufreq-dt", -1, ((void*)0), 0);
 VAR_10 = FUNC_2(VAR_3);
 if (VAR_10) {
  FUNC_6(VAR_5, "Failed to create platform device, %d\n", VAR_10);
  goto remove_opp;
 }

 return 0;

remove_opp:
 FUNC_8(VAR_5);

 return VAR_10;
}
