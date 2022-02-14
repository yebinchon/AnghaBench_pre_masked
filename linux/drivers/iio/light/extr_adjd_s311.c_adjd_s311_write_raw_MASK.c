
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct adjd_s311_data {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;


 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct adjd_s311_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
          struct iio_chan_spec const *VAR_4,
          int VAR_5, int VAR_6, long VAR_7)
{
 struct adjd_s311_data *VAR_8 = FUNC_4(VAR_3);

 switch (VAR_7) {
 case 129:
  if (VAR_5 < 0 || VAR_5 > VAR_0)
   return -VAR_2;

  return FUNC_2(VAR_8->client,
   FUNC_0(VAR_4->address), VAR_5);
 case 128:
  if (VAR_5 != 0 || VAR_6 < 0 || VAR_6 > VAR_1)
   return -VAR_2;

  return FUNC_3(VAR_8->client,
   FUNC_1(VAR_4->address), VAR_6);
 }
 return -VAR_2;
}
