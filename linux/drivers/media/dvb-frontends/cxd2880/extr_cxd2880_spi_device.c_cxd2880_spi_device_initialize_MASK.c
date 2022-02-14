
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int bits_per_word; int max_speed_hz; int mode; } ;
struct cxd2880_spi_device {struct spi_device* spi; } ;
typedef enum cxd2880_spi_mode { ____Placeholder_cxd2880_spi_mode } cxd2880_spi_mode ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct spi_device*) ;

int
FUNC_2(struct cxd2880_spi_device *VAR_5,
         enum cxd2880_spi_mode VAR_6,
         u32 VAR_7)
{
 int VAR_8 = 0;
 struct spi_device *VAR_9 = VAR_5->spi;

 switch (VAR_6) {
 case 131:
  VAR_9->mode = VAR_1;
  break;
 case 130:
  VAR_9->mode = VAR_2;
  break;
 case 129:
  VAR_9->mode = VAR_3;
  break;
 case 128:
  VAR_9->mode = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 VAR_9->max_speed_hz = VAR_7;
 VAR_9->bits_per_word = 8;
 VAR_8 = FUNC_1(VAR_9);
 if (VAR_8 != 0) {
  FUNC_0("spi_setup failed %d\n", VAR_8);
  return -VAR_0;
 }

 return 0;
}
