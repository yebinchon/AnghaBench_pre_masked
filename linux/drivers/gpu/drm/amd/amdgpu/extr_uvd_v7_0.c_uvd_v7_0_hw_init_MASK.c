
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {int num_uvd_inst; int harvest_config; int num_enc_rings; TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 struct amdgpu_ring *VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (FUNC_8(VAR_7))
  VAR_12 = FUNC_9(VAR_7);
 else
  VAR_12 = FUNC_10(VAR_7);
 if (VAR_12)
  goto done;

 for (VAR_11 = 0; VAR_11 < VAR_7->uvd.num_uvd_inst; ++VAR_11) {
  if (VAR_7->uvd.harvest_config & (1 << VAR_11))
   continue;
  VAR_8 = &VAR_7->uvd.inst[VAR_11].ring;

  if (!FUNC_8(VAR_7)) {
   VAR_12 = FUNC_6(VAR_8);
   if (VAR_12)
    goto done;

   VAR_12 = FUNC_4(VAR_8, 10);
   if (VAR_12) {
    FUNC_0("amdgpu: (%d)ring failed to lock UVD ring (%d).\n", VAR_11, VAR_12);
    goto done;
   }

   VAR_9 = FUNC_2(FUNC_3(VAR_0, VAR_11,
    VAR_4), 0);
   FUNC_7(VAR_8, VAR_9);
   FUNC_7(VAR_8, 0xFFFFF);

   VAR_9 = FUNC_2(FUNC_3(VAR_0, VAR_11,
    VAR_5), 0);
   FUNC_7(VAR_8, VAR_9);
   FUNC_7(VAR_8, 0xFFFFF);

   VAR_9 = FUNC_2(FUNC_3(VAR_0, VAR_11,
    VAR_2), 0);
   FUNC_7(VAR_8, VAR_9);
   FUNC_7(VAR_8, 0xFFFFF);


   FUNC_7(VAR_8, FUNC_2(FUNC_3(VAR_0, VAR_11,
    VAR_3), 0));
   FUNC_7(VAR_8, 0x8);

   FUNC_7(VAR_8, FUNC_2(FUNC_3(VAR_0, VAR_11,
    VAR_1), 0));
   FUNC_7(VAR_8, 3);

   FUNC_5(VAR_8);
  }

  for (VAR_10 = 0; VAR_10 < VAR_7->uvd.num_enc_rings; ++VAR_10) {
   VAR_8 = &VAR_7->uvd.inst[VAR_11].ring_enc[VAR_10];
   VAR_12 = FUNC_6(VAR_8);
   if (VAR_12)
    goto done;
  }
 }
done:
 if (!VAR_12)
  FUNC_1("UVD and UVD ENC initialized successfully.\n");

 return VAR_12;
}
