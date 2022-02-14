
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int uint32_t ;
struct TYPE_2__ {int magic_page_pa; scalar_t__ shared; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
typedef int kvm_pfn_t ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (void*) ;

kvm_pfn_t FUNC_6(struct kvm_vcpu *VAR_4, gpa_t VAR_5, bool VAR_6,
   bool *VAR_7)
{
 ulong VAR_8 = VAR_4->arch.magic_page_pa & VAR_0;
 gfn_t VAR_9 = VAR_5 >> VAR_3;

 if (!(FUNC_2(VAR_4) & VAR_1))
  VAR_8 = (uint32_t)VAR_8;


 VAR_5 &= ~0xFFFULL;
 if (FUNC_4(VAR_8) && FUNC_4((VAR_5 & VAR_0) == VAR_8)) {
  ulong VAR_10 = ((ulong)VAR_4->arch.shared) & VAR_2;
  kvm_pfn_t VAR_11;

  VAR_11 = (kvm_pfn_t)FUNC_5((void*)VAR_10) >> VAR_3;
  FUNC_0(FUNC_3(VAR_11));
  if (VAR_7)
   *VAR_7 = 1;
  return VAR_11;
 }

 return FUNC_1(VAR_4->kvm, VAR_9, VAR_6, VAR_7);
}
