
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn10_link_encoder {int dummy; } ;
struct dc_link_settings {scalar_t__ lane_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(
 struct dcn10_link_encoder *VAR_5,
 const struct dc_link_settings *VAR_6)
{

 FUNC_0(VAR_1, 0,
   VAR_3, VAR_6->lane_count - VAR_4);


 FUNC_1(VAR_2, VAR_0, 1);
}
