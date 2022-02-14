
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsys01_dev {int (* reset ) (int ,int ,int) ;int client; int lock; } ;
struct TYPE_4__ {struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_2__ dev; int name; int * info; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,struct iio_dev*) ;
 struct tsys01_dev* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4, struct device *VAR_5)
{
 int VAR_6;
 struct tsys01_dev *VAR_7 = FUNC_2(VAR_4);

 FUNC_3(&VAR_7->lock);

 VAR_4->info = &VAR_3;
 VAR_4->name = VAR_5->driver->name;
 VAR_4->dev.parent = VAR_5;
 VAR_4->modes = VAR_0;
 VAR_4->channels = VAR_2;
 VAR_4->num_channels = FUNC_0(VAR_2);

 VAR_6 = VAR_7->reset(VAR_7->client, VAR_1, 3000);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_5, VAR_4);
}
