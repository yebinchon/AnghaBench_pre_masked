
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct omap4_keypad* FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct omap4_keypad*,int ) ;
 int FUNC_4 (struct omap4_keypad*,int ,int) ;
 int FUNC_5 (struct omap4_keypad*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_13)
{
 struct omap4_keypad *VAR_14 = FUNC_2(VAR_13);

 FUNC_6(VAR_13->dev.parent);

 FUNC_0(VAR_14->irq);

 FUNC_5(VAR_14, VAR_6,
   VAR_0 |
   (VAR_11 << VAR_1));
 FUNC_5(VAR_14, VAR_7,
   VAR_12);

 FUNC_4(VAR_14, VAR_9,
    FUNC_3(VAR_14, VAR_9));
 FUNC_4(VAR_14, VAR_8,
   VAR_2 |
    VAR_3);
 FUNC_5(VAR_14, VAR_10,
   VAR_4 | VAR_5);

 FUNC_1(VAR_14->irq);

 return 0;
}
