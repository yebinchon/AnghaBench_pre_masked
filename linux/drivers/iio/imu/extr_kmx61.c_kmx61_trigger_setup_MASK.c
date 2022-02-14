
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kmx61_data {TYPE_2__* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct iio_dev {int id; int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (int) ;
 struct iio_trigger* FUNC_1 (int *,char*,int ,char const*,int ) ;
 int FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct iio_trigger*,struct iio_dev*) ;
 int VAR_1 ;

__attribute__((used)) static struct iio_trigger *FUNC_4(struct kmx61_data *VAR_2,
            struct iio_dev *VAR_3,
            const char *VAR_4)
{
 struct iio_trigger *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_2->client->dev,
          "%s-%s-dev%d",
          VAR_3->name,
          VAR_4,
          VAR_3->id);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->dev.parent = &VAR_2->client->dev;
 VAR_5->ops = &VAR_1;
 FUNC_3(VAR_5, VAR_3);

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6)
  return FUNC_0(VAR_6);

 return VAR_5;
}
