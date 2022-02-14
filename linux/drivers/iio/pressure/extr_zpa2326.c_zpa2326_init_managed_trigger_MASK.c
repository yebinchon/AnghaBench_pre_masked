
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpa2326_private {struct iio_trigger* trigger; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct iio_dev {int id; int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct iio_trigger* FUNC_1 (struct device*,char*,int ,int ) ;
 int FUNC_2 (struct device*,struct iio_trigger*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
     struct iio_dev *VAR_3,
     struct zpa2326_private *VAR_4,
     int VAR_5)
{
 struct iio_trigger *VAR_6;
 int VAR_7;

 if (VAR_5 <= 0)
  return 0;

 VAR_6 = FUNC_1(VAR_2, "%s-dev%d",
      VAR_3->name, VAR_3->id);
 if (!VAR_6)
  return -VAR_0;


 VAR_6->dev.parent = VAR_2;
 VAR_6->ops = &VAR_1;

 VAR_4->trigger = VAR_6;


 VAR_7 = FUNC_2(VAR_2, VAR_6);
 if (VAR_7)
  FUNC_0(VAR_2, "failed to register hardware trigger (%d)",
   VAR_7);

 return VAR_7;
}
