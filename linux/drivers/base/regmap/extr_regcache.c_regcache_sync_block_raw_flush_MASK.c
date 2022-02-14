
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t val_bytes; } ;
struct regmap {unsigned int reg_stride; int cache_bypass; int dev; TYPE_1__ format; } ;


 int FUNC_0 (struct regmap*,unsigned int,void const*,int) ;
 int FUNC_1 (int ,char*,int,int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_0, const void **VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 size_t VAR_4 = VAR_0->format.val_bytes;
 int VAR_5, VAR_6;

 if (*VAR_1 == ((void*)0))
  return 0;

 VAR_6 = (VAR_3 - VAR_2) / VAR_0->reg_stride;

 FUNC_1(VAR_0->dev, "Writing %zu bytes for %d registers from 0x%x-0x%x\n",
  VAR_6 * VAR_4, VAR_6, VAR_2, VAR_3 - VAR_0->reg_stride);

 VAR_0->cache_bypass = 1;

 VAR_5 = FUNC_0(VAR_0, VAR_2, *VAR_1, VAR_6 * VAR_4);
 if (VAR_5)
  FUNC_2(VAR_0->dev, "Unable to sync registers %#x-%#x. %d\n",
   VAR_2, VAR_3 - VAR_0->reg_stride, VAR_5);

 VAR_0->cache_bypass = 0;

 *VAR_1 = ((void*)0);

 return VAR_5;
}
