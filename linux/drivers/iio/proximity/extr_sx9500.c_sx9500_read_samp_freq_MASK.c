
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sx9500_data {int mutex; int regmap; } ;
struct TYPE_2__ {int val; int val2; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_3(struct sx9500_data *VAR_5,
     int *VAR_6, int *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;

 FUNC_0(&VAR_5->mutex);
 VAR_8 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_9);
 FUNC_1(&VAR_5->mutex);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = (VAR_9 & VAR_2) >> VAR_3;
 *VAR_6 = VAR_4[VAR_9].val;
 *VAR_7 = VAR_4[VAR_9].val2;

 return VAR_0;
}
