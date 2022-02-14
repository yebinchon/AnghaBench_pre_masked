
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct pvclock_vcpu_time_info {int version; int flags; scalar_t__ system_time; } ;


 scalar_t__ FUNC_0 (struct pvclock_vcpu_time_info*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct pvclock_vcpu_time_info *VAR_0,
    uint64_t *VAR_1, uint8_t *VAR_2)
{
 uint32_t VAR_3;

 do {
  VAR_3 = VAR_0->version;
  FUNC_1();
  *VAR_1 = VAR_0->system_time + FUNC_0(VAR_0);
  *VAR_2 = VAR_0->flags;
  FUNC_1();
 } while ((VAR_0->version & 1) != 0 || VAR_0->version != VAR_3);
}
