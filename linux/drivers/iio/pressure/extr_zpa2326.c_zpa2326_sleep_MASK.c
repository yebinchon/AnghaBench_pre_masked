
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct iio_dev const*,char*) ;
 int FUNC_3 (struct iio_dev const*,char*,int) ;

__attribute__((used)) static int FUNC_4(const struct iio_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(((struct zpa2326_private *)
       FUNC_0(VAR_1))->regmap,
       VAR_0, 0);
 if (VAR_2) {
  FUNC_3(VAR_1, "failed to sleep (%d)", VAR_2);
  return VAR_2;
 }

 FUNC_2(VAR_1, "sleeping");

 return 0;
}
