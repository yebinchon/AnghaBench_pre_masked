
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ,struct list_head*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1,
     struct list_head *VAR_2,
     bool VAR_3, bool VAR_4)
{
 if (FUNC_1(VAR_1->kvm, VAR_2, VAR_3))
  return;

 if (VAR_4)
  FUNC_0(VAR_0, VAR_1);
}
