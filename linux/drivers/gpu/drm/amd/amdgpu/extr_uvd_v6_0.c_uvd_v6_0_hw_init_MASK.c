
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {int num_enc_rings; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int,int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_11(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 struct amdgpu_ring *VAR_8 = &VAR_7->uvd.inst->ring;
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 FUNC_3(VAR_7, 10000, 10000);
 FUNC_10(VAR_7, VAR_0);
 FUNC_8(VAR_7, 1);

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11)
  goto done;

 VAR_11 = FUNC_4(VAR_8, 10);
 if (VAR_11) {
  FUNC_0("amdgpu: ring failed to lock UVD ring (%d).\n", VAR_11);
  goto done;
 }

 VAR_9 = FUNC_2(VAR_4, 0);
 FUNC_7(VAR_8, VAR_9);
 FUNC_7(VAR_8, 0xFFFFF);

 VAR_9 = FUNC_2(VAR_5, 0);
 FUNC_7(VAR_8, VAR_9);
 FUNC_7(VAR_8, 0xFFFFF);

 VAR_9 = FUNC_2(VAR_2, 0);
 FUNC_7(VAR_8, VAR_9);
 FUNC_7(VAR_8, 0xFFFFF);


 FUNC_7(VAR_8, FUNC_2(VAR_3, 0));
 FUNC_7(VAR_8, 0x8);

 FUNC_7(VAR_8, FUNC_2(VAR_1, 0));
 FUNC_7(VAR_8, 3);

 FUNC_5(VAR_8);

 if (FUNC_9(VAR_7)) {
  for (VAR_10 = 0; VAR_10 < VAR_7->uvd.num_enc_rings; ++VAR_10) {
   VAR_8 = &VAR_7->uvd.inst->ring_enc[VAR_10];
   VAR_11 = FUNC_6(VAR_8);
   if (VAR_11)
    goto done;
  }
 }

done:
 if (!VAR_11) {
  if (FUNC_9(VAR_7))
   FUNC_1("UVD and UVD ENC initialized successfully.\n");
  else
   FUNC_1("UVD initialized successfully.\n");
 }

 return VAR_11;
}
