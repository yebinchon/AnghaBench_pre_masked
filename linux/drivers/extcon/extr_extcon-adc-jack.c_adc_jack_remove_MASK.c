
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct adc_jack_data {int chan; TYPE_1__ handler; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct adc_jack_data*) ;
 int FUNC_2 (int ) ;
 struct adc_jack_data* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct adc_jack_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(&VAR_1->handler.work);
 FUNC_2(VAR_1->chan);

 return 0;
}
