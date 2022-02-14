
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userio_device {struct userio_device* serio; scalar_t__ running; } ;
struct inode {int dummy; } ;
struct file {struct userio_device* private_data; } ;


 int FUNC_0 (struct userio_device*) ;
 int FUNC_1 (struct userio_device*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct userio_device *VAR_2 = VAR_1->private_data;

 if (VAR_2->running) {




  FUNC_1(VAR_2->serio);
 } else {
  FUNC_0(VAR_2->serio);
 }

 FUNC_0(VAR_2);

 return 0;
}
