
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int name; } ;
struct TYPE_2__ {int num_rings; int irq; struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_4)
{
 struct amdgpu_ring *VAR_5;
 int VAR_6, VAR_7;
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_4;


 VAR_6 = FUNC_0(VAR_8, VAR_0, 167, &VAR_8->vce.irq);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_8, VAR_2 +
  VAR_3 + VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_8);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_8->vce.num_rings; VAR_7++) {
  VAR_5 = &VAR_8->vce.ring[VAR_7];
  FUNC_5(VAR_5->name, "vce%d", VAR_7);
  VAR_6 = FUNC_1(VAR_8, VAR_5, 512,
         &VAR_8->vce.irq, 0);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_2(VAR_8);

 return VAR_6;
}
