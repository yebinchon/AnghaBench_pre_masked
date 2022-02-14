
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hflags; int smbase; } ;
struct kvm_vcpu {TYPE_1__ arch; int vcpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 if (!(VAR_2->arch.hflags & VAR_0)) {

  FUNC_2(VAR_2->vcpu_id, VAR_2->arch.smbase, 0);


  FUNC_0(VAR_1, VAR_2);
 }

 FUNC_1(VAR_2);
}
