
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_5__ {int parent; } ;
struct iio_dev {TYPE_2__ dev; int id; int name; } ;


 struct iio_trigger* FUNC_0 (int) ;
 int VAR_0 ;
 struct iio_trigger* FUNC_1 (TYPE_2__*,char*,int ,int ,char*) ;
 int FUNC_2 (TYPE_2__*,struct iio_trigger*) ;
 int FUNC_3 (struct iio_trigger*,struct iio_dev*) ;

__attribute__((used)) static struct iio_trigger *FUNC_4(struct iio_dev *VAR_1,
           char *VAR_2)
{
 struct iio_trigger *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(&VAR_1->dev, "%s-dev%d-%s", VAR_1->name,
          VAR_1->id, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dev.parent = VAR_1->dev.parent;
 FUNC_3(VAR_3, VAR_1);
 VAR_3->ops = &VAR_0;

 VAR_4 = FUNC_2(&VAR_1->dev, VAR_3);
 if (VAR_4)
  return FUNC_0(VAR_4);

 return VAR_3;
}
