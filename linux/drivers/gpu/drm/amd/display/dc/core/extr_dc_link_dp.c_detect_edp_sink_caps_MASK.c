
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int supported_link_rates ;
struct TYPE_10__ {scalar_t__ link_rate; } ;
struct TYPE_6__ {scalar_t__ raw; } ;
struct TYPE_9__ {size_t edp_supported_link_rates_count; int* edp_supported_link_rates; TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_5__ reported_link_cap; TYPE_5__ verified_link_cap; TYPE_4__ dpcd_caps; TYPE_3__* dc; } ;
typedef enum dc_link_rate { ____Placeholder_dc_link_rate } dc_link_rate ;
struct TYPE_7__ {scalar_t__ optimize_edp_link_rate; } ;
struct TYPE_8__ {TYPE_2__ config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dc_link*,int ,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (struct dc_link*) ;

void FUNC_4(struct dc_link *VAR_3)
{
 uint8_t VAR_4[16];
 uint32_t VAR_5;
 uint32_t VAR_6;
 enum dc_link_rate VAR_7 = VAR_2;

 FUNC_3(VAR_3);
 VAR_3->dpcd_caps.edp_supported_link_rates_count = 0;
 FUNC_2(VAR_4, 0, sizeof(VAR_4));

 if (VAR_3->dpcd_caps.dpcd_rev.raw >= VAR_0 &&
   (VAR_3->dc->config.optimize_edp_link_rate ||
   VAR_3->reported_link_cap.link_rate == VAR_2)) {

  FUNC_0(VAR_3, VAR_1,
       VAR_4, sizeof(VAR_4));

  for (VAR_5 = 0; VAR_5 < 16; VAR_5 += 2) {


   VAR_6 = (VAR_4[VAR_5+1] * 0x100 +
          VAR_4[VAR_5]) * 200;

   if (VAR_6 != 0) {
    VAR_7 = FUNC_1(VAR_6);
    VAR_3->dpcd_caps.edp_supported_link_rates[VAR_3->dpcd_caps.edp_supported_link_rates_count] = VAR_7;
    VAR_3->dpcd_caps.edp_supported_link_rates_count++;

    if (VAR_3->reported_link_cap.link_rate < VAR_7)
     VAR_3->reported_link_cap.link_rate = VAR_7;
   }
  }
 }
 VAR_3->verified_link_cap = VAR_3->reported_link_cap;
}
