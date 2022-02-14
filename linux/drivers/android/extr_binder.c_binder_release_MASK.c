
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct binder_proc* private_data; } ;
struct binder_proc {int * binderfs_entry; int debugfs_entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_proc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct binder_proc *VAR_3 = VAR_2->private_data;

 FUNC_2(VAR_3->debugfs_entry);

 if (VAR_3->binderfs_entry) {
  FUNC_1(VAR_3->binderfs_entry);
  VAR_3->binderfs_entry = ((void*)0);
 }

 FUNC_0(VAR_3, VAR_0);

 return 0;
}
