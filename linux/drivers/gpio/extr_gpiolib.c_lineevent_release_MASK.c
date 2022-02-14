
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lineevent_state {struct lineevent_state* label; int desc; int irq; struct gpio_device* gdev; } ;
struct inode {int dummy; } ;
struct gpio_device {int dev; } ;
struct file {struct lineevent_state* private_data; } ;


 int FUNC_0 (int ,struct lineevent_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lineevent_state*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct lineevent_state *VAR_2 = VAR_1->private_data;
 struct gpio_device *VAR_3 = VAR_2->gdev;

 FUNC_0(VAR_2->irq, VAR_2);
 FUNC_1(VAR_2->desc);
 FUNC_2(VAR_2->label);
 FUNC_2(VAR_2);
 FUNC_3(&VAR_3->dev);
 return 0;
}
