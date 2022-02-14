
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int event_irq; int regs; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct iio_dummy_state* FUNC_3 (struct iio_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,int *,int *,int ,char*,struct iio_dev*) ;

int FUNC_5(struct iio_dev *VAR_3)
{
 struct iio_dummy_state *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;


 VAR_4->event_irq = FUNC_0();
 if (VAR_4->event_irq < 0) {
  VAR_5 = VAR_4->event_irq;
  goto error_ret;
 }
 VAR_4->regs = FUNC_1(VAR_4->event_irq);

 VAR_5 = FUNC_4(VAR_4->event_irq,
       &VAR_2,
       &VAR_1,
       VAR_0,
       "iio_simple_event",
       VAR_3);
 if (VAR_5 < 0)
  goto error_free_evgen;
 return 0;

error_free_evgen:
 FUNC_2(VAR_4->event_irq);
error_ret:
 return VAR_5;
}
