
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kmx61_data {TYPE_1__* client; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 struct kmx61_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_2(VAR_1);
 struct kmx61_data *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->client, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->client->dev, "Error reading reg_inl\n");
  return VAR_4;
 }

 return 0;
}
