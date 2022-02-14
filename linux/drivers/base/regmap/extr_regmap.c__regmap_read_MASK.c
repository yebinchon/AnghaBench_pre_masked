
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int (* reg_read ) (void*,unsigned int,unsigned int*) ;int cache_bypass; int dev; scalar_t__ cache_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct regmap*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_4 (struct regmap*,unsigned int) ;
 scalar_t__ FUNC_5 (struct regmap*) ;
 int FUNC_6 (void*,unsigned int,unsigned int*) ;
 int FUNC_7 (struct regmap*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct regmap *VAR_2, unsigned int VAR_3,
   unsigned int *VAR_4)
{
 int VAR_5;
 void *VAR_6 = FUNC_0(VAR_2);

 if (!VAR_2->cache_bypass) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  if (VAR_5 == 0)
   return 0;
 }

 if (VAR_2->cache_only)
  return -VAR_0;

 if (!FUNC_4(VAR_2, VAR_3))
  return -VAR_1;

 VAR_5 = VAR_2->reg_read(VAR_6, VAR_3, VAR_4);
 if (VAR_5 == 0) {
  if (FUNC_5(VAR_2))
   FUNC_1(VAR_2->dev, "%x => %x\n", VAR_3, *VAR_4);

  FUNC_7(VAR_2, VAR_3, *VAR_4);

  if (!VAR_2->cache_bypass)
   FUNC_3(VAR_2, VAR_3, *VAR_4);
 }

 return VAR_5;
}
