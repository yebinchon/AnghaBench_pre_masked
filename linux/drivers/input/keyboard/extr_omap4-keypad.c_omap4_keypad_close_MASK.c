
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap4_keypad {int irq; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct omap4_keypad* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct omap4_keypad*,int ) ;
 int FUNC_4 (struct omap4_keypad*,int ,int ) ;
 int FUNC_5 (struct omap4_keypad*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_4)
{
 struct omap4_keypad *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_5->irq);


 FUNC_4(VAR_5, VAR_0,
    VAR_3);
 FUNC_5(VAR_5, VAR_2, 0);


 FUNC_4(VAR_5, VAR_1,
    FUNC_3(VAR_5, VAR_1));

 FUNC_1(VAR_5->irq);

 FUNC_6(VAR_4->dev.parent);
}
