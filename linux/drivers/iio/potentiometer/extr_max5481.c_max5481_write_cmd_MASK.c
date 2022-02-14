
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_device {int dummy; } ;
struct max5481_data {int* msg; struct spi_device* spi; } ;


 int VAR_0 ;



 int FUNC_0 (struct spi_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct max5481_data *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct spi_device *VAR_4 = VAR_1->spi;

 VAR_1->msg[0] = VAR_2;

 switch (VAR_2) {
 case 128:
  VAR_1->msg[1] = VAR_3 >> 2;
  VAR_1->msg[2] = (VAR_3 & 0x3) << 6;
  return FUNC_0(VAR_4, VAR_1->msg, 3);

 case 130:
 case 129:
  return FUNC_0(VAR_4, VAR_1->msg, 1);

 default:
  return -VAR_0;
 }
}
