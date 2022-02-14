
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpr0521_data {int regmap; } ;
struct TYPE_4__ {int size; int shift; int mask; int reg; TYPE_1__* gain; } ;
struct TYPE_3__ {int scale; int uscale; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct rpr0521_data *VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_1[VAR_3].size; VAR_6++)
  if (VAR_4 == VAR_1[VAR_3].gain[VAR_6].scale &&
      VAR_5 == VAR_1[VAR_3].gain[VAR_6].uscale) {
   VAR_7 = VAR_6;
   break;
  }

 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_2->regmap, VAR_1[VAR_3].reg,
      VAR_1[VAR_3].mask,
      VAR_7 << VAR_1[VAR_3].shift);
}
