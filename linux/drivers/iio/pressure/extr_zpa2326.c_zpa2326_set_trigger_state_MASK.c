
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct zpa2326_private {TYPE_2__* frequency; int regmap; scalar_t__ waken; int irq; } ;
struct TYPE_4__ {int parent; } ;
struct iio_trigger {TYPE_1__ dev; } ;
struct iio_dev {int dummy; } ;
struct TYPE_6__ {int odr; } ;
struct TYPE_5__ {int odr; int hz; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct zpa2326_private* FUNC_3 (struct iio_dev const*) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct iio_dev const*,char*,...) ;
 TYPE_3__* FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct iio_trigger *VAR_5, bool VAR_6)
{
 const struct iio_dev *VAR_7 = FUNC_0(
       VAR_5->dev.parent);
 const struct zpa2326_private *VAR_8 = FUNC_3(VAR_7);
 int VAR_9;

 if (!VAR_6) {





  unsigned int VAR_10;
  FUNC_1(VAR_8->irq);





  VAR_9 = FUNC_5(VAR_8->regmap, VAR_3,
       FUNC_7()->odr);
  if (VAR_9)
   return VAR_9;






  VAR_9 = FUNC_4(VAR_8->regmap, VAR_4, &VAR_10);
  if (VAR_9 < 0)
   return VAR_9;






  FUNC_2(VAR_8->irq);

  FUNC_6(VAR_7, "continuous mode stopped");
 } else {





  if (VAR_8->waken) {

   VAR_9 = FUNC_5(VAR_8->regmap, VAR_1,
        (u8)
        ~VAR_0);
   if (VAR_9)
    return VAR_9;
  }


  VAR_9 = FUNC_5(VAR_8->regmap, VAR_3,
       VAR_2 |
       VAR_8->frequency->odr);
  if (VAR_9)
   return VAR_9;

  FUNC_6(VAR_7, "continuous mode setup @%dHz",
       VAR_8->frequency->hz);
 }

 return 0;
}
