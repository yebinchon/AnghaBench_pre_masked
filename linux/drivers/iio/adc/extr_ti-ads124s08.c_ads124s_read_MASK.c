
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_transfer {int* tx_buf; int len; int cs_change; int* rx_buf; } ;
struct iio_dev {int dummy; } ;
struct ads124s_private {int* data; int spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer*) ;
 struct ads124s_private* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int ,struct spi_transfer*,int ) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2, unsigned int VAR_3)
{
 struct ads124s_private *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 u32 VAR_6;
 struct spi_transfer VAR_7[] = {
  {
   .tx_buf = &VAR_4->data[0],
   .len = 4,
   .cs_change = 1,
  }, {
   .tx_buf = &VAR_4->data[1],
   .rx_buf = &VAR_4->data[1],
   .len = 4,
  },
 };

 VAR_4->data[0] = VAR_1;
 FUNC_2(&VAR_4->data[1], VAR_0, sizeof(VAR_4->data) - 1);

 VAR_5 = FUNC_3(VAR_4->spi, VAR_7, FUNC_0(VAR_7));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_6 = VAR_4->data[2] << 16 | VAR_4->data[3] << 8 | VAR_4->data[4];

 return VAR_6;
}
