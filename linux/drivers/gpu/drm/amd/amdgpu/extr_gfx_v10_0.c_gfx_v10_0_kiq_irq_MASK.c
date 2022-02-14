
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_ring {int dummy; } ;
struct amdgpu_iv_entry {int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ring ring; } ;
struct TYPE_4__ {TYPE_1__ kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (struct amdgpu_ring*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
        struct amdgpu_irq_src *VAR_1,
        struct amdgpu_iv_entry *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 struct amdgpu_ring *VAR_6 = &(VAR_0->gfx.kiq.ring);

 VAR_3 = (VAR_2->ring_id & 0x0c) >> 2;
 VAR_4 = (VAR_2->ring_id & 0x03) >> 0;
 VAR_5 = (VAR_2->ring_id & 0x70) >> 4;
 FUNC_0("IH: CPC GENERIC2_INT, me:%d, pipe:%d, queue:%d\n",
     VAR_3, VAR_4, VAR_5);

 FUNC_1(VAR_6);
 return 0;
}
