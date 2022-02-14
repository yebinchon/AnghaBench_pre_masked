
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {int tsl2772_chip_status; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct tsl2772_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1)
{
 struct tsl2772_chip *VAR_2 = FUNC_0(VAR_1);


 VAR_2->tsl2772_chip_status = VAR_0;
 return FUNC_1(VAR_2, 0x00);
}
