
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bo; int table_size; } ;
struct amdgpu_device {TYPE_1__ gart; } ;
struct amdgpu_bo_param {int flags; int * resv; int type; int domain; int byte_align; int size; } ;
typedef int bp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_bo_param*,int **) ;
 int FUNC_1 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_4 ;

int FUNC_2(struct amdgpu_device *VAR_5)
{
 int VAR_6;

 if (VAR_5->gart.bo == ((void*)0)) {
  struct amdgpu_bo_param VAR_7;

  FUNC_1(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.size = VAR_5->gart.table_size;
  VAR_7.byte_align = VAR_3;
  VAR_7.domain = VAR_2;
  VAR_7.flags = VAR_0 |
   VAR_1;
  VAR_7.type = VAR_4;
  VAR_7.resv = ((void*)0);
  VAR_6 = FUNC_0(VAR_5, &VAR_7, &VAR_5->gart.bo);
  if (VAR_6) {
   return VAR_6;
  }
 }
 return 0;
}
