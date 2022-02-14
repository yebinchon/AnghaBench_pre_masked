
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zpa2326_private {struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dummy; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
typedef int __le16 ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iio_dev const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct regmap*,int ,int*,int) ;
 int FUNC_3 (struct iio_dev const*,char*) ;
 int FUNC_4 (struct iio_dev const*,char*,int) ;

__attribute__((used)) static int FUNC_5(const struct iio_dev *VAR_4,
        enum iio_chan_type VAR_5,
        int *VAR_6)
{
 struct regmap *VAR_7 = ((struct zpa2326_private *)
          FUNC_0(VAR_4))->regmap;
 int VAR_8;

 switch (VAR_5) {
 case 129:
  FUNC_3(VAR_4, "fetching raw pressure sample");

  VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_6,
           3);
  if (VAR_8) {
   FUNC_4(VAR_4, "failed to fetch pressure (%d)",
         VAR_8);
   return VAR_8;
  }


  *VAR_6 = (((u8 *)VAR_6)[2] << 16) | (((u8 *)VAR_6)[1] << 8) |
    ((u8 *)VAR_6)[0];

  return VAR_1;

 case 128:
  FUNC_3(VAR_4, "fetching raw temperature sample");

  VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_6, 2);
  if (VAR_8) {
   FUNC_4(VAR_4,
         "failed to fetch temperature (%d)", VAR_8);
   return VAR_8;
  }


  *VAR_6 = (int)FUNC_1((__le16 *)VAR_6);

  return VAR_1;

 default:
  return -VAR_0;
 }
}
