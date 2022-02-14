
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adbdev_state* private_data; } ;
struct adbdev_state {int inuse; int wait_queue; int * completed; int n_pending; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 struct adbdev_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct file *VAR_6)
{
 struct adbdev_state *VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_4);
 if (FUNC_1(VAR_5) > 0 || VAR_3 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_7 = FUNC_3(sizeof(struct adbdev_state), VAR_2);
 if (VAR_7 == 0) {
  VAR_8 = -VAR_0;
  goto out;
 }
 VAR_6->private_data = VAR_7;
 FUNC_6(&VAR_7->lock);
 FUNC_0(&VAR_7->n_pending, 0);
 VAR_7->completed = ((void*)0);
 FUNC_2(&VAR_7->wait_queue);
 VAR_7->inuse = 1;

out:
 FUNC_5(&VAR_4);
 return VAR_8;
}
