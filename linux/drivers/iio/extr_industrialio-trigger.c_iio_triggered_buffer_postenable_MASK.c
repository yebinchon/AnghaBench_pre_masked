
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int pollfunc; int trig; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct iio_dev *VAR_0)
{
 return FUNC_0(VAR_0->trig,
         VAR_0->pollfunc);
}
