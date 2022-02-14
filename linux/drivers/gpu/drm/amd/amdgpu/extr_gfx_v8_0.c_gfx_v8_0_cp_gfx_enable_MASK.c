
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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_5, bool VAR_6)
{
 int VAR_7;
 u32 VAR_8 = FUNC_1(VAR_4);

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_2, 0);
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_3, 0);
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_0, 0);
 } else {
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_2, 1);
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_3, 1);
  VAR_8 = FUNC_0(VAR_8, VAR_1, VAR_0, 1);
  for (VAR_7 = 0; VAR_7 < VAR_5->gfx.num_gfx_rings; VAR_7++)
   VAR_5->gfx.gfx_ring[VAR_7].sched.ready = 0;
 }
 FUNC_2(VAR_4, VAR_8);
 FUNC_3(50);
}
