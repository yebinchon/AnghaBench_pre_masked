
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ virtual_tsc_khz; int virtual_tsc_mult; int virtual_tsc_shift; int tsc_scaling_ratio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int *,int *) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8 = 0;


 if (VAR_5 == 0) {

  VAR_4->arch.tsc_scaling_ratio = VAR_1;
  return -1;
 }


 FUNC_1(VAR_5 * 1000LL, VAR_0,
      &VAR_4->arch.virtual_tsc_shift,
      &VAR_4->arch.virtual_tsc_mult);
 VAR_4->arch.virtual_tsc_khz = VAR_5;







 VAR_6 = FUNC_0(VAR_2, -VAR_3);
 VAR_7 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 < VAR_6 || VAR_5 > VAR_7) {
  FUNC_2("kvm: requested TSC rate %u falls outside tolerance [%u,%u]\n", VAR_5, VAR_6, VAR_7);
  VAR_8 = 1;
 }
 return FUNC_3(VAR_4, VAR_5, VAR_8);
}
