
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int label; struct device_node* of_node; } ;
struct of_mm_gpio_chip {int regs; struct gpio_chip gc; int (* save_regs ) (struct of_mm_gpio_chip*) ;} ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_chip*,void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,struct device_node*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (char*,struct device_node*,int) ;
 int FUNC_6 (struct of_mm_gpio_chip*) ;

int FUNC_7(struct device_node *VAR_2,
       struct of_mm_gpio_chip *VAR_3,
       void *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct gpio_chip *VAR_6 = &VAR_3->gc;

 VAR_6->label = FUNC_2(VAR_1, "%pOF", VAR_2);
 if (!VAR_6->label)
  goto err0;

 VAR_3->regs = FUNC_4(VAR_2, 0);
 if (!VAR_3->regs)
  goto err1;

 VAR_6->base = -1;

 if (VAR_3->save_regs)
  VAR_3->save_regs(VAR_3);

 VAR_3->gc.of_node = VAR_2;

 VAR_5 = FUNC_0(VAR_6, VAR_4);
 if (VAR_5)
  goto err2;

 return 0;
err2:
 FUNC_1(VAR_3->regs);
err1:
 FUNC_3(VAR_6->label);
err0:
 FUNC_5("%pOF: GPIO chip registration failed with status %d\n", VAR_2, VAR_5);
 return VAR_5;
}
