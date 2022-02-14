
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {size_t scan_index; } ;
struct adis {TYPE_2__* spi; } ;
struct adis16260 {struct adis adis; } ;
struct TYPE_4__ {int max_speed_hz; } ;
struct TYPE_3__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int** VAR_5 ;
 int FUNC_0 (struct adis*,int,int) ;
 int FUNC_1 (struct adis*,int ,int) ;
 struct adis16260* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_6,
          struct iio_chan_spec const *VAR_7,
          int VAR_8,
          int VAR_9,
          long VAR_10)
{
 struct adis16260 *VAR_11 = FUNC_2(VAR_6);
 struct adis *VAR_12 = &VAR_11->adis;
 int VAR_13;
 u8 VAR_14;
 u8 VAR_15;

 switch (VAR_10) {
 case 130:
  if (VAR_8 < -2048 || VAR_8 >= 2048)
   return -VAR_4;

  VAR_14 = VAR_5[VAR_7->scan_index][0];
  return FUNC_0(VAR_12, VAR_14, VAR_8);
 case 129:
  if (VAR_8 < 0 || VAR_8 >= 4096)
   return -VAR_4;

  VAR_14 = VAR_5[VAR_7->scan_index][1];
  return FUNC_0(VAR_12, VAR_14, VAR_8);
 case 128:
  FUNC_3(&VAR_6->mlock);
  if (FUNC_5(VAR_12->spi)->driver_data)
   VAR_15 = 256 / VAR_8;
  else
   VAR_15 = 2048 / VAR_8;

  if (VAR_15 > VAR_1)
   VAR_15 = VAR_1;
  else if (VAR_15 > 0)
   VAR_15--;

  if (VAR_15 >= 0x0A)
   VAR_12->spi->max_speed_hz = VAR_3;
  else
   VAR_12->spi->max_speed_hz = VAR_2;
  VAR_13 = FUNC_1(VAR_12, VAR_0, VAR_15);

  FUNC_4(&VAR_6->mlock);
  return VAR_13;
 }
 return -VAR_4;
}
