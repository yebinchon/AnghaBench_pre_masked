
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max11100_state {int* buffer; int spi; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct max11100_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1, int *VAR_2)
{
 int VAR_3;
 struct max11100_state *VAR_4 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_4->spi, VAR_4->buffer, sizeof(VAR_4->buffer));
 if (VAR_3) {
  FUNC_0(&VAR_1->dev, "SPI transfer failed\n");
  return VAR_3;
 }


 if (VAR_4->buffer[0]) {
  FUNC_0(&VAR_1->dev, "Invalid value: buffer[0] != 0\n");
  return -VAR_0;
 }

 *VAR_2 = (VAR_4->buffer[1] << 8) | VAR_4->buffer[2];

 return 0;
}
