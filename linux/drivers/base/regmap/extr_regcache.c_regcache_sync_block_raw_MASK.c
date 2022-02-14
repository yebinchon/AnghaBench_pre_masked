
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int reg_stride; } ;


 unsigned int FUNC_0 (struct regmap*,void*,unsigned int) ;
 void* FUNC_1 (struct regmap*,void*,unsigned int) ;
 int FUNC_2 (struct regmap*,unsigned int,unsigned int) ;
 int FUNC_3 (unsigned long*,unsigned int) ;
 int FUNC_4 (struct regmap*,void const**,unsigned int,unsigned int) ;
 int FUNC_5 (struct regmap*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct regmap *VAR_0, void *VAR_1,
       unsigned long *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 const void *VAR_10 = ((void*)0);
 int VAR_11;

 for (VAR_6 = VAR_4; VAR_6 < VAR_5; VAR_6++) {
  VAR_8 = VAR_3 + (VAR_6 * VAR_0->reg_stride);

  if (!FUNC_3(VAR_2, VAR_6) ||
      !FUNC_5(VAR_0, VAR_8)) {
   VAR_11 = FUNC_4(VAR_0, &VAR_10,
           VAR_9, VAR_8);
   if (VAR_11 != 0)
    return VAR_11;
   continue;
  }

  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_6);
  if (!FUNC_2(VAR_0, VAR_8, VAR_7)) {
   VAR_11 = FUNC_4(VAR_0, &VAR_10,
           VAR_9, VAR_8);
   if (VAR_11 != 0)
    return VAR_11;
   continue;
  }

  if (!VAR_10) {
   VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_6);
   VAR_9 = VAR_8;
  }
 }

 return FUNC_4(VAR_0, &VAR_10, VAR_9, VAR_8 +
   VAR_0->reg_stride);
}
