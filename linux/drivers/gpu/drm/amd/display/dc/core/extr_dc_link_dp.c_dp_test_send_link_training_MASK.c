
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_link_settings {scalar_t__ link_rate; scalar_t__ lane_count; int member_0; } ;
struct TYPE_2__ {scalar_t__ link_rate; scalar_t__ lane_count; } ;
struct dc_link {TYPE_1__ verified_link_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dc_link*,int ,unsigned char*,int) ;
 int FUNC_1 (struct dc_link*,struct dc_link_settings*,int) ;

__attribute__((used)) static void FUNC_2(struct dc_link *VAR_2)
{
 struct dc_link_settings VAR_3 = {0};

 FUNC_0(
   VAR_2,
   VAR_0,
   (unsigned char *)(&VAR_3.lane_count),
   1);
 FUNC_0(
   VAR_2,
   VAR_1,
   (unsigned char *)(&VAR_3.link_rate),
   1);


 VAR_2->verified_link_cap.lane_count = VAR_3.lane_count;
 VAR_2->verified_link_cap.link_rate = VAR_3.link_rate;

 FUNC_1(VAR_2, &VAR_3, 0);
}
