
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct spi_device {int dummy; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ads7871_data {struct spi_device* spi; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct spi_device*,int ) ;
 int FUNC_1 (struct spi_device*,int ) ;
 int FUNC_2 (struct spi_device*,int ,int) ;
 struct ads7871_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_5, struct device_attribute *VAR_6,
       char *VAR_7)
{
 struct ads7871_data *VAR_8 = FUNC_3(VAR_5);
 struct spi_device *VAR_9 = VAR_8->spi;
 struct sensor_device_attribute *VAR_10 = FUNC_6(VAR_6);
 int VAR_11, VAR_12, VAR_13 = 0;
 uint8_t VAR_14, VAR_15;

 VAR_14 = VAR_10->index;






 FUNC_2(VAR_9, VAR_3,
  (VAR_0 | VAR_2 | VAR_14));

 VAR_11 = FUNC_1(VAR_9, VAR_3);
 VAR_15 = ((VAR_11 & VAR_0) >> VAR_1);




 while ((VAR_13 < 2) && VAR_15) {
  VAR_13++;
  VAR_11 = FUNC_1(VAR_9, VAR_3);
  VAR_15 = ((VAR_11 & VAR_0) >> VAR_1);
  FUNC_4(1);
 }

 if (VAR_15 == 0) {
  VAR_12 = FUNC_0(VAR_9, VAR_4);

  VAR_12 = ((VAR_12 >> 2) * 25000) / 8192;
  return FUNC_5(VAR_7, "%d\n", VAR_12);
 } else {
  return -1;
 }
}
