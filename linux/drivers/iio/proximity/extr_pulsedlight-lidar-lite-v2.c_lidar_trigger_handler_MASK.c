
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lidar_data {TYPE_1__* client; int buffer; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct iio_dev*) ;
 struct lidar_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lidar_data*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct lidar_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6, VAR_6->buffer);
 if (!VAR_7) {
  FUNC_3(VAR_5, VAR_6->buffer,
         FUNC_1(VAR_5));
 } else if (VAR_7 != -VAR_0) {
  FUNC_0(&VAR_6->client->dev, "cannot read LIDAR measurement");
 }

 FUNC_4(VAR_5->trig);

 return VAR_1;
}
