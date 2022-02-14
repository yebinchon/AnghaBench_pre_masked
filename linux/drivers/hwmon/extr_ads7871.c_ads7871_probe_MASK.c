
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device {int dummy; } ;
struct spi_device {int bits_per_word; int modalias; int mode; struct device dev; } ;
struct ads7871_data {struct spi_device* spi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int) ;
 int FUNC_3 (struct device*,char*,int,int) ;
 struct device* FUNC_4 (struct device*,int ,struct ads7871_data*,int ) ;
 struct ads7871_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 int VAR_14;
 uint8_t VAR_15;
 struct ads7871_data *VAR_16;
 struct device *VAR_17;


 VAR_12->mode = (VAR_10);
 VAR_12->bits_per_word = 8;
 FUNC_6(VAR_12);

 FUNC_2(VAR_12, VAR_9, 0);
 FUNC_2(VAR_12, VAR_7, 0);

 VAR_15 = (VAR_5 | VAR_4 | VAR_6 | VAR_3);
 FUNC_2(VAR_12, VAR_8, VAR_15);
 VAR_14 = FUNC_1(VAR_12, VAR_8);

 FUNC_3(VAR_13, "REG_OSC_CONTROL write:%x, read:%x\n", VAR_15, VAR_14);




 if (VAR_15 != VAR_14)
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_13, sizeof(struct ads7871_data), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->spi = VAR_12;

 VAR_17 = FUNC_4(VAR_13, VAR_12->modalias,
          VAR_16,
          VAR_11);
 return FUNC_0(VAR_17);
}
