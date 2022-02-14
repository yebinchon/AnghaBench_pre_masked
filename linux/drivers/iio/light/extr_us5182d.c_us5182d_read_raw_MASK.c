
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us5182d_data {int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct us5182d_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct us5182d_data*,struct iio_chan_spec const*) ;
 int* VAR_5 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7, int *VAR_8,
       int *VAR_9, long VAR_10)
{
 struct us5182d_data *VAR_11 = FUNC_1(VAR_6);
 int VAR_12;

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_2(VAR_11, VAR_7);
  if (VAR_12 < 0)
   return VAR_12;
  *VAR_8 = VAR_12;
  return VAR_1;
 case 128:
  VAR_12 = FUNC_0(VAR_11->client, VAR_4);
  if (VAR_12 < 0)
   return VAR_12;
  *VAR_8 = 0;
  *VAR_9 = VAR_5[VAR_12 & VAR_3];
  return VAR_2;
 default:
  return -VAR_0;
 }
}
