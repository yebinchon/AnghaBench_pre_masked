
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parent; } ;
struct iio_trigger {TYPE_2__ dev; } ;
struct TYPE_3__ {scalar_t__ parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 int VAR_0 ;

int FUNC_0(struct iio_trigger *VAR_1,
 struct iio_dev *VAR_2)
{
 if (VAR_2->dev.parent != VAR_1->dev.parent)
  return -VAR_0;
 return 0;
}
