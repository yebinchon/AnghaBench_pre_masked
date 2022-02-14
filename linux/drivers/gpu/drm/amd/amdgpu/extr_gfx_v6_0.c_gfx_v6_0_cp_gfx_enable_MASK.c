
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int num_gfx_rings; int num_compute_rings; TYPE_4__* compute_ring; TYPE_2__* gfx_ring; } ;
struct amdgpu_device {TYPE_5__ gfx; } ;
struct TYPE_8__ {int ready; } ;
struct TYPE_9__ {TYPE_3__ sched; } ;
struct TYPE_6__ {int ready; } ;
struct TYPE_7__ {TYPE_1__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5, bool VAR_6)
{
 int VAR_7;
 if (VAR_6) {
  FUNC_0(VAR_3, 0);
 } else {
  FUNC_0(VAR_3, (VAR_1 |
          VAR_2 |
          VAR_0));
  FUNC_0(VAR_4, 0);
  for (VAR_7 = 0; VAR_7 < VAR_5->gfx.num_gfx_rings; VAR_7++)
   VAR_5->gfx.gfx_ring[VAR_7].sched.ready = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5->gfx.num_compute_rings; VAR_7++)
   VAR_5->gfx.compute_ring[VAR_7].sched.ready = 0;
 }
 FUNC_1(50);
}
