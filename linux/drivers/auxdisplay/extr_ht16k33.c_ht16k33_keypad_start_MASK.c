
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int dummy; } ;
struct ht16k33_keypad {int stopped; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 struct ht16k33_keypad* FUNC_1 (struct input_dev*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 struct ht16k33_keypad *VAR_1 = FUNC_1(VAR_0);

 VAR_1->stopped = 0;
 FUNC_2();
 FUNC_0(VAR_1->client->irq);

 return 0;
}
