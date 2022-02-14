
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_range_node {int dummy; } ;
struct TYPE_2__ {int parse_inplace; } ;
struct regmap {int cache_dirty; int bus; scalar_t__ cache_only; int dev; int cache_bypass; int reg_stride; int (* writeable_reg ) (int ,int) ;TYPE_1__ format; int can_multi_write; } ;
struct reg_sequence {int reg; unsigned int def; scalar_t__ delay_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 struct regmap_range_node* FUNC_2 (struct regmap*,unsigned int) ;
 int FUNC_3 (struct regmap*,struct reg_sequence*,size_t) ;
 int FUNC_4 (struct regmap*,struct reg_sequence const*,size_t) ;
 int FUNC_5 (struct regmap*,int,unsigned int) ;
 int FUNC_6 (int ,char*,unsigned int,int) ;
 int FUNC_7 (struct reg_sequence*) ;
 struct reg_sequence* FUNC_8 (struct reg_sequence const*,size_t,int ) ;
 int FUNC_9 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct regmap *VAR_3,
       const struct reg_sequence *VAR_4,
       size_t VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (!VAR_3->can_multi_write) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_7 = FUNC_5(VAR_3, VAR_4[VAR_6].reg, VAR_4[VAR_6].def);
   if (VAR_7 != 0)
    return VAR_7;

   if (VAR_4[VAR_6].delay_us)
    FUNC_11(VAR_4[VAR_6].delay_us);
  }
  return 0;
 }

 if (!VAR_3->format.parse_inplace)
  return -VAR_0;

 if (VAR_3->writeable_reg)
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   int VAR_8 = VAR_4[VAR_6].reg;
   if (!VAR_3->writeable_reg(VAR_3->dev, VAR_8))
    return -VAR_0;
   if (!FUNC_0(VAR_8, VAR_3->reg_stride))
    return -VAR_0;
  }

 if (!VAR_3->cache_bypass) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   unsigned int VAR_9 = VAR_4[VAR_6].def;
   unsigned int VAR_10 = VAR_4[VAR_6].reg;
   VAR_7 = FUNC_9(VAR_3, VAR_10, VAR_9);
   if (VAR_7) {
    FUNC_6(VAR_3->dev,
    "Error in caching of register: %x ret: %d\n",
        VAR_10, VAR_7);
    return VAR_7;
   }
  }
  if (VAR_3->cache_only) {
   VAR_3->cache_dirty = 1;
   return 0;
  }
 }

 FUNC_1(!VAR_3->bus);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned int VAR_11 = VAR_4[VAR_6].reg;
  struct regmap_range_node *VAR_12;




  VAR_12 = FUNC_2(VAR_3, VAR_11);
  if (VAR_12 || VAR_4[VAR_6].delay_us) {
   size_t VAR_13 = sizeof(struct reg_sequence)*VAR_5;
   struct reg_sequence *VAR_14 = FUNC_8(VAR_4, VAR_13,
          VAR_2);
   if (!VAR_14)
    return -VAR_1;
   VAR_7 = FUNC_3(VAR_3, VAR_14,
          VAR_5);
   FUNC_7(VAR_14);

   return VAR_7;
  }
 }
 return FUNC_4(VAR_3, VAR_4, VAR_5);
}
