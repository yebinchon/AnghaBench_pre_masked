
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;
struct drm_mm_node {unsigned long start; int size; } ;
struct TYPE_6__ {int mc_vram_size; } ;
struct amdgpu_device {int mmio_idx_lock; TYPE_3__ gmc; } ;
struct TYPE_5__ {int mem; int bdev; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct drm_mm_node* FUNC_2 (int *,unsigned long*) ;
 struct amdgpu_device* FUNC_3 (int ) ;
 int FUNC_4 (void*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct amdgpu_bo* FUNC_7 (struct ttm_buffer_object*) ;

__attribute__((used)) static int FUNC_8(struct ttm_buffer_object *VAR_6,
        unsigned long VAR_7,
        void *VAR_8, int VAR_9, int VAR_10)
{
 struct amdgpu_bo *VAR_11 = FUNC_7(VAR_6);
 struct amdgpu_device *VAR_12 = FUNC_3(VAR_11->tbo.bdev);
 struct drm_mm_node *VAR_13;
 uint32_t VAR_14 = 0;
 int VAR_15 = 0;
 uint64_t VAR_16;
 unsigned long VAR_17;

 if (VAR_6->mem.mem_type != VAR_2)
  return -VAR_0;

 VAR_13 = FUNC_2(&VAR_11->tbo.mem, &VAR_7);
 VAR_16 = (VAR_13->start << VAR_1) + VAR_7;

 while (VAR_9 && VAR_16 < VAR_12->gmc.mc_vram_size) {
  uint64_t VAR_18 = VAR_16 & ~(uint64_t)3;
  uint32_t VAR_19 = 4 - (VAR_16 & 3);
  uint32_t VAR_20 = (VAR_16 & 3) * 8;
  uint32_t VAR_21 = 0xffffffff << VAR_20;

  if (VAR_9 < VAR_19) {
   VAR_21 &= 0xffffffff >> (VAR_19 - VAR_9) * 8;
   VAR_19 = VAR_9;
  }

  FUNC_5(&VAR_12->mmio_idx_lock, VAR_17);
  FUNC_1(VAR_4, ((uint32_t)VAR_18) | 0x80000000);
  FUNC_1(VAR_5, VAR_18 >> 31);
  if (!VAR_10 || VAR_21 != 0xffffffff)
   VAR_14 = FUNC_0(VAR_3);
  if (VAR_10) {
   VAR_14 &= ~VAR_21;
   VAR_14 |= (*(uint32_t *)VAR_8 << VAR_20) & VAR_21;
   FUNC_1(VAR_3, VAR_14);
  }
  FUNC_6(&VAR_12->mmio_idx_lock, VAR_17);
  if (!VAR_10) {
   VAR_14 = (VAR_14 & VAR_21) >> VAR_20;
   FUNC_4(VAR_8, &VAR_14, VAR_19);
  }

  VAR_15 += VAR_19;
  VAR_8 = (uint8_t *)VAR_8 + VAR_19;
  VAR_16 += VAR_19;
  VAR_9 -= VAR_19;
  if (VAR_16 >= (VAR_13->start + VAR_13->size) << VAR_1) {
   ++VAR_13;
   VAR_16 = (VAR_13->start << VAR_1);
  }
 }

 return VAR_15;
}
