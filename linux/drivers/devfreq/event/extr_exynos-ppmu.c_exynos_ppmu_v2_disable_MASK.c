
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_ppmu {int regmap; } ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct exynos_ppmu* FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct devfreq_event_dev *VAR_25)
{
 struct exynos_ppmu *VAR_26 = FUNC_0(VAR_25);
 int VAR_27;
 u32 VAR_28, VAR_29;


 VAR_29 = (VAR_0 | VAR_1 | VAR_2
  | VAR_3 | VAR_4);
 VAR_27 = FUNC_2(VAR_26->regmap, VAR_17, VAR_29);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_18, VAR_29);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_14, VAR_29);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_16, VAR_29);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_10, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_11, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_12, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_13, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_15, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_6, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_7, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_8, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_9, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_22, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_21, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_24, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_23, 0x0);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_26->regmap, VAR_19, 0x0);
 if (VAR_27 < 0)
  return VAR_27;


 VAR_27 = FUNC_1(VAR_26->regmap, VAR_20, &VAR_28);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_28 &= ~VAR_5;
 VAR_27 = FUNC_2(VAR_26->regmap, VAR_20, VAR_28);
 if (VAR_27 < 0)
  return VAR_27;

 return 0;
}
