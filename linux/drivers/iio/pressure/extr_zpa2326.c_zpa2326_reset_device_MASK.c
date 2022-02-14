
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {int regmap; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iio_dev const*,char*) ;
 int FUNC_4 (struct iio_dev const*,char*,int) ;

__attribute__((used)) static int FUNC_5(const struct iio_dev *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(((struct zpa2326_private *)
       FUNC_0(VAR_4))->regmap,
       VAR_0, VAR_1);
 if (VAR_5) {
  FUNC_4(VAR_4, "failed to reset device (%d)", VAR_5);
  return VAR_5;
 }

 FUNC_2(VAR_3, VAR_2);

 FUNC_3(VAR_4, "reset");

 return 0;
}
