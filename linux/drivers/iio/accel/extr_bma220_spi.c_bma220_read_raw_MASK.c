
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct bma220_data {int spi_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int** VAR_6 ;
 struct bma220_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_7,
      struct iio_chan_spec const *VAR_8,
      int *VAR_9, int *VAR_10, long VAR_11)
{
 int VAR_12;
 u8 VAR_13;
 struct bma220_data *VAR_14 = FUNC_1(VAR_7);

 switch (VAR_11) {
 case 129:
  VAR_12 = FUNC_0(VAR_14->spi_device, VAR_8->address);
  if (VAR_12 < 0)
   return -VAR_3;
  *VAR_9 = FUNC_2(VAR_12 >> VAR_0, 5);
  return VAR_4;
 case 128:
  VAR_12 = FUNC_0(VAR_14->spi_device, VAR_2);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_13 = VAR_12 & VAR_1;
  *VAR_9 = VAR_6[VAR_13][0];
  *VAR_10 = VAR_6[VAR_13][1];
  return VAR_5;
 }

 return -VAR_3;
}
