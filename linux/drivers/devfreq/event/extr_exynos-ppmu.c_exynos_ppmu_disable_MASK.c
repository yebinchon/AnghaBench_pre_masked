
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
 struct exynos_ppmu* FUNC_0 (struct devfreq_event_dev*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct devfreq_event_dev *VAR_8)
{
 struct exynos_ppmu *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;
 u32 VAR_11;


 VAR_10 = FUNC_2(VAR_9->regmap, VAR_1,
    VAR_0 |
    VAR_2 |
    VAR_3 |
    VAR_4 |
    VAR_5);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_1(VAR_9->regmap, VAR_6, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 &= ~VAR_7;
 VAR_10 = FUNC_2(VAR_9->regmap, VAR_6, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
