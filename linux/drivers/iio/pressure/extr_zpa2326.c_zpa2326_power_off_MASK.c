
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int vref; int vdd; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev const*,char*) ;

__attribute__((used)) static void FUNC_2(const struct iio_dev *VAR_0,
         const struct zpa2326_private *VAR_1)
{
 FUNC_0(VAR_1->vdd);
 FUNC_0(VAR_1->vref);

 FUNC_1(VAR_0, "powered off");
}
