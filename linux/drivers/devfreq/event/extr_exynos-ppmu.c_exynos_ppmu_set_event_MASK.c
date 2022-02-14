
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct exynos_ppmu {int regmap; } ;
struct devfreq_event_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {int event_type; } ;


 int FUNC_0 (int) ;
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
 struct exynos_ppmu* FUNC_1 (struct devfreq_event_dev*) ;
 int FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct devfreq_event_dev *VAR_10)
{
 struct exynos_ppmu *VAR_11 = FUNC_1(VAR_10);
 int VAR_12 = FUNC_2(VAR_10);
 int VAR_13;
 u32 VAR_14, VAR_15;

 if (VAR_12 < 0)
  return VAR_12;


 VAR_13 = FUNC_3(VAR_11->regmap, VAR_1, &VAR_15);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_15 |= (VAR_0 | (VAR_2 << VAR_12));
 VAR_13 = FUNC_4(VAR_11->regmap, VAR_1, VAR_15);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_4(VAR_11->regmap, FUNC_0(VAR_12),
      VAR_10->desc->event_type);
 if (VAR_13 < 0)
  return VAR_13;


 VAR_13 = FUNC_3(VAR_11->regmap, VAR_3, &VAR_14);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_14 &= ~(VAR_8
   | VAR_6
   | VAR_4);
 VAR_14 |= (VAR_2 << VAR_9);
 VAR_14 |= (VAR_2 << VAR_7);
 VAR_14 |= (VAR_2 << VAR_5);
 VAR_13 = FUNC_4(VAR_11->regmap, VAR_3, VAR_14);
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
