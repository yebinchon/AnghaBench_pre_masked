
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int tsc_catchup; int tsc_always_catchup; scalar_t__ tsc_scaling_ratio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long long,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5, u32 VAR_6, bool VAR_7)
{
 u64 VAR_8;


 if (!VAR_7) {
  VAR_5->arch.tsc_scaling_ratio = VAR_0;
  return 0;
 }


 if (!VAR_1) {
  if (VAR_6 > VAR_4) {
   VAR_5->arch.tsc_catchup = 1;
   VAR_5->arch.tsc_always_catchup = 1;
   return 0;
  } else {
   FUNC_1("user requested TSC rate below hardware speed\n");
   return -1;
  }
 }


 VAR_8 = FUNC_0(1ULL << VAR_3,
    VAR_6, VAR_4);

 if (VAR_8 == 0 || VAR_8 >= VAR_2) {
  FUNC_1("Invalid TSC scaling ratio - virtual-tsc-khz=%u\n",
               VAR_6);
  return -1;
 }

 VAR_5->arch.tsc_scaling_ratio = VAR_8;
 return 0;
}
