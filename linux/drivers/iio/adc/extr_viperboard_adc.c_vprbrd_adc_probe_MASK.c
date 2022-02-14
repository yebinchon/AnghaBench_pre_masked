
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vprbrd_adc {struct vprbrd* vb; } ;
struct vprbrd {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {TYPE_2__* parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 struct vprbrd* FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,struct iio_dev*) ;
 struct vprbrd_adc* FUNC_5 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct vprbrd *VAR_5 = FUNC_2(VAR_4->dev.parent);
 struct vprbrd_adc *VAR_6;
 struct iio_dev *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6));
 if (!VAR_7) {
  FUNC_1(&VAR_4->dev, "failed allocating iio device\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_7);
 VAR_6->vb = VAR_5;
 VAR_7->name = "viperboard adc";
 VAR_7->dev.parent = &VAR_4->dev;
 VAR_7->info = &VAR_3;
 VAR_7->modes = VAR_1;
 VAR_7->channels = VAR_2;
 VAR_7->num_channels = FUNC_0(VAR_2);

 VAR_8 = FUNC_4(&VAR_4->dev, VAR_7);
 if (VAR_8) {
  FUNC_1(&VAR_4->dev, "could not register iio (adc)");
  return VAR_8;
 }

 return 0;
}
