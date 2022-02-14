
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int has_ibs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3)
{
 if (!VAR_2.has_ibs)
  return;
 FUNC_0(VAR_0, VAR_3);
 FUNC_1(VAR_1, VAR_3);
}
