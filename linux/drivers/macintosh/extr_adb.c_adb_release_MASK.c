
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct adbdev_state* private_data; } ;
struct adbdev_state {int lock; scalar_t__ inuse; int * completed; int n_pending; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct adbdev_state*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct adbdev_state *VAR_3 = VAR_2->private_data;
 unsigned long VAR_4;

 FUNC_2(&VAR_0);
 if (VAR_3) {
  VAR_2->private_data = ((void*)0);
  FUNC_4(&VAR_3->lock, VAR_4);
  if (FUNC_0(&VAR_3->n_pending) == 0
      && VAR_3->completed == ((void*)0)) {
   FUNC_5(&VAR_3->lock, VAR_4);
   FUNC_1(VAR_3);
  } else {
   VAR_3->inuse = 0;
   FUNC_5(&VAR_3->lock, VAR_4);
  }
 }
 FUNC_3(&VAR_0);
 return 0;
}
