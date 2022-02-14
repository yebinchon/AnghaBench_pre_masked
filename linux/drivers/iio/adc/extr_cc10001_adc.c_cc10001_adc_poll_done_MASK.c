
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct iio_dev {int dummy; } ;
struct cc10001_adc_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct cc10001_adc_device*,int ) ;
 struct cc10001_adc_device* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static u16 FUNC_3(struct iio_dev *VAR_8,
     unsigned int VAR_9,
     unsigned int VAR_10)
{
 struct cc10001_adc_device *VAR_11 = FUNC_1(VAR_8);
 unsigned int VAR_12 = 0;

 while (!(FUNC_0(VAR_11, VAR_4) &
   VAR_5)) {

  FUNC_2(VAR_10);
  if (VAR_12++ == VAR_7)
   return VAR_6;
 }

 VAR_12 = 0;
 while ((FUNC_0(VAR_11, VAR_0) &
   VAR_1) != VAR_9) {

  FUNC_2(VAR_10);
  if (VAR_12++ == VAR_7)
   return VAR_6;
 }


 return FUNC_0(VAR_11, VAR_3) &
          VAR_2;
}
