
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_ppmu {int regmap; } ;
struct devfreq_event_dev {TYPE_1__* desc; int dev; } ;
struct devfreq_event_data {unsigned int total_count; unsigned int load_count; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (int) ;
 unsigned int VAR_8 ;
 int FUNC_1 (int *,char*,int ,unsigned int,unsigned int) ;
 struct exynos_ppmu* FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (struct devfreq_event_dev*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct devfreq_event_dev *VAR_9,
    struct devfreq_event_data *VAR_10)
{
 struct exynos_ppmu *VAR_11 = FUNC_2(VAR_9);
 int VAR_12 = FUNC_3(VAR_9);
 unsigned int VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 int VAR_19;

 if (VAR_12 < 0)
  return -VAR_0;


 VAR_19 = FUNC_4(VAR_11->regmap, VAR_7, &VAR_17);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_17 &= ~VAR_8;
 VAR_19 = FUNC_5(VAR_11->regmap, VAR_7, VAR_17);
 if (VAR_19 < 0)
  return VAR_19;


 VAR_19 = FUNC_4(VAR_11->regmap, VAR_1, &VAR_13);
 if (VAR_19 < 0)
  return VAR_19;
 VAR_10->total_count = VAR_13;


 switch (VAR_12) {
 case 131:
 case 130:
 case 129:
  VAR_19 = FUNC_4(VAR_11->regmap, FUNC_0(VAR_12), &VAR_14);
  if (VAR_19 < 0)
   return VAR_19;
  VAR_10->load_count = VAR_14;
  break;
 case 128:
  VAR_19 = FUNC_4(VAR_11->regmap, VAR_5, &VAR_15);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_19 = FUNC_4(VAR_11->regmap, VAR_6, &VAR_16);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_10->load_count = ((VAR_15 << 8) | VAR_16);
  break;
 default:
  return -VAR_0;
 }


 VAR_19 = FUNC_4(VAR_11->regmap, VAR_3, &VAR_18);
 if (VAR_19 < 0)
  return VAR_19;

 VAR_18 |= (VAR_2 | (VAR_4 << VAR_12));
 VAR_19 = FUNC_5(VAR_11->regmap, VAR_3, VAR_18);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_1(&VAR_9->dev, "%s (event: %ld/%ld)\n", VAR_9->desc->name,
     VAR_10->load_count, VAR_10->total_count);

 return 0;
}
