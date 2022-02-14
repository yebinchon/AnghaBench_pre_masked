
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


struct TYPE_12__ {scalar_t__ MAX_DOWN_SPREAD; } ;
struct TYPE_8__ {int member_0; } ;
union max_down_spread {scalar_t__ raw; TYPE_6__ bits; TYPE_2__ member_0; } ;
struct TYPE_9__ {int LANE_COUNT_SET; } ;
struct TYPE_7__ {int member_0; } ;
union lane_count_set {scalar_t__ raw; TYPE_3__ bits; TYPE_1__ member_0; } ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int use_link_rate_set; int link_spread; scalar_t__ link_rate; scalar_t__ link_rate_set; int lane_count; } ;
struct TYPE_10__ {scalar_t__ edp_supported_link_rates_count; scalar_t__* edp_supported_link_rates; } ;
struct dc_link {TYPE_5__ cur_link_settings; TYPE_4__ dpcd_caps; } ;
typedef int max_down_spread ;
typedef int link_rate_set ;
typedef int link_bw_set ;
typedef int lane_count_set ;
typedef enum dc_status { ____Placeholder_dc_status } dc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dc_link*,int ,scalar_t__*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dc_link *VAR_8)
{
 union lane_count_set VAR_9 = { 0 };
 uint8_t VAR_10;
 uint8_t VAR_11;
 uint32_t VAR_12 = 10;
 enum dc_status VAR_13 = VAR_0;
 int VAR_14;
 union max_down_spread VAR_15 = { 0 };


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  VAR_13 = FUNC_0(
    VAR_8,
    VAR_2,
    &VAR_9.raw,
    sizeof(VAR_9));





  if (VAR_13 == VAR_1) {
   VAR_8->cur_link_settings.lane_count = VAR_9.bits.LANE_COUNT_SET;
   break;
  }

  FUNC_1(8);
 }


 FUNC_0(VAR_8, VAR_3,
   &VAR_10, sizeof(VAR_10));

 if (VAR_10 == 0) {



  FUNC_0(VAR_8, VAR_4,
    &VAR_11, sizeof(VAR_11));

  if (VAR_11 < VAR_8->dpcd_caps.edp_supported_link_rates_count) {
   VAR_8->cur_link_settings.link_rate =
    VAR_8->dpcd_caps.edp_supported_link_rates[VAR_11];
   VAR_8->cur_link_settings.link_rate_set = VAR_11;
   VAR_8->cur_link_settings.use_link_rate_set = 1;
  }
 } else {
  VAR_8->cur_link_settings.link_rate = VAR_10;
  VAR_8->cur_link_settings.use_link_rate_set = 0;
 }

 FUNC_0(VAR_8, VAR_5,
   &VAR_15.raw, sizeof(VAR_15));
 VAR_8->cur_link_settings.link_spread =
  VAR_15.bits.MAX_DOWN_SPREAD ?
  VAR_6 : VAR_7;
}
