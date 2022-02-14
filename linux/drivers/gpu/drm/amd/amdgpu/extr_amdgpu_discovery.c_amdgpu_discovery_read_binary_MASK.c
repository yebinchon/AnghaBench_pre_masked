
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int mmio_idx_lock; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_5, uint8_t *VAR_6)
{
 uint32_t *VAR_7 = (uint32_t *)VAR_6;
 uint64_t VAR_8 = (uint64_t)FUNC_0(VAR_4) << 20;
 uint64_t VAR_9 = VAR_8 - VAR_0;
 unsigned long VAR_10;

 while (VAR_9 < VAR_8) {
  FUNC_3(&VAR_5->mmio_idx_lock, VAR_10);
  FUNC_2(VAR_2, ((uint32_t)VAR_9) | 0x80000000);
  FUNC_2(VAR_3, VAR_9 >> 31);
  *VAR_7++ = FUNC_1(VAR_1);
  FUNC_4(&VAR_5->mmio_idx_lock, VAR_10);
  VAR_9 += 4;
 }

 return 0;
}
