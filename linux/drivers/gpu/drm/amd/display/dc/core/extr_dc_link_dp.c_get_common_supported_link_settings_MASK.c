
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_link_settings {scalar_t__ lane_count; scalar_t__ link_rate; int link_spread; int member_0; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct dc_link_settings FUNC_0(
  struct dc_link_settings VAR_6,
  struct dc_link_settings VAR_7)
{
 struct dc_link_settings VAR_8 = {0};

 VAR_8.lane_count =
  (VAR_6.lane_count <=
   VAR_7.lane_count) ?
   VAR_6.lane_count :
   VAR_7.lane_count;
 VAR_8.link_rate =
  (VAR_6.link_rate <=
   VAR_7.link_rate) ?
   VAR_6.link_rate :
   VAR_7.link_rate;
 VAR_8.link_spread = VAR_5;






 if (VAR_8.link_rate > VAR_2) {
  VAR_8.link_rate = VAR_2;
 } else if (VAR_8.link_rate < VAR_2
   && VAR_8.link_rate > VAR_1) {
  VAR_8.link_rate = VAR_1;
 } else if (VAR_8.link_rate < VAR_1
   && VAR_8.link_rate > VAR_0) {
  VAR_8.link_rate = VAR_0;
 } else if (VAR_8.link_rate < VAR_0
   && VAR_8.link_rate > VAR_3) {
  VAR_8.link_rate = VAR_3;
 } else if (VAR_8.link_rate < VAR_3) {
  VAR_8.link_rate = VAR_4;
 }

 return VAR_8;
}
