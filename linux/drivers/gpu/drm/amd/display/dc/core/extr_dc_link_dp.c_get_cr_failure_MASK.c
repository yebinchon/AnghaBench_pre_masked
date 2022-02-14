
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CR_DONE_0; } ;
union lane_status {TYPE_1__ bits; } ;
typedef enum link_training_result { ____Placeholder_link_training_result } link_training_result ;
typedef enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum link_training_result FUNC_0(enum dc_lane_count VAR_7,
     union lane_status *VAR_8)
{
 enum link_training_result VAR_9 = VAR_6;

 if (VAR_7 >= VAR_1 && !VAR_8[0].bits.CR_DONE_0)
  VAR_9 = VAR_3;
 else if (VAR_7 >= VAR_2 && !VAR_8[1].bits.CR_DONE_0)
  VAR_9 = VAR_4;
 else if (VAR_7 >= VAR_0 && !VAR_8[2].bits.CR_DONE_0)
  VAR_9 = VAR_5;
 else if (VAR_7 >= VAR_0 && !VAR_8[3].bits.CR_DONE_0)
  VAR_9 = VAR_5;
 return VAR_9;
}
