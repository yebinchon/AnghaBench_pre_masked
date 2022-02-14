
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_size; int num_gpu_pages; scalar_t__ gart_pte_flags; scalar_t__ bo; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->gart.bo) {
  FUNC_0(1, "R600 PCIE GART already initialized\n");
  return 0;
 }

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;
 VAR_0->gart.table_size = VAR_0->gart.num_gpu_pages * 8;
 VAR_0->gart.gart_pte_flags = 0;
 return FUNC_2(VAR_0);
}
