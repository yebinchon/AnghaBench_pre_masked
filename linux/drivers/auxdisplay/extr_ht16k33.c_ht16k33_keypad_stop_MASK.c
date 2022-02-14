
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct ht16k33_keypad {int stopped; TYPE_1__* client; int wait; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 struct ht16k33_keypad* FUNC_1 (struct input_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct input_dev *VAR_0)
{
 struct ht16k33_keypad *VAR_1 = FUNC_1(VAR_0);

 VAR_1->stopped = 1;
 FUNC_2();
 FUNC_3(&VAR_1->wait);
 FUNC_0(VAR_1->client->irq);
}
