
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
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_ring*,int *) ;
 long FUNC_7 (struct amdgpu_ring*,int ,int ) ;
 int FUNC_8 (struct amdgpu_ring*,int) ;
 int FUNC_9 (struct amdgpu_ring*) ;
 int FUNC_10 (struct amdgpu_ring*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_device *VAR_2, uint16_t VAR_3,
   uint32_t VAR_4)
{
 signed long VAR_5;
 uint32_t VAR_6;
 struct amdgpu_ring *VAR_7 = &VAR_2->gfx.kiq.ring;

 FUNC_11(&VAR_2->gfx.kiq.ring_lock);
 FUNC_8(VAR_7, 12);
 FUNC_10(VAR_7, FUNC_1(VAR_1, 0));
 FUNC_10(VAR_7,
   FUNC_3(1) |
   FUNC_2(1) |
   FUNC_5(VAR_3) |
   FUNC_4(VAR_4));
 FUNC_6(VAR_7, &VAR_6);
 FUNC_9(VAR_7);
 FUNC_12(&VAR_2->gfx.kiq.ring_lock);

 VAR_5 = FUNC_7(VAR_7, VAR_6, VAR_2->usec_timeout);
 if (VAR_5 < 1) {
  FUNC_0("wait for kiq fence error: %ld.\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
