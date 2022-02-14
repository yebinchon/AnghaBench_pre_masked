
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pvclock_vcpu_time_info {unsigned long long tsc_to_system_mul; int tsc_shift; } ;



uint64_t
FUNC_0(struct pvclock_vcpu_time_info *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = (1000000000ULL << 32) / VAR_0->tsc_to_system_mul;

 if (VAR_0->tsc_shift < 0)
  VAR_1 <<= -VAR_0->tsc_shift;
 else
  VAR_1 >>= VAR_0->tsc_shift;

 return (VAR_1);
}
