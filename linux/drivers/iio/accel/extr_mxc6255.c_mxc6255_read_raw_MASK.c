
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxc6255_data {TYPE_1__* client; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 struct mxc6255_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mxc6255_data *VAR_9 = FUNC_1(VAR_4);
 unsigned int VAR_10;
 int VAR_11;

 switch (VAR_8) {
 case 129:
  VAR_11 = FUNC_2(VAR_9->regmap, VAR_5->address, &VAR_10);
  if (VAR_11 < 0) {
   FUNC_0(&VAR_9->client->dev,
    "Error reading reg %lu\n", VAR_5->address);
   return VAR_11;
  }

  *VAR_6 = FUNC_3(VAR_10, 7);
  return VAR_1;
 case 128:
  *VAR_6 = 0;
  *VAR_7 = VAR_3;
  return VAR_2;
 default:
  return -VAR_0;
 }
}
