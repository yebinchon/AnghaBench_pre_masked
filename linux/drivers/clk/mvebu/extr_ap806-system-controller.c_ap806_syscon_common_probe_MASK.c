
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 struct regmap** VAR_4 ;
 int FUNC_2 (unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_3 (unsigned int,unsigned int*,unsigned int*) ;
 char* FUNC_4 (struct device*,struct device_node*,char*) ;
 struct regmap* FUNC_5 (int *,char const*,char const*,int ,int,int) ;
 struct regmap* FUNC_6 (struct device*,char const*,int *,int ,unsigned int) ;
 int FUNC_7 (struct regmap*) ;
 int FUNC_8 (struct regmap*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device_node*,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct regmap*,int ,unsigned int*) ;
 struct regmap* FUNC_13 (struct device_node*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_6,
         struct device_node *VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;
 const char *VAR_11, *VAR_12;
 struct device *VAR_13 = &VAR_6->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 struct regmap *VAR_15;
 u32 VAR_16;
 int VAR_17;

 VAR_15 = FUNC_13(VAR_7);
 if (FUNC_0(VAR_15)) {
  FUNC_9(VAR_13, "cannot get regmap\n");
  return FUNC_1(VAR_15);
 }

 VAR_17 = FUNC_12(VAR_15, VAR_1, &VAR_16);
 if (VAR_17) {
  FUNC_9(VAR_13, "cannot read from regmap\n");
  return VAR_17;
 }

 VAR_8 = VAR_16 & VAR_0;

 if (FUNC_11(VAR_6->dev.of_node,
        "marvell,ap806-clock")) {
  VAR_17 = FUNC_2(VAR_8, &VAR_9, &VAR_10);
 } else if (FUNC_11(VAR_6->dev.of_node,
        "marvell,ap807-clock")) {
  VAR_17 = FUNC_3(VAR_8, &VAR_9, &VAR_10);
 } else {
  FUNC_9(VAR_13, "compatible not supported\n");
  return -VAR_2;
 }

 if (VAR_17) {
  FUNC_9(VAR_13, "invalid Sample at Reset value\n");
  return VAR_17;
 }


 VAR_9 *= 1000 * 1000;
 VAR_10 *= 1000 * 1000;


 VAR_11 = FUNC_4(VAR_13, VAR_7, "pll-cluster-0");
 VAR_4[0] = FUNC_6(VAR_13, VAR_11, ((void*)0),
      0, VAR_9);
 if (FUNC_0(VAR_4[0])) {
  VAR_17 = FUNC_1(VAR_4[0]);
  goto fail0;
 }

 VAR_11 = FUNC_4(VAR_13, VAR_7, "pll-cluster-1");
 VAR_4[1] = FUNC_6(VAR_13, VAR_11, ((void*)0), 0,
      VAR_9);
 if (FUNC_0(VAR_4[1])) {
  VAR_17 = FUNC_1(VAR_4[1]);
  goto fail1;
 }


 VAR_12 = FUNC_4(VAR_13, VAR_7, "fixed");
 VAR_4[2] = FUNC_6(VAR_13, VAR_12, ((void*)0),
      0, 1200 * 1000 * 1000);
 if (FUNC_0(VAR_4[2])) {
  VAR_17 = FUNC_1(VAR_4[2]);
  goto fail2;
 }


 VAR_11 = FUNC_4(VAR_13, VAR_7, "mss");
 VAR_4[3] = FUNC_5(((void*)0), VAR_11, VAR_12,
        0, 1, 6);
 if (FUNC_0(VAR_4[3])) {
  VAR_17 = FUNC_1(VAR_4[3]);
  goto fail3;
 }


 VAR_11 = FUNC_4(VAR_13, VAR_7, "sdio");
 VAR_4[4] = FUNC_5(((void*)0), VAR_11,
        VAR_12,
        0, 1, 3);
 if (FUNC_0(VAR_4[4])) {
  VAR_17 = FUNC_1(VAR_4[4]);
  goto fail4;
 }


 VAR_11 = FUNC_4(VAR_13, VAR_7, "ap-dclk");
 VAR_4[5] = FUNC_6(VAR_13, VAR_11, ((void*)0), 0, VAR_10);
 if (FUNC_0(VAR_4[5])) {
  VAR_17 = FUNC_1(VAR_4[5]);
  goto fail5;
 }

 VAR_17 = FUNC_10(VAR_14, VAR_5, &VAR_3);
 if (VAR_17)
  goto fail_clk_add;

 return 0;

fail_clk_add:
 FUNC_7(VAR_4[5]);
fail5:
 FUNC_7(VAR_4[4]);
fail4:
 FUNC_7(VAR_4[3]);
fail3:
 FUNC_8(VAR_4[2]);
fail2:
 FUNC_8(VAR_4[1]);
fail1:
 FUNC_8(VAR_4[0]);
fail0:
 return VAR_17;
}
