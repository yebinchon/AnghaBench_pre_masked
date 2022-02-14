
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_size; int num_gpu_pages; int gart_pte_flags; scalar_t__ bo; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 if (VAR_1->gart.bo) {
  FUNC_0(1, "R600 PCIE GART already initialized\n");
  return 0;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_1->gart.table_size = VAR_1->gart.num_gpu_pages * 8;
 VAR_1->gart.gart_pte_flags = VAR_0;
 return FUNC_2(VAR_1);
}
