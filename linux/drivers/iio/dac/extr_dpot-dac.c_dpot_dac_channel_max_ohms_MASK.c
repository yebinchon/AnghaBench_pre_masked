
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct iio_dev {struct device dev; } ;
struct dpot_dac {int dpot; } ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (unsigned long long,long long) ;
 struct dpot_dac* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (int ,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct dpot_dac *VAR_3 = FUNC_2(VAR_1);
 unsigned long long VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_3->dpot, &VAR_8);
 if (VAR_5 < 0) {
  FUNC_0(VAR_2, "dpot does not indicate its raw maximum value\n");
  return VAR_5;
 }

 switch (FUNC_3(VAR_3->dpot, &VAR_6, &VAR_7)) {
 case 128:
  return VAR_8 * VAR_6;
 case 130:
  VAR_4 = (unsigned long long)VAR_8 * VAR_6;
  FUNC_1(VAR_4, VAR_7);
  return VAR_4;
 case 129:
  VAR_4 = VAR_6 * 1000000000LL * VAR_8 >> VAR_7;
  FUNC_1(VAR_4, 1000000000LL);
  return VAR_4;
 default:
  FUNC_0(VAR_2, "dpot has a scale that is too weird\n");
 }

 return -VAR_0;
}
