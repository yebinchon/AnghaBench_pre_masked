
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct iio_dev {int trig; int dev; int id; int name; } ;
struct bmi160_data {TYPE_2__* trig; int regmap; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {int * ops; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int,int *,int ,char*,TYPE_2__*) ;
 struct bmi160_data* FUNC_3 (struct iio_dev*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct iio_dev *VAR_3, int VAR_4, u32 VAR_5)
{
 struct bmi160_data *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 VAR_6->trig = FUNC_0(&VAR_3->dev, "%s-dev%d",
         VAR_3->name, VAR_3->id);

 if (VAR_6->trig == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_3->dev, VAR_4,
          &VAR_2,
          VAR_5, "bmi160", VAR_6->trig);
 if (VAR_7)
  return VAR_7;

 VAR_6->trig->dev.parent = FUNC_6(VAR_6->regmap);
 VAR_6->trig->ops = &VAR_1;
 FUNC_5(VAR_6->trig, VAR_3);

 VAR_7 = FUNC_1(&VAR_3->dev, VAR_6->trig);
 if (VAR_7)
  return VAR_7;

 VAR_3->trig = FUNC_4(VAR_6->trig);

 return 0;
}
