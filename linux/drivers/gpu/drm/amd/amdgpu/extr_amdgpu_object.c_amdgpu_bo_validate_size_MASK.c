
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ttm_mem_type_manager {unsigned long size; } ;
struct TYPE_3__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {TYPE_1__ bdev; } ;
struct amdgpu_device {TYPE_2__ mman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct amdgpu_device *VAR_5,
       unsigned long VAR_6, u32 VAR_7)
{
 struct ttm_mem_type_manager *VAR_8 = ((void*)0);





 if (VAR_7 & VAR_0) {
  VAR_8 = &VAR_5->mman.bdev.man[VAR_3];

  if (VAR_6 < (VAR_8->size << VAR_2))
   return 1;
  else
   goto fail;
 }

 if (VAR_7 & VAR_1) {
  VAR_8 = &VAR_5->mman.bdev.man[VAR_4];

  if (VAR_6 < (VAR_8->size << VAR_2))
   return 1;
  else
   goto fail;
 }



 return 1;

fail:
 FUNC_0("BO size %lu > total memory in domain: %llu\n", VAR_6,
    VAR_8->size << VAR_2);
 return 0;
}
