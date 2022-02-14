
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct omap4_keypad {struct omap4_keypad* keymap; int base; int input; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct omap4_keypad*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap4_keypad*) ;
 struct omap4_keypad* FUNC_4 (struct platform_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct omap4_keypad *VAR_2 = FUNC_4(VAR_1);
 struct resource *VAR_3;

 FUNC_0(VAR_2->irq, VAR_2);

 FUNC_6(&VAR_1->dev);

 FUNC_1(VAR_2->input);

 FUNC_2(VAR_2->base);

 VAR_3 = FUNC_5(VAR_1, VAR_0, 0);
 FUNC_7(VAR_3->start, FUNC_8(VAR_3));

 FUNC_3(VAR_2->keymap);
 FUNC_3(VAR_2);

 return 0;
}
