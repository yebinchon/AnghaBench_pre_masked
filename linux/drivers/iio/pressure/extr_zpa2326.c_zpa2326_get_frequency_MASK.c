
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zpa2326_private {TYPE_1__* frequency; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int hz; } ;


 scalar_t__ FUNC_0 (struct iio_dev const*) ;

__attribute__((used)) static int FUNC_1(const struct iio_dev *VAR_0)
{
 return ((struct zpa2326_private *)FUNC_0(VAR_0))->frequency->hz;
}
