
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;
struct dmard09_data {TYPE_1__* client; } ;
typedef int s16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int,int *) ;
 struct dmard09_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct dmard09_data *VAR_9 = FUNC_3(VAR_4);
 u8 VAR_10[VAR_0];
 int VAR_11;
 s16 VAR_12;

 switch (VAR_8) {
 case 128:




  VAR_11 = FUNC_2(VAR_9->client,
          VAR_1,
          VAR_0, VAR_10);
  if (VAR_11 < 0) {
   FUNC_0(&VAR_9->client->dev, "Error reading reg %d\n",
    VAR_1);
   return VAR_11;
  }

  VAR_12 = FUNC_1(&VAR_10[VAR_5->address]);


  VAR_12 <<= 4;
  VAR_12 >>= 7;

  *VAR_6 = VAR_12;

  return VAR_3;
 default:
  return -VAR_2;
 }
}
