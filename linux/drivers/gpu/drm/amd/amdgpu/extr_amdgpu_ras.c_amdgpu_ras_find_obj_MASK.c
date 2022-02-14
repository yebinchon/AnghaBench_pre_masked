
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t block; } ;
struct ras_manager {TYPE_1__ head; } ;
struct ras_common_if {int block; } ;
struct amdgpu_ras {struct ras_manager* objs; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ras_manager*) ;
 struct amdgpu_ras* FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static struct ras_manager *FUNC_3(struct amdgpu_device *VAR_1,
  struct ras_common_if *VAR_2)
{
 struct amdgpu_ras *VAR_3 = FUNC_2(VAR_1);
 struct ras_manager *VAR_4;
 int VAR_5;

 if (!VAR_3)
  return ((void*)0);

 if (VAR_2) {
  if (VAR_2->block >= VAR_0)
   return ((void*)0);

  VAR_4 = &VAR_3->objs[VAR_2->block];

  if (FUNC_1(VAR_4)) {
   FUNC_0(VAR_2->block != VAR_4->head.block);
   return VAR_4;
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_3->objs[VAR_5];
   if (FUNC_1(VAR_4)) {
    FUNC_0(VAR_5 != VAR_4->head.block);
    return VAR_4;
   }
  }
 }

 return ((void*)0);
}
