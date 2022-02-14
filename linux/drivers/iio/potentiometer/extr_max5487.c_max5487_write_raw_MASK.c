
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max5487_data {int spi; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 struct max5487_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct max5487_data *VAR_8 = FUNC_0(VAR_3);

 if (VAR_7 != VAR_1)
  return -VAR_0;

 if (VAR_5 < 0 || VAR_5 > VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_8->spi, VAR_4->address | VAR_5);
}
