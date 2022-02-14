
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29125_data {int conf1; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 struct isl29125_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5,
          struct iio_chan_spec const *VAR_6,
          int VAR_7, int VAR_8, long VAR_9)
{
 struct isl29125_data *VAR_10 = FUNC_1(VAR_5);

 switch (VAR_9) {
 case 128:
  if (VAR_7 != 0)
   return -VAR_0;
  if (VAR_8 == VAR_4)
   VAR_10->conf1 |= VAR_2;
  else if (VAR_8 == VAR_3)
   VAR_10->conf1 &= ~VAR_2;
  else
   return -VAR_0;
  return FUNC_0(VAR_10->client, VAR_1,
   VAR_10->conf1);
 default:
  return -VAR_0;
 }
}
