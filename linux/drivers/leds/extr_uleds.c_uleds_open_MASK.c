
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int brightness_set; int name; } ;
struct TYPE_3__ {int name; } ;
struct uleds_device {int state; int waitq; int mutex; TYPE_2__ led_cdev; TYPE_1__ user_dev; } ;
struct inode {int dummy; } ;
struct file {struct uleds_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct uleds_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 struct uleds_device *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->led_cdev.name = VAR_6->user_dev.name;
 VAR_6->led_cdev.brightness_set = VAR_3;

 FUNC_2(&VAR_6->mutex);
 FUNC_0(&VAR_6->waitq);
 VAR_6->state = VAR_2;

 VAR_5->private_data = VAR_6;
 FUNC_3(VAR_4, VAR_5);

 return 0;
}
