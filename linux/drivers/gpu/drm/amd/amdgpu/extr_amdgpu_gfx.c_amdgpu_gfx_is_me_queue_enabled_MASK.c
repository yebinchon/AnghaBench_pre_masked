
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ me; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (struct amdgpu_device*,int,int,int) ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(struct amdgpu_device *VAR_0,
        int VAR_1, int VAR_2, int VAR_3)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3),
   VAR_0->gfx.me.queue_bitmap);
}
