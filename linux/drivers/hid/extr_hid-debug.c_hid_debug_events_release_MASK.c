
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct hid_debug_list {int hid_debug_fifo; TYPE_1__* hdev; int node; } ;
struct file {struct hid_debug_list* private_data; } ;
struct TYPE_2__ {int debug_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hid_debug_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct hid_debug_list *VAR_2 = VAR_1->private_data;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->hdev->debug_list_lock, VAR_3);
 FUNC_2(&VAR_2->node);
 FUNC_4(&VAR_2->hdev->debug_list_lock, VAR_3);
 FUNC_0(&VAR_2->hid_debug_fifo);
 FUNC_1(VAR_2);

 return 0;
}
