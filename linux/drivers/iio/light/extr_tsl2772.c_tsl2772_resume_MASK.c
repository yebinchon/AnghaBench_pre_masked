
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {int supplies; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct tsl2772_chip* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_1(VAR_2);
 struct tsl2772_chip *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_3(FUNC_0(VAR_4->supplies), VAR_4->supplies);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_5(VAR_1, VAR_0);

 return FUNC_4(VAR_3);
}
