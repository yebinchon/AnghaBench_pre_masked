
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct icn8318_data {int wake_gpio; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 struct icn8318_data* FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_2)
{
 struct icn8318_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_3->client->irq);
 FUNC_2(VAR_3->client, VAR_1,
      VAR_0);
 FUNC_1(VAR_3->wake_gpio, 0);
}
