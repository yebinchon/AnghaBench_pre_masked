
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct iio_dev const*,char*) ;
 int FUNC_6 (struct iio_dev const*,char*,int) ;

__attribute__((used)) static int FUNC_7(const struct iio_dev *VAR_9)
{
 unsigned long VAR_10 = VAR_8 + VAR_3;
 struct regmap *VAR_11 = ((struct zpa2326_private *)
          FUNC_0(VAR_9))->regmap;
 unsigned int VAR_12;
 int VAR_13;

 FUNC_5(VAR_9, "polling for one shot completion");





 if (FUNC_1(100))
  return -VAR_1;


 while (1) {
  VAR_13 = FUNC_2(VAR_11, VAR_5, &VAR_12);
  if (VAR_13 < 0)
   goto err;

  if (!(VAR_12 & VAR_4))

   break;

  if (FUNC_3(VAR_8, VAR_10)) {

   VAR_13 = -VAR_2;
   goto err;
  }

  FUNC_4(10000, 20000);
 }






 VAR_13 = FUNC_2(VAR_11, VAR_7, &VAR_12);
 if (VAR_13 < 0)
  goto err;

 if (!(VAR_12 & VAR_6)) {

  VAR_13 = -VAR_0;
  goto err;
 }

 return 0;

err:
 FUNC_6(VAR_9, "failed to poll one shot completion (%d)", VAR_13);

 return VAR_13;
}
