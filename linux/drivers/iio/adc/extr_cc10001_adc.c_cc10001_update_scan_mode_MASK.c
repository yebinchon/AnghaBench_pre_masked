
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int scan_bytes; } ;
struct cc10001_adc_device {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cc10001_adc_device* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
        const unsigned long *VAR_3)
{
 struct cc10001_adc_device *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4->buf);
 VAR_4->buf = FUNC_2(VAR_2->scan_bytes, VAR_1);
 if (!VAR_4->buf)
  return -VAR_0;

 return 0;
}
