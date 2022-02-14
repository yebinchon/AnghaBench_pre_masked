
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
struct dmard06_data {int chip_id; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 struct dmard06_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9,
       int *VAR_10, int *VAR_11, long VAR_12)
{
 struct dmard06_data *VAR_13 = FUNC_2(VAR_8);
 int VAR_14;

 switch (VAR_12) {
 case 130:
  VAR_14 = FUNC_1(VAR_13->client,
            VAR_9->address);
  if (VAR_14 < 0) {
   FUNC_0(&VAR_13->client->dev,
    "Error reading data: %d\n", VAR_14);
   return VAR_14;
  }

  *VAR_10 = FUNC_3(VAR_14, VAR_3);

  if (VAR_13->chip_id == VAR_2)
   *VAR_10 = *VAR_10 >> 1;

  switch (VAR_9->type) {
  case 132:
   return VAR_6;
  case 128:
   if (VAR_13->chip_id != VAR_2)
    *VAR_10 = *VAR_10 / 2;
   return VAR_6;
  default:
   return -VAR_5;
  }
 case 131:
  switch (VAR_9->type) {
  case 128:
   *VAR_10 = VAR_4;
   return VAR_6;
  default:
   return -VAR_5;
  }
 case 129:
  switch (VAR_9->type) {
  case 132:
   *VAR_10 = 0;
   if (VAR_13->chip_id == VAR_2)
    *VAR_11 = VAR_1;
   else
    *VAR_11 = VAR_0;
   return VAR_7;
  default:
   return -VAR_5;
  }
 default:
  return -VAR_5;
 }
}
