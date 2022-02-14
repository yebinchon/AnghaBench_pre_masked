
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
struct amdgpu_vm {TYPE_5__ root; } ;
struct TYPE_6__ {int resv; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__ tbo; } ;


 long FUNC_0 (int ,int,int,long) ;

long FUNC_1(struct amdgpu_vm *VAR_0, long VAR_1)
{
 return FUNC_0(VAR_0->root.base.bo->tbo.base.resv,
         1, 1, VAR_1);
}
