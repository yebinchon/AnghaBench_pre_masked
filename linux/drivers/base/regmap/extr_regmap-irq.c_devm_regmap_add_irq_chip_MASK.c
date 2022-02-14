
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int dummy; } ;
struct regmap_irq_chip {int dummy; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct regmap_irq_chip_data**) ;
 struct regmap_irq_chip_data** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct regmap_irq_chip_data**) ;
 int FUNC_3 (struct regmap*,int,int,int,struct regmap_irq_chip const*,struct regmap_irq_chip_data**) ;

int FUNC_4(struct device *VAR_3, struct regmap *VAR_4, int VAR_5,
        int VAR_6, int VAR_7,
        const struct regmap_irq_chip *VAR_8,
        struct regmap_irq_chip_data **VAR_9)
{
 struct regmap_irq_chip_data **VAR_10, *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_2, sizeof(*VAR_10),
      VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8, &VAR_11);
 if (VAR_12 < 0) {
  FUNC_2(VAR_10);
  return VAR_12;
 }

 *VAR_10 = VAR_11;
 FUNC_0(VAR_3, VAR_10);
 *VAR_9 = VAR_11;
 return 0;
}
