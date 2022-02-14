
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int,int) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_5)
{
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_5;
 struct amdgpu_ring *VAR_7 = &VAR_6->uvd.inst->ring;
 uint32_t VAR_8;
 int VAR_9;

 FUNC_8(VAR_6, 1);
 FUNC_3(VAR_6, 10000, 10000);

 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9)
  goto done;

 VAR_9 = FUNC_4(VAR_7, 10);
 if (VAR_9) {
  FUNC_0("amdgpu: ring failed to lock UVD ring (%d).\n", VAR_9);
  goto done;
 }

 VAR_8 = FUNC_2(VAR_3, 0);
 FUNC_7(VAR_7, VAR_8);
 FUNC_7(VAR_7, 0xFFFFF);

 VAR_8 = FUNC_2(VAR_4, 0);
 FUNC_7(VAR_7, VAR_8);
 FUNC_7(VAR_7, 0xFFFFF);

 VAR_8 = FUNC_2(VAR_1, 0);
 FUNC_7(VAR_7, VAR_8);
 FUNC_7(VAR_7, 0xFFFFF);


 FUNC_7(VAR_7, FUNC_2(VAR_2, 0));
 FUNC_7(VAR_7, 0x8);

 FUNC_7(VAR_7, FUNC_2(VAR_0, 0));
 FUNC_7(VAR_7, 3);

 FUNC_5(VAR_7);

done:
 if (!VAR_9)
  FUNC_1("UVD initialized successfully.\n");

 return VAR_9;
}
