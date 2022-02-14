
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpa2326_private {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;
 int FUNC_2 (struct iio_dev const*,char*) ;
 int FUNC_3 (struct iio_dev const*,char*,int) ;

__attribute__((used)) static int FUNC_4(const struct iio_dev *VAR_3,
         unsigned int VAR_4)
{
 struct regmap *VAR_5 = ((struct zpa2326_private *)
          FUNC_0(VAR_3))->regmap;
 int VAR_6;
 unsigned int VAR_7;

 if (!VAR_4) {




  VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_7);

  if (VAR_6 < 0)
   goto err;

  if (VAR_7 & VAR_1)

   return 0;
 }


 do {




  VAR_6 = FUNC_1(VAR_5, VAR_0, &VAR_7);
  if (VAR_6 < 0)
   goto err;

  if (VAR_4) {




   VAR_4--;
   continue;
  }

  VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_7);
  if (VAR_6 < 0)
   goto err;

 } while (!(VAR_7 & VAR_1));

 FUNC_2(VAR_3, "FIFO cleared");

 return 0;

err:
 FUNC_3(VAR_3, "failed to clear FIFO (%d)", VAR_6);

 return VAR_6;
}
