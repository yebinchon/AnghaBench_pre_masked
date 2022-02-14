
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3)
{






 if (FUNC_0(VAR_3->kvm) &&
   FUNC_1(VAR_2) == VAR_1)
  FUNC_2(VAR_2, VAR_0);
}
