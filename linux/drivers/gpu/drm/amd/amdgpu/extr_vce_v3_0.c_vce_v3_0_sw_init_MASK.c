
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int name; } ;
struct TYPE_2__ {scalar_t__ fw_version; int num_rings; int irq; struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,scalar_t__) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 struct amdgpu_ring *VAR_8;
 int VAR_9, VAR_10;


 VAR_9 = FUNC_0(VAR_7, VAR_0, VAR_5, &VAR_7->vce.irq);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_7, VAR_3 +
  (VAR_4 + VAR_2) * 2);
 if (VAR_9)
  return VAR_9;


 if (VAR_7->vce.fw_version < VAR_1)
  VAR_7->vce.num_rings = 2;

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < VAR_7->vce.num_rings; VAR_10++) {
  VAR_8 = &VAR_7->vce.ring[VAR_10];
  FUNC_5(VAR_8->name, "vce%d", VAR_10);
  VAR_9 = FUNC_1(VAR_7, VAR_8, 512, &VAR_7->vce.irq, 0);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_7);

 return VAR_9;
}
