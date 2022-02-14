
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mma8452_data {TYPE_2__* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct iio_dev {struct iio_trigger* trig; int id; int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (int *,char*,int ,int ) ;
 struct mma8452_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct iio_trigger*,struct iio_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2)
{
 struct mma8452_data *VAR_3 = FUNC_1(VAR_2);
 struct iio_trigger *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(&VAR_3->client->dev, "%s-dev%d",
          VAR_2->name,
          VAR_2->id);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev.parent = &VAR_3->client->dev;
 VAR_4->ops = &VAR_1;
 FUNC_3(VAR_4, VAR_2);

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_2->trig = VAR_4;

 return 0;
}
