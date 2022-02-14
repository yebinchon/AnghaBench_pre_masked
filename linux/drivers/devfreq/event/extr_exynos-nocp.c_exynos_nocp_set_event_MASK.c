
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_nocp {int dev; int regmap; } ;
struct devfreq_event_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*) ;
 struct exynos_nocp* FUNC_1 (struct devfreq_event_dev*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct devfreq_event_dev *VAR_22)
{
 struct exynos_nocp *VAR_23 = FUNC_1(VAR_22);
 int VAR_24;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_16,
    VAR_18, 0);
 if (VAR_24 < 0) {
  FUNC_0(VAR_23->dev, "failed to disable the NoC probe device\n");
  return VAR_24;
 }


 VAR_24 = FUNC_3(VAR_23->regmap, VAR_21, 0x0);
 if (VAR_24 < 0)
  goto out;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_9,
    VAR_7,
    VAR_4);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_11,
    VAR_7,
    VAR_5);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_13,
    VAR_7,
    VAR_6);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_15,
    VAR_7,
    VAR_5);
 if (VAR_24 < 0)
  goto out;



 VAR_24 = FUNC_3(VAR_23->regmap, VAR_20, 0x0);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_3(VAR_23->regmap, VAR_19, 0x0);
 if (VAR_24 < 0)
  goto out;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_8,
    VAR_2,
    VAR_3);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_10,
    VAR_2,
    VAR_3);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_12,
    VAR_2,
    VAR_3);
 if (VAR_24 < 0)
  goto out;

 VAR_24 = FUNC_2(VAR_23->regmap, VAR_14,
    VAR_2,
    VAR_3);
 if (VAR_24 < 0)
  goto out;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_16,
   VAR_18 | VAR_17,
   VAR_18 | VAR_17);
 if (VAR_24 < 0)
  goto out;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_0,
    VAR_1,
    VAR_1);
 if (VAR_24 < 0)
  goto out;


 VAR_24 = FUNC_2(VAR_23->regmap, VAR_16,
    VAR_18,
    VAR_18);
 if (VAR_24 < 0)
  goto out;

 return 0;

out:

 if (FUNC_2(VAR_23->regmap, VAR_16,
    VAR_18, 0)) {
  FUNC_0(VAR_23->dev, "Failed to reset NoC probe device\n");
 }

 return VAR_24;
}
