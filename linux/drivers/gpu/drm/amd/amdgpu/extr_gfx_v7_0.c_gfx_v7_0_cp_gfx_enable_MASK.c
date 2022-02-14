
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_gfx_rings; TYPE_2__* gfx_ring; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {int ready; } ;
struct TYPE_5__ {TYPE_1__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_5) {
  FUNC_0(VAR_3, 0);
 } else {
  FUNC_0(VAR_3, (VAR_1 | VAR_2 | VAR_0));
  for (VAR_6 = 0; VAR_6 < VAR_4->gfx.num_gfx_rings; VAR_6++)
   VAR_4->gfx.gfx_ring[VAR_6].sched.ready = 0;
 }
 FUNC_1(50);
}
