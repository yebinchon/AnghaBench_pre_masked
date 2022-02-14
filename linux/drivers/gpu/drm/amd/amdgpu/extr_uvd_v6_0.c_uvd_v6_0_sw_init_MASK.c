
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_ring {int name; int * funcs; } ;
struct TYPE_6__ {int num_enc_rings; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_7__ {int num_types; } ;
struct TYPE_5__ {TYPE_3__ irq; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,int ,scalar_t__,TYPE_3__*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*,int,TYPE_3__*,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(void *VAR_3)
{
 struct amdgpu_ring *VAR_4;
 int VAR_5, VAR_6;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_3;


 VAR_6 = FUNC_1(VAR_7, VAR_0, VAR_2, &VAR_7->uvd.inst->irq);
 if (VAR_6)
  return VAR_6;


 if (FUNC_7(VAR_7)) {
  for (VAR_5 = 0; VAR_5 < VAR_7->uvd.num_enc_rings; ++VAR_5) {
   VAR_6 = FUNC_1(VAR_7, VAR_0, VAR_5 + VAR_1, &VAR_7->uvd.inst->irq);
   if (VAR_6)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_7(VAR_7)) {
  for (VAR_5 = 0; VAR_5 < VAR_7->uvd.num_enc_rings; ++VAR_5)
   VAR_7->uvd.inst->ring_enc[VAR_5].funcs = ((void*)0);

  VAR_7->uvd.inst->irq.num_types = 1;
  VAR_7->uvd.num_enc_rings = 0;

  FUNC_0("UVD ENC is disabled\n");
 }

 VAR_4 = &VAR_7->uvd.inst->ring;
 FUNC_6(VAR_4->name, "uvd");
 VAR_6 = FUNC_2(VAR_7, VAR_4, 512, &VAR_7->uvd.inst->irq, 0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_7);
 if (VAR_6)
  return VAR_6;

 if (FUNC_7(VAR_7)) {
  for (VAR_5 = 0; VAR_5 < VAR_7->uvd.num_enc_rings; ++VAR_5) {
   VAR_4 = &VAR_7->uvd.inst->ring_enc[VAR_5];
   FUNC_6(VAR_4->name, "uvd_enc%d", VAR_5);
   VAR_6 = FUNC_2(VAR_7, VAR_4, 512, &VAR_7->uvd.inst->irq, 0);
   if (VAR_6)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_3(VAR_7);

 return VAR_6;
}
