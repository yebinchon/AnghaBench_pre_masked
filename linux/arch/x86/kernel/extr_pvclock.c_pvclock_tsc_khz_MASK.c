
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct pvclock_vcpu_time_info {unsigned long tsc_shift; int tsc_to_system_mul; } ;


 int FUNC_0 (unsigned long,int ) ;

unsigned long FUNC_1(struct pvclock_vcpu_time_info *VAR_0)
{
 u64 VAR_1 = 1000000ULL << 32;

 FUNC_0(VAR_1, VAR_0->tsc_to_system_mul);
 if (VAR_0->tsc_shift < 0)
  VAR_1 <<= -VAR_0->tsc_shift;
 else
  VAR_1 >>= VAR_0->tsc_shift;
 return VAR_1;
}
