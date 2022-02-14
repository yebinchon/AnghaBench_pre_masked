
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct pvclock_vcpu_time_info {int flags; int tsc_shift; unsigned long long tsc_to_system_mul; int tsc_timestamp; int system_time; } ;
struct TYPE_3__ {int tsc_scale; int tsc_offset; } ;
typedef TYPE_1__ HV_REFERENCE_TSC_PAGE ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long long,unsigned long long,int) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_3(struct pvclock_vcpu_time_info *VAR_1,
     HV_REFERENCE_TSC_PAGE *VAR_2)
{
 u64 VAR_3;

 if (!(VAR_1->flags & VAR_0))
  return 0;







 VAR_3 = 100ull << (32 - VAR_1->tsc_shift);
 if (VAR_1->tsc_to_system_mul >= VAR_3)
  return 0;





 VAR_2->tsc_scale =
  FUNC_1(1ULL << (32 + VAR_1->tsc_shift),
    VAR_1->tsc_to_system_mul,
    100);

 VAR_2->tsc_offset = VAR_1->system_time;
 FUNC_0(VAR_2->tsc_offset, 100);
 VAR_2->tsc_offset -=
  FUNC_2(VAR_1->tsc_timestamp, VAR_2->tsc_scale, 64);
 return 1;
}
