
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct exynos_ppmu {int regmap; } ;
struct devfreq_event_dev {TYPE_1__* desc; int dev; } ;
struct devfreq_event_data {unsigned int total_count; unsigned long load_count; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,unsigned long,unsigned int) ;
 struct exynos_ppmu* FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (struct devfreq_event_dev*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct devfreq_event_dev *VAR_8,
        struct devfreq_event_data *VAR_9)
{
 struct exynos_ppmu *VAR_10 = FUNC_2(VAR_8);
 int VAR_11 = FUNC_3(VAR_8);
 int VAR_12;
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned long VAR_19 = 0;


 VAR_12 = FUNC_4(VAR_10->regmap, VAR_7, &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_13 &= ~VAR_2;
 VAR_12 = FUNC_5(VAR_10->regmap, VAR_7, VAR_13);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_4(VAR_10->regmap, VAR_3, &VAR_17);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9->total_count = VAR_17;

 switch (VAR_11) {
 case 131:
 case 130:
 case 129:
  VAR_12 = FUNC_4(VAR_10->regmap, FUNC_0(VAR_11), &VAR_18);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_19 = VAR_18;
  break;
 case 128:
  VAR_12 = FUNC_4(VAR_10->regmap, VAR_5,
      &VAR_15);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_4(VAR_10->regmap, VAR_6, &VAR_16);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_19 = ((u64)((VAR_15 & 0xff)) << 32)+ (u64)VAR_16;
  break;
 }
 VAR_9->load_count = VAR_19;


 VAR_12 = FUNC_4(VAR_10->regmap, VAR_4, &VAR_14);
 if (VAR_12 < 0)
  return 0;

 VAR_14 |= (VAR_0 | (VAR_1 << VAR_11));
 VAR_12 = FUNC_5(VAR_10->regmap, VAR_4, VAR_14);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_1(&VAR_8->dev, "%25s (load: %ld / %ld)\n", VAR_8->desc->name,
     VAR_9->load_count, VAR_9->total_count);
 return 0;
}
