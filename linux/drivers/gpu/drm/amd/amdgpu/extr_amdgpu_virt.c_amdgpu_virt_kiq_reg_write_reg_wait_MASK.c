
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_kiq {int ring_lock; struct amdgpu_ring ring; } ;
struct TYPE_2__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_ring*,int *) ;
 long FUNC_1 (struct amdgpu_ring*,int ,int ) ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct amdgpu_ring*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(struct amdgpu_device *VAR_3,
     uint32_t VAR_4, uint32_t VAR_5,
     uint32_t VAR_6, uint32_t VAR_7)
{
 struct amdgpu_kiq *VAR_8 = &VAR_3->gfx.kiq;
 struct amdgpu_ring *VAR_9 = &VAR_8->ring;
 signed long VAR_10, VAR_11 = 0;
 unsigned long VAR_12;
 uint32_t VAR_13;

 FUNC_9(&VAR_8->ring_lock, VAR_12);
 FUNC_2(VAR_9, 32);
 FUNC_4(VAR_9, VAR_4, VAR_5,
         VAR_6, VAR_7);
 FUNC_0(VAR_9, &VAR_13);
 FUNC_3(VAR_9);
 FUNC_10(&VAR_8->ring_lock, VAR_12);

 VAR_10 = FUNC_1(VAR_9, VAR_13, VAR_2);


 if (VAR_10 < 1 && FUNC_5())
  goto failed_kiq;

 FUNC_6();
 while (VAR_10 < 1 && VAR_11++ < VAR_1) {

  FUNC_7(VAR_0);
  VAR_10 = FUNC_1(VAR_9, VAR_13, VAR_2);
 }

 if (VAR_11 > VAR_1)
  goto failed_kiq;

 return;

failed_kiq:
 FUNC_8("failed to write reg %x wait reg %x\n", VAR_4, VAR_5);
}
