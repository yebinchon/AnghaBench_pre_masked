
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dc_link_settings {int member_3; scalar_t__ link_rate; scalar_t__ lane_count; scalar_t__ link_spread; int member_4; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {scalar_t__ lane_count; scalar_t__ link_rate; scalar_t__ link_spread; } ;
struct dc_link {TYPE_5__ reported_link_cap; TYPE_4__* link_enc; } ;
struct TYPE_6__ {scalar_t__ IS_HBR3_CAPABLE; scalar_t__ IS_HBR2_CAPABLE; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ flags; } ;
struct TYPE_9__ {TYPE_3__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct dc_link_settings FUNC_0(struct dc_link *VAR_5)
{

 struct dc_link_settings VAR_6 = {VAR_0, VAR_1,
   VAR_4, 0, 0};


 if (VAR_5->link_enc->features.flags.bits.IS_HBR2_CAPABLE)
  VAR_6.link_rate = VAR_2;

 if (VAR_5->link_enc->features.flags.bits.IS_HBR3_CAPABLE)
  VAR_6.link_rate = VAR_3;


 if (VAR_5->reported_link_cap.lane_count < VAR_6.lane_count)
  VAR_6.lane_count =
    VAR_5->reported_link_cap.lane_count;
 if (VAR_5->reported_link_cap.link_rate < VAR_6.link_rate)
  VAR_6.link_rate =
    VAR_5->reported_link_cap.link_rate;
 if (VAR_5->reported_link_cap.link_spread <
   VAR_6.link_spread)
  VAR_6.link_spread =
    VAR_5->reported_link_cap.link_spread;
 return VAR_6;
}
