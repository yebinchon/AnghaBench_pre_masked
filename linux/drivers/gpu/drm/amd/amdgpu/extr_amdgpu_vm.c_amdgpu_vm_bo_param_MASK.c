
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* bo; } ;
struct TYPE_10__ {TYPE_4__ base; } ;
struct amdgpu_vm {TYPE_5__ root; scalar_t__ use_cpu_for_update; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_param {int flags; int resv; int type; int domain; int byte_align; int size; } ;
struct TYPE_6__ {int resv; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__ tbo; scalar_t__ shadow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_bo_param*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_7, struct amdgpu_vm *VAR_8,
          int VAR_9, struct amdgpu_bo_param *VAR_10)
{
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->size = FUNC_1(VAR_7, VAR_9);
 VAR_10->byte_align = VAR_5;
 VAR_10->domain = VAR_4;
 VAR_10->domain = FUNC_0(VAR_7, VAR_10->domain);
 VAR_10->flags = VAR_3 |
  VAR_1;
 if (VAR_8->use_cpu_for_update)
  VAR_10->flags |= VAR_0;
 else if (!VAR_8->root.base.bo || VAR_8->root.base.bo->shadow)
  VAR_10->flags |= VAR_2;
 VAR_10->type = VAR_6;
 if (VAR_8->root.base.bo)
  VAR_10->resv = VAR_8->root.base.bo->tbo.base.resv;
}
