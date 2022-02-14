
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_rate; int lane_count; } ;
struct dc_link {scalar_t__ connector_signal; TYPE_1__ verified_link_cap; } ;
struct TYPE_4__ {int override_edid; } ;
struct amdgpu_dm_connector {TYPE_2__ base; scalar_t__ dc_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct amdgpu_dm_connector*) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_dm_connector *VAR_3)
{
 struct dc_link *VAR_4 = (struct dc_link *)VAR_3->dc_link;





 if (VAR_4->connector_signal == VAR_2) {
  VAR_4->verified_link_cap.lane_count = VAR_0;
  VAR_4->verified_link_cap.link_rate = VAR_1;
 }


 VAR_3->base.override_edid = 1;
 FUNC_0(VAR_3);
}
