
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userio_device {TYPE_1__* serio; int waitq; int buf_lock; int mutex; } ;
struct serio {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct userio_device* private_data; } ;
struct TYPE_2__ {struct userio_device* port_data; int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct userio_device*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 struct userio_device *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct userio_device), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_5->mutex);
 FUNC_4(&VAR_5->buf_lock);
 FUNC_0(&VAR_5->waitq);

 VAR_5->serio = FUNC_2(sizeof(struct serio), VAR_1);
 if (!VAR_5->serio) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 VAR_5->serio->write = VAR_2;
 VAR_5->serio->port_data = VAR_5;

 VAR_4->private_data = VAR_5;

 return 0;
}
