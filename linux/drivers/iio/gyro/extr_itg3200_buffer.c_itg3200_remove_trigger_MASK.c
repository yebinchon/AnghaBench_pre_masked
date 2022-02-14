
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct itg3200 {int trig; TYPE_1__* i2c; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,int ) ;
 struct itg3200* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct iio_dev *VAR_0)
{
 struct itg3200 *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->trig);
 FUNC_0(VAR_1->i2c->irq, VAR_1->trig);
 FUNC_2(VAR_1->trig);
}
