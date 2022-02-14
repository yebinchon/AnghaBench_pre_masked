
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int event_irq; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ,struct iio_dev*) ;
 int FUNC_1 (int ) ;
 struct iio_dummy_state* FUNC_2 (struct iio_dev*) ;

void FUNC_3(struct iio_dev *VAR_0)
{
 struct iio_dummy_state *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->event_irq, VAR_0);

 FUNC_1(VAR_1->event_irq);
}
