
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table_size; int num_gpu_pages; int gart_pte_flags; scalar_t__ bo; } ;
struct amdgpu_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->gart.bo) {
  FUNC_1(1, "VEGA10 PCIE GART already initialized\n");
  return 0;
 }

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;
 VAR_2->gart.table_size = VAR_2->gart.num_gpu_pages * 8;
 VAR_2->gart.gart_pte_flags = FUNC_0(VAR_1) |
     VAR_0;
 return FUNC_3(VAR_2);
}
