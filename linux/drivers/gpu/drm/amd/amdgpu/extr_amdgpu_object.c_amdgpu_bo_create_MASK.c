
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_device {int flags; } ;
struct amdgpu_bo_param {int flags; int resv; int size; } ;
struct TYPE_3__ {int resv; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,struct amdgpu_bo*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_3 (struct amdgpu_bo**) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct amdgpu_device *VAR_2,
       struct amdgpu_bo_param *VAR_3,
       struct amdgpu_bo **VAR_4)
{
 u64 VAR_5 = VAR_3->flags;
 int VAR_6;

 VAR_3->flags = VAR_3->flags & ~VAR_0;
 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 if ((VAR_5 & VAR_0) && !(VAR_2->flags & VAR_1)) {
  if (!VAR_3->resv)
   FUNC_0(FUNC_4((*VAR_4)->tbo.base.resv,
       ((void*)0)));

  VAR_6 = FUNC_1(VAR_2, VAR_3->size, *VAR_4);

  if (!VAR_3->resv)
   FUNC_5((*VAR_4)->tbo.base.resv);

  if (VAR_6)
   FUNC_3(VAR_4);
 }

 return VAR_6;
}
