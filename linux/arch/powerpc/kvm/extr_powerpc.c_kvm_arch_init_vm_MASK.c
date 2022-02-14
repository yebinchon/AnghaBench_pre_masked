
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_ops {scalar_t__ owner; } ;
struct TYPE_2__ {struct kvmppc_ops* kvm_ops; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct kvm*) ;
 struct kvmppc_ops* VAR_4 ;
 struct kvmppc_ops* VAR_5 ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct kvm *VAR_6, unsigned long VAR_7)
{
 struct kvmppc_ops *VAR_8 = ((void*)0);



 if (VAR_7 == 0) {
  if (VAR_4)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_5;
  if (!VAR_8)
   goto err_out;
 } else if (VAR_7 == VAR_2) {
  if (!VAR_4)
   goto err_out;
  VAR_8 = VAR_4;
 } else if (VAR_7 == VAR_3) {
  if (!VAR_5)
   goto err_out;
  VAR_8 = VAR_5;
 } else
  goto err_out;

 if (VAR_8->owner && !FUNC_1(VAR_8->owner))
  return -VAR_1;

 VAR_6->arch.kvm_ops = VAR_8;
 return FUNC_0(VAR_6);
err_out:
 return -VAR_0;
}
