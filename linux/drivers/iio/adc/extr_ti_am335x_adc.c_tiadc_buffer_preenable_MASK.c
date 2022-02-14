
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiadc_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tiadc_device* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct tiadc_device*,int ) ;
 int FUNC_2 (struct tiadc_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6)
{
 struct tiadc_device *VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9, VAR_10;

 FUNC_2(VAR_7, VAR_5, (VAR_1 |
    VAR_0 |
    VAR_2));


 VAR_9 = FUNC_1(VAR_7, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
  VAR_10 = FUNC_1(VAR_7, VAR_3);

 return 0;
}
