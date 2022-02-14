
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kvm_s390_local_interrupt {int lock; } ;
struct TYPE_2__ {struct kvm_s390_local_interrupt local_int; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2,
       struct kvm_vcpu *VAR_3, u8 VAR_4)
{
 struct kvm_s390_local_interrupt *VAR_5 = &VAR_3->arch.local_int;

 int VAR_6 = -VAR_0;


 FUNC_1(&VAR_5->lock);
 if (FUNC_0(VAR_3))
  VAR_6 = VAR_1;
 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
