
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct lm70 {int chip; int lock; struct spi_device* spi; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s16 ;


 int VAR_0 ;





 int FUNC_0 (struct device*,char*,int,int,int) ;
 struct lm70* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,int *,int ,int*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct lm70 *VAR_4 = FUNC_1(VAR_1);
 struct spi_device *VAR_5 = VAR_4->spi;
 int VAR_6, VAR_7 = 0;
 u8 VAR_8[2];
 s16 VAR_9 = 0;

 if (FUNC_3(&VAR_4->lock))
  return -VAR_0;





 VAR_6 = FUNC_5(VAR_5, ((void*)0), 0, &VAR_8[0], 2);
 if (VAR_6 < 0) {
  FUNC_2(VAR_1, "spi_write_then_read failed with status %d\n",
    VAR_6);
  goto out;
 }
 VAR_9 = (VAR_8[0] << 8) + VAR_8[1];
 FUNC_0(VAR_1, "rxbuf[0] : 0x%02x rxbuf[1] : 0x%02x raw=0x%04x\n",
  VAR_8[0], VAR_8[1], VAR_9);
 switch (VAR_4->chip) {
 case 132:
  VAR_7 = ((int)VAR_9 / 32) * 250;
  break;

 case 129:
 case 128:
 case 130:
  VAR_7 = ((int)VAR_9 / 8) * 625 / 10;
  break;

 case 131:
  VAR_7 = ((int)VAR_9 / 4) * 3125 / 100;
  break;
 }

 VAR_6 = FUNC_6(VAR_3, "%d\n", VAR_7);
out:
 FUNC_4(&VAR_4->lock);
 return VAR_6;
}
