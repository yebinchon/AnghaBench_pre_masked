
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int stats_was_read; int refcount; int stats_queue; int lock; } ;
struct inode {int dummy; } ;
struct file {struct smsdvb_debugfs* private_data; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct smsdvb_debugfs *VAR_3 = VAR_2->private_data;

 FUNC_1(&VAR_3->lock);
 VAR_3->stats_was_read = 1;
 FUNC_2(&VAR_3->lock);
 FUNC_3(&VAR_3->stats_queue);

 FUNC_0(&VAR_3->refcount, VAR_0);
 VAR_2->private_data = ((void*)0);

 return 0;
}
