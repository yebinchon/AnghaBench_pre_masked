
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int tx_buf ;
struct spi_device {int dummy; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adcxx {int channels; int reference; int lock; } ;
typedef int ssize_t ;
typedef int rx_buf ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct adcxx* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct spi_device*,int*,int) ;
 int FUNC_6 (struct spi_device*,int*,int,int*,int) ;
 int FUNC_7 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;
 struct spi_device* FUNC_9 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_9(VAR_1);
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct adcxx *VAR_6 = FUNC_4(VAR_4);
 u8 VAR_7[2];
 u8 VAR_8[2];
 int VAR_9;
 u32 VAR_10;

 if (FUNC_2(&VAR_6->lock))
  return -VAR_0;

 if (VAR_6->channels == 1) {
  VAR_9 = FUNC_5(VAR_4, VAR_8, sizeof(VAR_8));
 } else {
  VAR_7[0] = VAR_5->index << 3;
  VAR_9 = FUNC_6(VAR_4, VAR_7, sizeof(VAR_7),
      VAR_8, sizeof(VAR_8));
 }
 if (VAR_9 < 0) {
  FUNC_1(VAR_1, "SPI synch. transfer failed with status %d\n",
    VAR_9);
  goto out;
 }

 VAR_10 = (VAR_8[0] << 8) + VAR_8[1];
 FUNC_0(VAR_1, "raw value = 0x%x\n", VAR_10);

 VAR_10 = VAR_10 * VAR_6->reference >> 12;
 VAR_9 = FUNC_7(VAR_3, "%d\n", VAR_10);
out:
 FUNC_3(&VAR_6->lock);
 return VAR_9;
}
