
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_bo {TYPE_1__* shadow; int tbo; } ;
struct TYPE_2__ {int tbo; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_bo *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->tbo);
 if (VAR_1)
  return VAR_1;

 if (VAR_0->shadow)
  VAR_1 = FUNC_0(&VAR_0->shadow->tbo);

 return VAR_1;
}
