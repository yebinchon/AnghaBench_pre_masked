
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpr0521_data {int regmap; } ;
struct TYPE_4__ {int mask; int shift; TYPE_1__* gain; int reg; } ;
struct TYPE_3__ {int scale; int uscale; } ;


 int FUNC_0 (int ,int ,int*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct rpr0521_data *VAR_1, int VAR_2,
       int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_1->regmap, VAR_0[VAR_2].reg, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = (VAR_0[VAR_2].mask & VAR_6) >> VAR_0[VAR_2].shift;
 *VAR_3 = VAR_0[VAR_2].gain[VAR_7].scale;
 *VAR_4 = VAR_0[VAR_2].gain[VAR_7].uscale;

 return 0;
}
