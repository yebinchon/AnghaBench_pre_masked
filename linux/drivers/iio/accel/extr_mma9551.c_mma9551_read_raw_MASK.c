
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma9551_data {int mutex; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;





 struct mma9551_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,struct iio_chan_spec const*,int*,int*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int ,struct iio_chan_spec const*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int *VAR_3, int *VAR_4, long VAR_5)
{
 struct mma9551_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 131:
  switch (VAR_2->type) {
  case 128:
   FUNC_4(&VAR_6->mutex);
   VAR_7 = FUNC_3(VAR_6->client, VAR_2, VAR_3);
   FUNC_5(&VAR_6->mutex);
   return VAR_7;
  default:
   return -VAR_0;
  }
 case 130:
  switch (VAR_2->type) {
  case 132:
   FUNC_4(&VAR_6->mutex);
   VAR_7 = FUNC_1(VAR_6->client,
            VAR_2, VAR_3, VAR_4);
   FUNC_5(&VAR_6->mutex);
   return VAR_7;
  default:
   return -VAR_0;
  }
 case 129:
  switch (VAR_2->type) {
  case 132:
   return FUNC_2(VAR_3, VAR_4);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
