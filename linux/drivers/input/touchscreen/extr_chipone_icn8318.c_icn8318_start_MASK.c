
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct icn8318_data {int wake_gpio; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct icn8318_data* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct icn8318_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->client->irq);
 FUNC_1(VAR_1->wake_gpio, 1);

 return 0;
}
