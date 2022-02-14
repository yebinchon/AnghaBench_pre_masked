
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_ppmu {int regmap; } ;
struct devfreq_event_dev {TYPE_1__* desc; } ;
struct TYPE_2__ {unsigned int event_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 struct exynos_ppmu* FUNC_1 (struct devfreq_event_dev*) ;
 int FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct devfreq_event_dev *VAR_14)
{
 struct exynos_ppmu *VAR_15 = FUNC_1(VAR_14);
 unsigned int VAR_16, VAR_17;
 int VAR_18 = FUNC_2(VAR_14);
 int VAR_19;


 VAR_19 = FUNC_3(VAR_15->regmap, VAR_9, &VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 |= (VAR_0 | (VAR_1 << VAR_18));
 VAR_19 = FUNC_4(VAR_15->regmap, VAR_9, VAR_17);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_4(VAR_15->regmap, FUNC_0(VAR_18),
      VAR_14->desc->event_type);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_3(VAR_15->regmap, VAR_11, &VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 &= ~(VAR_7
   | VAR_5
   | VAR_3
   | VAR_2
   | VAR_12);
 VAR_16 |= (VAR_1 << VAR_8);
 VAR_16 |= (VAR_1 << VAR_6);
 VAR_16 |= (VAR_1 << VAR_4);
 VAR_16 |= (VAR_10 << VAR_13);

 VAR_19 = FUNC_4(VAR_15->regmap, VAR_11, VAR_16);
 if (VAR_19 < 0)
  return VAR_19;

 return 0;
}
