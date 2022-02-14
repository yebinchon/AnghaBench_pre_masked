
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int max_speed_hz; int bits_per_word; int dev; int mode; } ;
struct ms5611_state {struct spi_device* client; int read_adc_temp_and_pressure; int read_prom_word; int reset; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_0 (int *,int) ;
 struct ms5611_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (struct spi_device*,struct iio_dev*) ;
 int FUNC_5 (struct spi_device*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_5)
{
 int VAR_6;
 struct ms5611_state *VAR_7;
 struct iio_dev *VAR_8;

 VAR_8 = FUNC_0(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_8);

 VAR_5->mode = VAR_1;
 VAR_5->max_speed_hz = 20000000;
 VAR_5->bits_per_word = 8;
 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_1(VAR_8);
 VAR_7->reset = VAR_4;
 VAR_7->read_prom_word = VAR_3;
 VAR_7->read_adc_temp_and_pressure = VAR_2;
 VAR_7->client = VAR_5;

 return FUNC_2(VAR_8, &VAR_5->dev, FUNC_3(VAR_5)->name,
       FUNC_3(VAR_5)->driver_data);
}
