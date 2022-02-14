
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_adc {struct iio_trigger* trig; int dev; } ;
struct TYPE_2__ {int parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct iio_dev {int id; int name; int dev; } ;


 int VAR_0 ;
 struct iio_trigger* FUNC_0 (int *,char*,int ,int ) ;
 struct mxs_lradc_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct iio_trigger*,struct iio_dev*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2)
{
 int VAR_3;
 struct iio_trigger *VAR_4;
 struct mxs_lradc_adc *VAR_5 = FUNC_1(VAR_2);

 VAR_4 = FUNC_0(&VAR_2->dev, "%s-dev%i", VAR_2->name,
          VAR_2->id);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev.parent = VAR_5->dev;
 FUNC_3(VAR_4, VAR_2);
 VAR_4->ops = &VAR_1;

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_5->trig = VAR_4;

 return 0;
}
