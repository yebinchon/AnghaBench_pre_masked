
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int vref; int vdd; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev const*,char*) ;
 int FUNC_3 (struct iio_dev const*) ;
 int FUNC_4 (struct iio_dev const*) ;
 int FUNC_5 (struct iio_dev const*) ;

__attribute__((used)) static int FUNC_6(const struct iio_dev *VAR_0,
       const struct zpa2326_private *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->vref);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->vdd);
 if (VAR_2)
  goto vref;

 FUNC_2(VAR_0, "powered on");

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2)
  goto vdd;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto sleep;

 return 0;

sleep:
 FUNC_5(VAR_0);
vdd:
 FUNC_0(VAR_1->vdd);
vref:
 FUNC_0(VAR_1->vref);

 FUNC_2(VAR_0, "powered off");

 return VAR_2;
}
