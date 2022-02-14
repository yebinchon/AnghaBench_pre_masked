
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct zpa2326_private {struct regmap* regmap; } ;
struct zpa2326_frequency {int hz; int odr; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct iio_dev const*) ;
 int FUNC_2 (struct regmap*,int ,int ) ;
 int FUNC_3 (struct iio_dev const*,char*,int ) ;
 struct zpa2326_frequency* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(const struct iio_dev *VAR_3,
      int VAR_4)
{
 struct regmap *VAR_5 = ((struct zpa2326_private *)
      FUNC_1(VAR_3))->regmap;
 const struct zpa2326_frequency *VAR_6 = FUNC_4();
 int VAR_7;


 VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_6->odr);
 if (VAR_7)
  return VAR_7;

 if (VAR_4 > 0) {

  VAR_7 = FUNC_2(VAR_5, VAR_1,
       (u8)~VAR_0);

  if (VAR_7) {
   FUNC_0(VAR_3->dev.parent,
    "failed to setup one shot mode (%d)", VAR_7);
   return VAR_7;
  }
 }

 FUNC_3(VAR_3, "one shot mode setup @%dHz", VAR_6->hz);

 return 0;
}
