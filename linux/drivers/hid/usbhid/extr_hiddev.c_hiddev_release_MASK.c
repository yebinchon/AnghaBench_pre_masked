
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hiddev_list {TYPE_1__* hiddev; int node; } ;
struct file {struct hiddev_list* private_data; } ;
struct TYPE_2__ {int existancelock; int hid; scalar_t__ exist; int open; int list_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct hiddev_list*) ;

__attribute__((used)) static int FUNC_9(struct inode * VAR_1, struct file * VAR_2)
{
 struct hiddev_list *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 FUNC_6(&VAR_3->hiddev->list_lock, VAR_4);
 FUNC_3(&VAR_3->node);
 FUNC_7(&VAR_3->hiddev->list_lock, VAR_4);

 FUNC_4(&VAR_3->hiddev->existancelock);
 if (!--VAR_3->hiddev->open) {
  if (VAR_3->hiddev->exist) {
   FUNC_0(VAR_3->hiddev->hid);
   FUNC_1(VAR_3->hiddev->hid, VAR_0);
  } else {
   FUNC_5(&VAR_3->hiddev->existancelock);
   FUNC_2(VAR_3->hiddev);
   FUNC_8(VAR_3);
   return 0;
  }
 }

 FUNC_5(&VAR_3->hiddev->existancelock);
 FUNC_8(VAR_3);

 return 0;
}
