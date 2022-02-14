
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiadc_device {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct tiadc_device* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (struct tiadc_device*,int ) ;
 int FUNC_2 (struct tiadc_device*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_11, void *VAR_12)
{
 struct iio_dev *VAR_13 = VAR_12;
 struct tiadc_device *VAR_14 = FUNC_0(VAR_13);
 unsigned int VAR_15, VAR_16, VAR_17;
 unsigned short VAR_18 = 0;

 VAR_15 = FUNC_1(VAR_14, VAR_10);





 if (VAR_15 & VAR_1) {

  VAR_16 = FUNC_1(VAR_14, VAR_8);
  VAR_16 &= ~(VAR_0);
  FUNC_2(VAR_14, VAR_8, VAR_16);
  FUNC_2(VAR_14, VAR_10, VAR_1
    | VAR_3 | VAR_2);





  do {
   VAR_17 = FUNC_1(VAR_14, VAR_7);
  } while (VAR_17 != 0x10 && VAR_18++ < 100);

  FUNC_2(VAR_14, VAR_8, (VAR_16 | VAR_0));
  return VAR_4;
 } else if (VAR_15 & VAR_2) {

  FUNC_2(VAR_14, VAR_9, VAR_2);
  return VAR_6;
 }

 return VAR_5;
}
