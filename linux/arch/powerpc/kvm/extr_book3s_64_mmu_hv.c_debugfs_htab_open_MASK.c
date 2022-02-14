
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
struct inode {struct kvm* i_private; } ;
struct file {struct debugfs_htab_state* private_data; } ;
struct debugfs_htab_state {int mutex; struct kvm* kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*) ;
 struct debugfs_htab_state* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct kvm *VAR_4 = VAR_2->i_private;
 struct debugfs_htab_state *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_4);
 VAR_5->kvm = VAR_4;
 FUNC_2(&VAR_5->mutex);
 VAR_3->private_data = VAR_5;

 return FUNC_3(VAR_2, VAR_3);
}
