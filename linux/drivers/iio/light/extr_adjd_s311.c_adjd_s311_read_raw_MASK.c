
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct adjd_s311_data {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct iio_dev*,int ,int*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 struct adjd_s311_data* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7, int *VAR_8, long VAR_9)
{
 struct adjd_s311_data *VAR_10 = FUNC_6(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 128:
  VAR_11 = FUNC_3(VAR_5,
   FUNC_1(VAR_6->address), VAR_7);
  if (VAR_11 < 0)
   return VAR_11;
  return VAR_3;
 case 130:
  VAR_11 = FUNC_4(VAR_10->client,
   FUNC_0(VAR_6->address));
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_7 = VAR_11 & VAR_0;
  return VAR_3;
 case 129:
  VAR_11 = FUNC_5(VAR_10->client,
   FUNC_2(VAR_6->address));
  if (VAR_11 < 0)
   return VAR_11;
  *VAR_7 = 0;




  *VAR_8 = VAR_11 & VAR_1;
  return VAR_4;
 }
 return -VAR_2;
}
