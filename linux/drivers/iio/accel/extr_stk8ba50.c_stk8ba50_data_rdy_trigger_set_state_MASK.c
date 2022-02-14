
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stk8ba50_data {int dready_trigger_on; TYPE_1__* client; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 struct stk8ba50_data* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_2,
            bool VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_3(VAR_2);
 struct stk8ba50_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;

 if (VAR_3)
  VAR_6 = FUNC_1(VAR_5->client,
   VAR_1, VAR_0);
 else
  VAR_6 = FUNC_1(VAR_5->client,
   VAR_1, 0x00);

 if (VAR_6 < 0)
  FUNC_0(&VAR_5->client->dev, "failed to set trigger state\n");
 else
  VAR_5->dready_trigger_on = VAR_3;

 return VAR_6;
}
