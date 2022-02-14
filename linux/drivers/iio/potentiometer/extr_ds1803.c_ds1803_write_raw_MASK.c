
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ds1803_data {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;

 int FUNC_1 (int ,int ,int) ;
 struct ds1803_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct ds1803_data *VAR_7 = FUNC_2(VAR_2);
 int VAR_8 = VAR_3->channel;

 if (VAR_5 != 0)
  return -VAR_1;

 switch (VAR_6) {
 case 128:
  if (VAR_4 > VAR_0 || VAR_4 < 0)
   return -VAR_1;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_1(VAR_7->client, FUNC_0(VAR_8), VAR_4);
}
