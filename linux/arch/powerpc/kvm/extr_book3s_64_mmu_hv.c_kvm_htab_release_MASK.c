
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_htab_ctx {int flags; TYPE_2__* kvm; } ;
struct inode {int dummy; } ;
struct file {struct kvm_htab_ctx* private_data; } ;
struct TYPE_3__ {int hpte_mod_interest; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_htab_ctx*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct kvm_htab_ctx *VAR_3 = VAR_2->private_data;

 VAR_2->private_data = ((void*)0);
 if (!(VAR_3->flags & VAR_0))
  FUNC_0(&VAR_3->kvm->arch.hpte_mod_interest);
 FUNC_2(VAR_3->kvm);
 FUNC_1(VAR_3);
 return 0;
}
