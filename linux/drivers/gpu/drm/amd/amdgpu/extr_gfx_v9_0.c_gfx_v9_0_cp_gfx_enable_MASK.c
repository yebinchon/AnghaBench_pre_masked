
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int num_gfx_rings; TYPE_2__* gfx_ring; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {int ready; } ;
struct TYPE_5__ {TYPE_1__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_6, bool VAR_7)
{
 int VAR_8;
 u32 VAR_9 = FUNC_1(VAR_2, 0, VAR_5);

 VAR_9 = FUNC_0(VAR_9, VAR_1, VAR_3, VAR_7 ? 0 : 1);
 VAR_9 = FUNC_0(VAR_9, VAR_1, VAR_4, VAR_7 ? 0 : 1);
 VAR_9 = FUNC_0(VAR_9, VAR_1, VAR_0, VAR_7 ? 0 : 1);
 if (!VAR_7) {
  for (VAR_8 = 0; VAR_8 < VAR_6->gfx.num_gfx_rings; VAR_8++)
   VAR_6->gfx.gfx_ring[VAR_8].sched.ready = 0;
 }
 FUNC_2(VAR_2, 0, VAR_5, VAR_9);
 FUNC_3(50);
}
