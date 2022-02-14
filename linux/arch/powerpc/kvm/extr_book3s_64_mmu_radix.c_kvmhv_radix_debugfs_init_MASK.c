
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int debugfs_dir; int radix_dentry; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (char*,int,int ,struct kvm*,int *) ;
 int VAR_0 ;

void FUNC_1(struct kvm *VAR_1)
{
 VAR_1->arch.radix_dentry = FUNC_0("radix", 0400,
           VAR_1->arch.debugfs_dir, VAR_1,
           &VAR_0);
}
