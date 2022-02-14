
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int cache_dirty; int (* reg_write ) (void*,unsigned int,unsigned int) ;int dev; scalar_t__ cache_only; int defer_caching; int cache_bypass; } ;


 int VAR_0 ;
 void* FUNC_0 (struct regmap*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct regmap*,unsigned int) ;
 int FUNC_5 (void*,unsigned int,unsigned int) ;
 int FUNC_6 (struct regmap*,unsigned int,unsigned int) ;

int FUNC_7(struct regmap *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 int VAR_4;
 void *VAR_5 = FUNC_0(VAR_1);

 if (!FUNC_4(VAR_1, VAR_2))
  return -VAR_0;

 if (!VAR_1->cache_bypass && !VAR_1->defer_caching) {
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  if (VAR_4 != 0)
   return VAR_4;
  if (VAR_1->cache_only) {
   VAR_1->cache_dirty = 1;
   return 0;
  }
 }

 if (FUNC_3(VAR_1))
  FUNC_1(VAR_1->dev, "%x <= %x\n", VAR_2, VAR_3);

 FUNC_6(VAR_1, VAR_2, VAR_3);

 return VAR_1->reg_write(VAR_5, VAR_2, VAR_3);
}
