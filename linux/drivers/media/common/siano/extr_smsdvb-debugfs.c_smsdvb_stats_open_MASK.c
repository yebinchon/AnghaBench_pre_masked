
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsdvb_debugfs {int stats_was_read; int lock; scalar_t__ stats_count; int refcount; } ;
struct smsdvb_client_t {struct smsdvb_debugfs* debug_data; } ;
struct inode {struct smsdvb_client_t* i_private; } ;
struct file {struct smsdvb_debugfs* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct smsdvb_client_t *VAR_2 = VAR_0->i_private;
 struct smsdvb_debugfs *VAR_3 = VAR_2->debug_data;

 FUNC_0(&VAR_3->refcount);

 FUNC_1(&VAR_3->lock);
 VAR_3->stats_count = 0;
 VAR_3->stats_was_read = 0;
 FUNC_2(&VAR_3->lock);

 VAR_1->private_data = VAR_3;

 return 0;
}
