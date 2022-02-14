
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk8312_data {int dready_trigger_on; TYPE_1__* client; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct stk8312_data* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct iio_trigger*) ;
 int FUNC_3 (struct stk8312_data*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_1,
           bool VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_1);
 struct stk8312_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_2)
  VAR_5 = FUNC_3(VAR_4, VAR_0);
 else
  VAR_5 = FUNC_3(VAR_4, 0x00);

 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->client->dev, "failed to set trigger state\n");
  return VAR_5;
 }

 VAR_4->dready_trigger_on = VAR_2;

 return 0;
}
