
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_3__ {int ring_lock; struct amdgpu_ring ring; } ;
struct TYPE_4__ {TYPE_1__ kiq; } ;
struct amdgpu_device {int usec_timeout; TYPE_2__ gfx; } ;


 int FUNC_0 (char*,long) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_ring*,int *) ;
 long FUNC_5 (struct amdgpu_ring*,int ,int ) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (struct amdgpu_ring*) ;
 int FUNC_8 (struct amdgpu_ring*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_2, uint16_t VAR_3)
{
 signed long VAR_4;
 uint32_t VAR_5;
 struct amdgpu_ring *VAR_6 = &VAR_2->gfx.kiq.ring;

 FUNC_9(&VAR_2->gfx.kiq.ring_lock);
 FUNC_6(VAR_6, 12);
 FUNC_8(VAR_6, FUNC_1(VAR_1, 0));
 FUNC_8(VAR_6,
   FUNC_2(1) |
   FUNC_3(VAR_3));
 FUNC_4(VAR_6, &VAR_5);
 FUNC_7(VAR_6);
 FUNC_10(&VAR_2->gfx.kiq.ring_lock);

 VAR_4 = FUNC_5(VAR_6, VAR_5, VAR_2->usec_timeout);
 if (VAR_4 < 1) {
  FUNC_0("wait for kiq fence error: %ld.\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
