
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {int supplies; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct tsl2772_chip* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_1(VAR_0);
 struct tsl2772_chip *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_4(VAR_1);
 FUNC_3(FUNC_0(VAR_2->supplies), VAR_2->supplies);

 return VAR_3;
}
