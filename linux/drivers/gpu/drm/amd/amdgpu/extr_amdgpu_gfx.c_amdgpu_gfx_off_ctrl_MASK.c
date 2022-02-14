
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ gfx_off_req_count; int gfx_off_state; int gfx_off_mutex; int gfx_off_delay_work; } ;
struct TYPE_7__ {TYPE_2__* pp_funcs; } ;
struct TYPE_5__ {int pp_feature; } ;
struct amdgpu_device {TYPE_4__ gfx; TYPE_3__ powerplay; TYPE_1__ pm; } ;
struct TYPE_6__ {int set_powergating_by_smu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct amdgpu_device *VAR_3, bool VAR_4)
{
 if (!(VAR_3->pm.pp_feature & VAR_2))
  return;

 if (!FUNC_1(VAR_3) &&
     (!VAR_3->powerplay.pp_funcs ||
      !VAR_3->powerplay.pp_funcs->set_powergating_by_smu))
  return;


 FUNC_2(&VAR_3->gfx.gfx_off_mutex);

 if (!VAR_4)
  VAR_3->gfx.gfx_off_req_count++;
 else if (VAR_3->gfx.gfx_off_req_count > 0)
  VAR_3->gfx.gfx_off_req_count--;

 if (VAR_4 && !VAR_3->gfx.gfx_off_state && !VAR_3->gfx.gfx_off_req_count) {
  FUNC_4(&VAR_3->gfx.gfx_off_delay_work, VAR_1);
 } else if (!VAR_4 && VAR_3->gfx.gfx_off_state) {
  if (!FUNC_0(VAR_3, VAR_0, 0))
   VAR_3->gfx.gfx_off_state = 0;
 }

 FUNC_3(&VAR_3->gfx.gfx_off_mutex);
}
