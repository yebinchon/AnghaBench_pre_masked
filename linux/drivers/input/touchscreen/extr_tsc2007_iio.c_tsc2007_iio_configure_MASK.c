
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsc2007_iio {struct tsc2007* ts; } ;
struct tsc2007 {TYPE_2__* client; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 struct tsc2007_iio* FUNC_4 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct tsc2007 *VAR_4)
{
 struct iio_dev *VAR_5;
 struct tsc2007_iio *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(&VAR_4->client->dev, sizeof(*VAR_6));
 if (!VAR_5) {
  FUNC_1(&VAR_4->client->dev, "iio_device_alloc failed\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_5);
 VAR_6->ts = VAR_4;

 VAR_5->name = "tsc2007";
 VAR_5->dev.parent = &VAR_4->client->dev;
 VAR_5->info = &VAR_3;
 VAR_5->modes = VAR_1;
 VAR_5->channels = VAR_2;
 VAR_5->num_channels = FUNC_0(VAR_2);

 VAR_7 = FUNC_3(&VAR_4->client->dev, VAR_5);
 if (VAR_7) {
  FUNC_1(&VAR_4->client->dev,
   "iio_device_register() failed: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
