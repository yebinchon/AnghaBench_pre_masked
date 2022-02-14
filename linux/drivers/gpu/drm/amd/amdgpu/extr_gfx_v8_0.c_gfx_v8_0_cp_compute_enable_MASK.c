
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ready; } ;
struct TYPE_8__ {TYPE_1__ sched; } ;
struct TYPE_9__ {TYPE_2__ ring; } ;
struct TYPE_12__ {int num_compute_rings; TYPE_3__ kiq; TYPE_5__* compute_ring; } ;
struct amdgpu_device {TYPE_6__ gfx; } ;
struct TYPE_10__ {int ready; } ;
struct TYPE_11__ {TYPE_4__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  FUNC_0(VAR_2, 0);
 } else {
  FUNC_0(VAR_2, (VAR_0 | VAR_1));
  for (VAR_5 = 0; VAR_5 < VAR_3->gfx.num_compute_rings; VAR_5++)
   VAR_3->gfx.compute_ring[VAR_5].sched.ready = 0;
  VAR_3->gfx.kiq.ring.sched.ready = 0;
 }
 FUNC_1(50);
}
