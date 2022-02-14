
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int cache_bypass; int dev; scalar_t__ reg_stride; } ;


 int FUNC_0 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,int) ;
 int FUNC_3 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_4 (struct regmap*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (struct regmap*,unsigned int) ;
 int FUNC_6 (struct regmap*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct regmap *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = VAR_1; VAR_3 <= VAR_2; VAR_3 += VAR_0->reg_stride) {
  unsigned int VAR_4;
  int VAR_5;

  if (FUNC_5(VAR_0, VAR_3) ||
      !FUNC_6(VAR_0, VAR_3))
   continue;

  VAR_5 = FUNC_3(VAR_0, VAR_3, &VAR_4);
  if (VAR_5)
   return VAR_5;

  if (!FUNC_4(VAR_0, VAR_3, VAR_4))
   continue;

  VAR_0->cache_bypass = 1;
  VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);
  VAR_0->cache_bypass = 0;
  if (VAR_5) {
   FUNC_2(VAR_0->dev, "Unable to sync register %#x. %d\n",
    VAR_3, VAR_5);
   return VAR_5;
  }
  FUNC_1(VAR_0->dev, "Synced register %#x, value %#x\n", VAR_3, VAR_4);
 }

 return 0;
}
