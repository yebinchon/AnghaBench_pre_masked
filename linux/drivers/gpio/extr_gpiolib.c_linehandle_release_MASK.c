
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linehandle_state {int numdescs; struct linehandle_state* label; int * descs; struct gpio_device* gdev; } ;
struct inode {int dummy; } ;
struct gpio_device {int dev; } ;
struct file {struct linehandle_state* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct linehandle_state*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct linehandle_state *VAR_2 = VAR_1->private_data;
 struct gpio_device *VAR_3 = VAR_2->gdev;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->numdescs; VAR_4++)
  FUNC_0(VAR_2->descs[VAR_4]);
 FUNC_1(VAR_2->label);
 FUNC_1(VAR_2);
 FUNC_2(&VAR_3->dev);
 return 0;
}
