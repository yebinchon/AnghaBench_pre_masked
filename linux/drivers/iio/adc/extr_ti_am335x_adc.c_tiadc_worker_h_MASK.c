
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tiadc_device {int* data; } ;
struct iio_dev {int scan_bytes; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tiadc_device* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int *) ;
 int FUNC_2 (struct tiadc_device*,int ) ;
 int FUNC_3 (struct tiadc_device*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct iio_dev *VAR_9 = VAR_8;
 struct tiadc_device *VAR_10 = FUNC_0(VAR_9);
 int VAR_11, VAR_12, VAR_13, VAR_14;
 u16 *VAR_15 = VAR_10->data;

 VAR_13 = FUNC_2(VAR_10, VAR_4);
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12 = VAR_12 + VAR_11) {
  for (VAR_11 = 0; VAR_11 < (VAR_9->scan_bytes)/2; VAR_11++) {
   VAR_14 = FUNC_2(VAR_10, VAR_3);
   VAR_15[VAR_11] = VAR_14 & VAR_0;
  }
  FUNC_1(VAR_9, (u8 *) VAR_15);
 }

 FUNC_3(VAR_10, VAR_6, VAR_1);
 FUNC_3(VAR_10, VAR_5, VAR_1);

 return VAR_2;
}
