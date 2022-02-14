
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int delay_usecs; int cs_change; int* rx_buf; } ;
struct spi_device {int dummy; } ;
struct max1118 {int data; } ;
struct iio_dev {int dummy; } ;


 struct max1118* FUNC_0 (struct iio_dev*) ;
 struct iio_dev* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*,int) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0, int VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_0);
 struct max1118 *VAR_3 = FUNC_0(VAR_2);
 struct spi_transfer VAR_4[] = {




  {
   .len = 0,
   .delay_usecs = 1,
   .cs_change = 1,
  },





  {
   .len = 0,
   .delay_usecs = 8,
  },
  {
   .rx_buf = &VAR_3->data,
   .len = 1,
  },
 };
 int VAR_5;

 if (VAR_1 == 0)
  VAR_5 = FUNC_2(VAR_0, VAR_4 + 1, 2);
 else
  VAR_5 = FUNC_2(VAR_0, VAR_4, 3);

 if (VAR_5)
  return VAR_5;

 return VAR_3->data;
}
