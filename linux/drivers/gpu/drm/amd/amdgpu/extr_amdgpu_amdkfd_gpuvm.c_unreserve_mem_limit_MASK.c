
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ vram_used; } ;
struct TYPE_4__ {int bdev; } ;
struct amdgpu_device {TYPE_2__ kfd; TYPE_1__ mman; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_6__ {scalar_t__ system_mem_used; scalar_t__ ttm_mem_used; int mem_limit_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_4,
  uint64_t VAR_5, u32 VAR_6, bool VAR_7)
{
 size_t VAR_8;

 VAR_8 = FUNC_3(&VAR_4->mman.bdev, VAR_5,
           sizeof(struct amdgpu_bo));

 FUNC_1(&VAR_3.mem_limit_lock);
 if (VAR_6 == VAR_1) {
  VAR_3.system_mem_used -= (VAR_8 + VAR_5);
  VAR_3.ttm_mem_used -= (VAR_8 + VAR_5);
 } else if (VAR_6 == VAR_0 && !VAR_7) {
  VAR_3.system_mem_used -= (VAR_8 + VAR_5);
  VAR_3.ttm_mem_used -= VAR_8;
 } else {
  VAR_3.system_mem_used -= VAR_8;
  VAR_3.ttm_mem_used -= VAR_8;
  if (VAR_6 == VAR_2) {
   VAR_4->kfd.vram_used -= VAR_5;
   FUNC_0(VAR_4->kfd.vram_used < 0,
      "kfd VRAM memory accounting unbalanced");
  }
 }
 FUNC_0(VAR_3.system_mem_used < 0,
    "kfd system memory accounting unbalanced");
 FUNC_0(VAR_3.ttm_mem_used < 0,
    "kfd TTM memory accounting unbalanced");

 FUNC_2(&VAR_3.mem_limit_lock);
}
