
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssp_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct iio_dev {TYPE_2__ dev; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct ssp_data* FUNC_1 (int ) ;
 int FUNC_2 (struct ssp_data*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3, int VAR_4,
         int VAR_5, long VAR_6)
{
 int VAR_7;
 struct ssp_data *VAR_8 = FUNC_1(VAR_2->dev.parent->parent);

 switch (VAR_6) {
 case 128:
  VAR_7 = FUNC_3(VAR_4, VAR_5);
  VAR_7 = FUNC_2(VAR_8, VAR_1, VAR_7);
  if (VAR_7 < 0)
   FUNC_0(&VAR_2->dev, "gyro sensor enable fail\n");

  return VAR_7;
 default:
  break;
 }

 return -VAR_0;
}
