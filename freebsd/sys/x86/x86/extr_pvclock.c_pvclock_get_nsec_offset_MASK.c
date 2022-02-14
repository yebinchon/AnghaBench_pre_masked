
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pvclock_vcpu_time_info {int tsc_shift; int tsc_to_system_mul; scalar_t__ tsc_timestamp; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static uint64_t
FUNC_2(struct pvclock_vcpu_time_info *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = FUNC_1() - VAR_0->tsc_timestamp;

 return (FUNC_0(VAR_1, VAR_0->tsc_to_system_mul,
     VAR_0->tsc_shift));
}
