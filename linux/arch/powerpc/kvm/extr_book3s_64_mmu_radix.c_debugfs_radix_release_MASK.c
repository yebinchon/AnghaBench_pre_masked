
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct debugfs_radix_state* private_data; } ;
struct debugfs_radix_state {int kvm; } ;


 int FUNC_0 (struct debugfs_radix_state*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct debugfs_radix_state *VAR_2 = VAR_1->private_data;

 FUNC_1(VAR_2->kvm);
 FUNC_0(VAR_2);
 return 0;
}
