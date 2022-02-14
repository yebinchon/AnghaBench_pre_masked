
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * pgd; } ;
struct TYPE_4__ {int * pgd; } ;
struct TYPE_6__ {TYPE_2__ guest_user_mm; TYPE_1__ guest_kernel_mm; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
typedef int pte_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,unsigned long) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1, unsigned long VAR_2,
      bool VAR_3)
{
 pgd_t *VAR_4;
 pte_t *VAR_5;

 VAR_2 &= VAR_0 << 1;

 VAR_4 = VAR_1->arch.guest_kernel_mm.pgd;
 VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_2);
 if (VAR_5) {
  VAR_5[0] = FUNC_2(0, FUNC_0(0));
  VAR_5[1] = FUNC_2(0, FUNC_0(0));
 }

 if (VAR_3) {
  VAR_4 = VAR_1->arch.guest_user_mm.pgd;
  VAR_5 = FUNC_1(VAR_4, ((void*)0), VAR_2);
  if (VAR_5) {
   VAR_5[0] = FUNC_2(0, FUNC_0(0));
   VAR_5[1] = FUNC_2(0, FUNC_0(0));
  }
 }
}
