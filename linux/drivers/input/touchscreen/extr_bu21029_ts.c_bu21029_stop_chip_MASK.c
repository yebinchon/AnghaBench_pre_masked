
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct bu21029_ts_data {int vdd; int timer; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct bu21029_ts_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct bu21029_ts_data* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_0)
{
 struct bu21029_ts_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->client->irq);
 FUNC_1(&VAR_1->timer);

 FUNC_0(VAR_1);
 FUNC_4(VAR_1->vdd);
}
