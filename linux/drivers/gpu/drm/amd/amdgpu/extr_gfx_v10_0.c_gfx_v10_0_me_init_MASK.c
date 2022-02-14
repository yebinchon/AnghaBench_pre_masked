
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ me; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1->gfx.me.queue_bitmap, VAR_0);

 FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_0("Failed to load gfx firmware!\n");

 return VAR_2;
}
