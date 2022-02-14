
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_enc_rings; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int * ring_enc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(void *VAR_0)
{
 int VAR_1, VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;

 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2)
  return VAR_2;

 if (FUNC_3(VAR_3)) {
  for (VAR_1 = 0; VAR_1 < VAR_3->uvd.num_enc_rings; ++VAR_1)
   FUNC_0(&VAR_3->uvd.inst->ring_enc[VAR_1]);
 }

 return FUNC_2(VAR_3);
}
