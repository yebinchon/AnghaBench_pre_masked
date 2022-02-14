
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_range_node {int dummy; } ;
struct regmap {int dummy; } ;
struct reg_sequence {unsigned int reg; scalar_t__ delay_us; } ;


 struct regmap_range_node* FUNC_0 (struct regmap*,unsigned int) ;
 int FUNC_1 (struct regmap*,struct reg_sequence*,int) ;
 unsigned int FUNC_2 (struct regmap*,unsigned int,struct regmap_range_node*) ;
 int FUNC_3 (struct regmap*,unsigned int*,struct regmap_range_node*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct regmap *VAR_0,
            struct reg_sequence *VAR_1,
            size_t VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 struct reg_sequence *VAR_6;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8 = 0;






 VAR_6 = VAR_1;
 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2; VAR_4++, VAR_5++) {
  unsigned int VAR_9 = VAR_1[VAR_4].reg;
  struct regmap_range_node *VAR_10;

  VAR_10 = FUNC_0(VAR_0, VAR_9);
  if (VAR_10) {
   unsigned int VAR_11 = FUNC_2(VAR_0, VAR_9,
              VAR_10);

   if (VAR_4 == 0)
    VAR_7 = VAR_11;
   if (VAR_11 != VAR_7) {
    VAR_7 = VAR_11;
    VAR_8 = 1;
   }
  }






  if (VAR_8 || VAR_1[VAR_4].delay_us) {







    if (VAR_1[VAR_4].delay_us && VAR_4 == 0)
     VAR_5 = 1;

    VAR_3 = FUNC_1(VAR_0, VAR_6, VAR_5);
    if (VAR_3 != 0)
     return VAR_3;

    if (VAR_1[VAR_4].delay_us)
     FUNC_4(VAR_1[VAR_4].delay_us);

    VAR_6 += VAR_5;
    VAR_5 = 0;

    if (VAR_8) {
     VAR_3 = FUNC_3(VAR_0,
          &VAR_6[VAR_5].reg,
          VAR_10, 1);
     if (VAR_3 != 0)
      return VAR_3;

     VAR_8 = 0;
    }

  }

 }
 if (VAR_5 > 0)
  return FUNC_1(VAR_0, VAR_6, VAR_5);
 return 0;
}
