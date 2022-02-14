
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {TYPE_1__* client; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct rpr0521_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct rpr0521_data*) ;
 int FUNC_4 (struct rpr0521_data*) ;

__attribute__((used)) static int FUNC_5(struct iio_trigger *VAR_0,
 bool VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_2(VAR_0);
 struct rpr0521_data *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (VAR_1)
  VAR_4 = FUNC_4(VAR_3);
 else
  VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  FUNC_0(&VAR_3->client->dev, "rpr0521_pxs_drdy_set_state failed\n");

 return VAR_4;
}
