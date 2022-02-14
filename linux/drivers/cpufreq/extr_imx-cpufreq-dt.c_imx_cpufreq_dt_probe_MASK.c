
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct device*,int*,int) ;
 struct device* FUNC_7 (int ) ;
 int FUNC_8 (struct device*,char*,int*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int *,char*,int,int *,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct device *VAR_8 = FUNC_7(0);
 u32 VAR_9, VAR_10[2];
 int VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_8(VAR_8, "speed_grade", &VAR_9);
 if (VAR_13)
  return VAR_13;

 if (FUNC_9("fsl,imx8mn"))
  VAR_11 = (VAR_9 & VAR_0)
         >> VAR_4;
 else
  VAR_11 = (VAR_9 & VAR_3)
         >> VAR_4;
 VAR_12 = (VAR_9 & VAR_1) >> VAR_2;
 if (VAR_12 == 0 && VAR_11 == 0 && (
   FUNC_9("fsl,imx8mm") ||
   FUNC_9("fsl,imx8mn") ||
   FUNC_9("fsl,imx8mq")))
  VAR_11 = 1;

 VAR_10[0] = FUNC_0(VAR_11);
 VAR_10[1] = FUNC_0(VAR_12);
 FUNC_4(&VAR_7->dev, "cpu speed grade %d mkt segment %d supported-hw %#x %#x\n",
   VAR_11, VAR_12, VAR_10[0], VAR_10[1]);

 VAR_6 = FUNC_6(VAR_8, VAR_10, 2);
 if (FUNC_1(VAR_6)) {
  VAR_13 = FUNC_2(VAR_6);
  FUNC_3(&VAR_7->dev, "Failed to set supported opp: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_5 = FUNC_10(
   &VAR_7->dev, "cpufreq-dt", -1, ((void*)0), 0);
 if (FUNC_1(VAR_5)) {
  FUNC_5(VAR_6);
  VAR_13 = FUNC_2(VAR_5);
  FUNC_3(&VAR_7->dev, "Failed to register cpufreq-dt: %d\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
