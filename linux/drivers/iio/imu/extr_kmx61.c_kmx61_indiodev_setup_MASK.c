
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kmx61_data {TYPE_2__* client; } ;
struct iio_info {int dummy; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int num_channels; char const* name; struct iio_info const* info; int modes; struct iio_chan_spec const* channels; TYPE_1__ dev; } ;
struct iio_chan_spec {int dummy; } ;
typedef int data ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (struct iio_dev*,struct kmx61_data*) ;

__attribute__((used)) static struct iio_dev *FUNC_3(struct kmx61_data *VAR_2,
         const struct iio_info *VAR_3,
         const struct iio_chan_spec *VAR_4,
         int VAR_5,
         const char *VAR_6)
{
 struct iio_dev *VAR_7;

 VAR_7 = FUNC_1(&VAR_2->client->dev, sizeof(VAR_2));
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_7, VAR_2);

 VAR_7->dev.parent = &VAR_2->client->dev;
 VAR_7->channels = VAR_4;
 VAR_7->num_channels = VAR_5;
 VAR_7->name = VAR_6;
 VAR_7->modes = VAR_1;
 VAR_7->info = VAR_3;

 return VAR_7;
}
