
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef scalar_t__ u32 ;
struct TYPE_7__ {size_t vram_used; } ;
struct TYPE_6__ {size_t real_vram_size; } ;
struct TYPE_5__ {int bdev; } ;
struct amdgpu_device {TYPE_3__ kfd; TYPE_2__ gmc; TYPE_1__ mman; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_8__ {scalar_t__ system_mem_used; scalar_t__ max_system_mem_limit; scalar_t__ ttm_mem_used; scalar_t__ max_ttm_mem_limit; int mem_limit_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_6,
  uint64_t VAR_7, u32 VAR_8, bool VAR_9)
{
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14 = VAR_4 >> 9;
 int VAR_15 = 0;

 VAR_10 = FUNC_2(&VAR_6->mman.bdev, VAR_7,
           sizeof(struct amdgpu_bo));

 VAR_13 = 0;
 if (VAR_8 == VAR_1) {

  VAR_11 = VAR_10 + VAR_7;
  VAR_12 = VAR_10 + VAR_7;
 } else if (VAR_8 == VAR_0 && !VAR_9) {

  VAR_11 = VAR_10 + VAR_7;
  VAR_12 = VAR_10;
 } else {

  VAR_11 = VAR_10;
  VAR_12 = VAR_10;
  if (VAR_8 == VAR_2)
   VAR_13 = VAR_7;
 }

 FUNC_0(&VAR_5.mem_limit_lock);

 if ((VAR_5.system_mem_used + VAR_11 >
      VAR_5.max_system_mem_limit) ||
     (VAR_5.ttm_mem_used + VAR_12 >
      VAR_5.max_ttm_mem_limit) ||
     (VAR_6->kfd.vram_used + VAR_13 >
      VAR_6->gmc.real_vram_size - VAR_14)) {
  VAR_15 = -VAR_3;
 } else {
  VAR_5.system_mem_used += VAR_11;
  VAR_5.ttm_mem_used += VAR_12;
  VAR_6->kfd.vram_used += VAR_13;
 }

 FUNC_1(&VAR_5.mem_limit_lock);
 return VAR_15;
}
