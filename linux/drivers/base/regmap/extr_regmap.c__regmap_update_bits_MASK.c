
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int (* reg_update_bits ) (int ,unsigned int,unsigned int,unsigned int) ;int bus_context; } ;


 int FUNC_0 (struct regmap*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct regmap*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct regmap*,unsigned int) ;
 int FUNC_3 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct regmap *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          bool *VAR_4, bool VAR_5)
{
 int VAR_6;
 unsigned int VAR_7, VAR_8;

 if (VAR_4)
  *VAR_4 = 0;

 if (FUNC_2(VAR_0, VAR_1) && VAR_0->reg_update_bits) {
  VAR_6 = VAR_0->reg_update_bits(VAR_0->bus_context, VAR_1, VAR_2, VAR_3);
  if (VAR_6 == 0 && VAR_4)
   *VAR_4 = 1;
 } else {
  VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_8);
  if (VAR_6 != 0)
   return VAR_6;

  VAR_7 = VAR_8 & ~VAR_2;
  VAR_7 |= VAR_3 & VAR_2;

  if (VAR_5 || (VAR_7 != VAR_8)) {
   VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_7);
   if (VAR_6 == 0 && VAR_4)
    *VAR_4 = 1;
  }
 }

 return VAR_6;
}
