
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct link_config_limits {int max_bpp; int min_bpp; int min_clock; int max_clock; int min_lane_count; int max_lane_count; } ;
struct intel_dp {int* common_rates; } ;
struct drm_display_mode {int crtc_clock; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int lane_count; int pipe_bpp; int port_clock; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct intel_crtc_state*,int) ;

__attribute__((used)) static int
FUNC_3(struct intel_dp *VAR_1,
      struct intel_crtc_state *VAR_2,
      const struct link_config_limits *VAR_3)
{
 struct drm_display_mode *VAR_4 = &VAR_2->base.adjusted_mode;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_5 = VAR_3->max_bpp; VAR_5 >= VAR_3->min_bpp; VAR_5 -= 2 * 3) {
  int VAR_11 = FUNC_2(VAR_2, VAR_5);

  VAR_8 = FUNC_0(VAR_4->crtc_clock,
         VAR_11);

  for (VAR_6 = VAR_3->min_clock; VAR_6 <= VAR_3->max_clock; VAR_6++) {
   for (VAR_7 = VAR_3->min_lane_count;
        VAR_7 <= VAR_3->max_lane_count;
        VAR_7 <<= 1) {
    VAR_9 = VAR_1->common_rates[VAR_6];
    VAR_10 = FUNC_1(VAR_9,
            VAR_7);

    if (VAR_8 <= VAR_10) {
     VAR_2->lane_count = VAR_7;
     VAR_2->pipe_bpp = VAR_5;
     VAR_2->port_clock = VAR_9;

     return 0;
    }
   }
  }
 }

 return -VAR_0;
}
