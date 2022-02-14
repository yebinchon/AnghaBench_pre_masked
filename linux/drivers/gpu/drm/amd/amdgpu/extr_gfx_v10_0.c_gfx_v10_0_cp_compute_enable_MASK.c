
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


struct TYPE_9__ {int ready; } ;
struct TYPE_10__ {TYPE_3__ sched; } ;
struct TYPE_11__ {TYPE_4__ ring; } ;
struct TYPE_12__ {int num_compute_rings; TYPE_5__ kiq; TYPE_2__* compute_ring; } ;
struct amdgpu_device {TYPE_6__ gfx; } ;
struct TYPE_7__ {int ready; } ;
struct TYPE_8__ {TYPE_1__ sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_5) {
  FUNC_0(VAR_2, 0, VAR_3, 0);
 } else {
  FUNC_0(VAR_2, 0, VAR_3,
        (VAR_0 |
         VAR_1));
  for (VAR_6 = 0; VAR_6 < VAR_4->gfx.num_compute_rings; VAR_6++)
   VAR_4->gfx.compute_ring[VAR_6].sched.ready = 0;
  VAR_4->gfx.kiq.ring.sched.ready = 0;
 }
 FUNC_1(50);
}
