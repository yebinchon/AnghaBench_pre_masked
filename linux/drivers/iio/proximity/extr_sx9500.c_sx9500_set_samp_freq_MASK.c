
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sx9500_data {int mutex; int regmap; } ;
struct TYPE_3__ {int val; int val2; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct sx9500_data *VAR_5,
    int VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  if (VAR_6 == VAR_4[VAR_8].val &&
      VAR_7 == VAR_4[VAR_8].val2)
   break;

 if (VAR_8 == FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_1(&VAR_5->mutex);

 VAR_9 = FUNC_3(VAR_5->regmap, VAR_1,
     VAR_2,
     VAR_8 << VAR_3);

 FUNC_2(&VAR_5->mutex);

 return VAR_9;
}
