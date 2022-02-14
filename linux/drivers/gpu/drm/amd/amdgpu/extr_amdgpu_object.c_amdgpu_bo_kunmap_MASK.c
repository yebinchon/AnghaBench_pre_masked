
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bo; } ;
struct amdgpu_bo {TYPE_1__ kmap; } ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct amdgpu_bo *VAR_0)
{
 if (VAR_0->kmap.bo)
  FUNC_0(&VAR_0->kmap);
}
