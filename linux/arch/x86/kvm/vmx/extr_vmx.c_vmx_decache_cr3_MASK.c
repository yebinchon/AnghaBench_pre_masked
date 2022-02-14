
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int regs_avail; int cr3; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_4)
{
 if (VAR_3 || (VAR_2 && FUNC_1(VAR_4)))
  VAR_4->arch.cr3 = FUNC_2(VAR_0);
 FUNC_0(VAR_1, (ulong *)&VAR_4->arch.regs_avail);
}
