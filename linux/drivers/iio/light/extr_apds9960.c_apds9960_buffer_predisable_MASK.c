
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct apds9960_data {TYPE_1__* client; int reg_int_ges; int reg_enable_ges; } ;
struct TYPE_2__ {int dev; } ;


 struct apds9960_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0)
{
 struct apds9960_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->reg_enable_ges, 0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_1->reg_int_ges, 0);
 if (VAR_2)
  return VAR_2;

 FUNC_1(&VAR_1->client->dev);

 return 0;
}
