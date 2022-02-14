
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int reg_stride; int cache_bypass; int dev; } ;


 int FUNC_0 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,int) ;
 unsigned int FUNC_3 (struct regmap*,void*,unsigned int) ;
 int FUNC_4 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned long*,unsigned int) ;
 int FUNC_6 (struct regmap*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct regmap *VAR_0, void *VAR_1,
          unsigned long *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = VAR_3 + (VAR_6 * VAR_0->reg_stride);

  if (!FUNC_5(VAR_2, VAR_6) ||
      !FUNC_6(VAR_0, VAR_7))
   continue;

  VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_6);
  if (!FUNC_4(VAR_0, VAR_7, VAR_8))
   continue;

  VAR_0->cache_bypass = 1;

  VAR_9 = FUNC_0(VAR_0, VAR_7, VAR_8);

  VAR_0->cache_bypass = 0;
  if (VAR_9 != 0) {
   FUNC_2(VAR_0->dev, "Unable to sync register %#x. %d\n",
    VAR_7, VAR_9);
   return VAR_9;
  }
  FUNC_1(VAR_0->dev, "Synced register %#x, value %#x\n",
   VAR_7, VAR_8);
 }

 return 0;
}
