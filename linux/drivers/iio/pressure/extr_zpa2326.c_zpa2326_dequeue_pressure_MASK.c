
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct zpa2326_private {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 int FUNC_1 (struct regmap*,int ,scalar_t__*,int) ;
 int FUNC_2 (struct regmap*,int ,unsigned int*) ;
 int FUNC_3 (struct iio_dev const*,scalar_t__) ;
 int FUNC_4 (struct iio_dev const*,char*,int) ;
 int FUNC_5 (struct iio_dev const*,char*) ;

__attribute__((used)) static int FUNC_6(const struct iio_dev *VAR_5,
        u32 *VAR_6)
{
 struct regmap *VAR_7 = ((struct zpa2326_private *)
          FUNC_0(VAR_5))->regmap;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10 = -1;

 VAR_9 = FUNC_2(VAR_7, VAR_4, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 *VAR_6 = 0;

 if (VAR_8 & VAR_3) {




  FUNC_5(VAR_5, "FIFO overflow");

  VAR_9 = FUNC_1(VAR_7, VAR_1, VAR_6,
           3);
  if (VAR_9)
   return VAR_9;



  return FUNC_3(VAR_5, (16U) - 1);
 }






 do {
  VAR_9 = FUNC_1(VAR_7, VAR_1, VAR_6,
           3);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_2(VAR_7, VAR_4, &VAR_8);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_10++;
 } while (!(VAR_8 & VAR_2));

 if (VAR_10)




  FUNC_4(VAR_5, "cleared %d FIFO entries", VAR_10);

 return 0;
}
