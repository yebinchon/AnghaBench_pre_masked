
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct link_config_limits {int min_bpp; int max_bpp; int min_clock; int max_clock; int max_lane_count; int min_lane_count; } ;
struct TYPE_3__ {int bpc; } ;
struct TYPE_4__ {scalar_t__ test_type; int test_lane_count; int test_link_rate; TYPE_1__ test_data; } ;
struct intel_dp {TYPE_2__ compliance; int num_common_rates; int common_rates; } ;
struct intel_crtc_state {int dither_force_disable; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct intel_dp*,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(struct intel_dp *VAR_1,
      struct intel_crtc_state *VAR_2,
      struct link_config_limits *VAR_3)
{

 if (VAR_1->compliance.test_data.bpc != 0) {
  int VAR_4 = 3 * VAR_1->compliance.test_data.bpc;

  VAR_3->min_bpp = VAR_3->max_bpp = VAR_4;
  VAR_2->dither_force_disable = VAR_4 == 6 * 3;

  FUNC_0("Setting pipe_bpp to %d\n", VAR_4);
 }


 if (VAR_1->compliance.test_type == VAR_0) {
  int VAR_5;




  if (FUNC_1(VAR_1, VAR_1->compliance.test_link_rate,
            VAR_1->compliance.test_lane_count)) {
   VAR_5 = FUNC_2(VAR_1->common_rates,
          VAR_1->num_common_rates,
          VAR_1->compliance.test_link_rate);
   if (VAR_5 >= 0)
    VAR_3->min_clock = VAR_3->max_clock = VAR_5;
   VAR_3->min_lane_count = VAR_3->max_lane_count =
    VAR_1->compliance.test_lane_count;
  }
 }
}
