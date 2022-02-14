
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;
struct dmard10_data {int client; } ;
typedef int buf ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int *) ;
 struct dmard10_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
    struct iio_chan_spec const *VAR_6,
    int *VAR_7, int *VAR_8, long VAR_9)
{
 struct dmard10_data *VAR_10 = FUNC_1(VAR_5);
 __le16 VAR_11[4];
 int VAR_12;

 switch (VAR_9) {
 case 129:




  VAR_12 = FUNC_0(VAR_10->client,
          VAR_0,
          sizeof(VAR_11), (u8 *)VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_12 = FUNC_2(VAR_11[VAR_6->address]);
  *VAR_7 = FUNC_3(VAR_12, 12);
  return VAR_2;
 case 128:
  *VAR_7 = 0;
  *VAR_8 = VAR_4;
  return VAR_3;
 default:
  return -VAR_1;
 }
}
