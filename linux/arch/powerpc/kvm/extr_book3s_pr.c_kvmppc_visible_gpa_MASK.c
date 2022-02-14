
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int uint32_t ;
struct TYPE_2__ {int magic_page_pa; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_3, gpa_t VAR_4)
{
 ulong VAR_5 = VAR_3->arch.magic_page_pa;

 if (!(FUNC_1(VAR_3) & VAR_1))
  VAR_5 = (uint32_t)VAR_5;

 VAR_4 &= ~0xFFFULL;
 if (FUNC_2(VAR_5) && FUNC_2((VAR_5 & VAR_0) == (VAR_4 & VAR_0))) {
  return 1;
 }

 return FUNC_0(VAR_3->kvm, VAR_4 >> VAR_2);
}
