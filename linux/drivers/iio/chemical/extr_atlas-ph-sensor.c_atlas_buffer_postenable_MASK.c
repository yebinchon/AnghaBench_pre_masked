
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct atlas_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct atlas_data*,int) ;
 struct atlas_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0)
{
 struct atlas_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(&VAR_1->client->dev);
 if (VAR_2 < 0) {
  FUNC_4(&VAR_1->client->dev);
  return VAR_2;
 }

 return FUNC_0(VAR_1, 1);
}
