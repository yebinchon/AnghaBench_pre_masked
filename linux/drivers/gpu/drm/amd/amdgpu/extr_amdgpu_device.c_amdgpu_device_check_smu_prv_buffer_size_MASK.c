
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct sysinfo {int mem_unit; scalar_t__ totalram; } ;
struct TYPE_2__ {int smu_prv_buffer_size; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sysinfo*) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_1)
{
 struct sysinfo VAR_2;
 bool VAR_3 = (sizeof(void *) == 8) ? 1 : 0;
 uint64_t VAR_4;
 uint64_t VAR_5 = 0x1B8000000;
 uint64_t VAR_6 = 0xB8000000;

 if (VAR_0 == 0)
  return;

 if (!VAR_3) {
  FUNC_0("Not 64-bit OS, feature not supported\n");
  goto def_value;
 }
 FUNC_1(&VAR_2);
 VAR_4 = (uint64_t)VAR_2.totalram * VAR_2.mem_unit;

 if ((VAR_0 == 1) ||
  (VAR_0 == 2)) {
  if (VAR_4 < VAR_6)
   goto def_value1;
 } else if ((VAR_0 == 4) ||
  (VAR_0 == 8)) {
  if (VAR_4 < VAR_5)
   goto def_value1;
 } else {
  FUNC_0("Smu memory pool size not supported\n");
  goto def_value;
 }
 VAR_1->pm.smu_prv_buffer_size = VAR_0 << 28;

 return;

def_value1:
 FUNC_0("No enough system memory\n");
def_value:
 VAR_1->pm.smu_prv_buffer_size = 0;
}
