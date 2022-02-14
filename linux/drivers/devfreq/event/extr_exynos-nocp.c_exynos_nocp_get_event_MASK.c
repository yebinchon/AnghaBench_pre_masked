
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_nocp {int dev; int regmap; } ;
struct devfreq_event_dev {TYPE_1__* desc; int dev; } ;
struct devfreq_event_data {unsigned int load_count; unsigned int total_count; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 struct exynos_nocp* FUNC_2 (struct devfreq_event_dev*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct devfreq_event_dev *VAR_4,
    struct devfreq_event_data *VAR_5)
{
 struct exynos_nocp *VAR_6 = FUNC_2(VAR_4);
 unsigned int VAR_7[4];
 int VAR_8;


 VAR_8 = FUNC_3(VAR_6->regmap, VAR_0, &VAR_7[0]);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_1, &VAR_7[1]);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_2, &VAR_7[2]);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_3(VAR_6->regmap, VAR_3, &VAR_7[3]);
 if (VAR_8 < 0)
  goto out;

 VAR_5->load_count = ((VAR_7[1] << 16) | VAR_7[0]);
 VAR_5->total_count = ((VAR_7[3] << 16) | VAR_7[2]);

 FUNC_0(&VAR_4->dev, "%s (event: %ld/%ld)\n", VAR_4->desc->name,
     VAR_5->load_count, VAR_5->total_count);

 return 0;

out:
 FUNC_1(VAR_6->dev, "Failed to read the counter of NoC probe device\n");

 return VAR_8;
}
