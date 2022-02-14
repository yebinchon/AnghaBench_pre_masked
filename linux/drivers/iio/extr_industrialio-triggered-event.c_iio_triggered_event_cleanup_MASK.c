
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int pollfunc_event; int modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct iio_dev *VAR_1)
{
 VAR_1->modes &= ~VAR_0;
 FUNC_0(VAR_1->pollfunc_event);
}
