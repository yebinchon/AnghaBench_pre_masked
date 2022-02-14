
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_20__ {scalar_t__ full; } ;
struct TYPE_15__ {scalar_t__ full; } ;
struct TYPE_14__ {scalar_t__ full; } ;
struct TYPE_18__ {void* full; } ;
struct rv515_watermark {int lb_request_fifo_depth; TYPE_7__ priority_mark; TYPE_7__ priority_mark_max; TYPE_2__ worst_case_latency; TYPE_1__ dbpp; TYPE_7__ num_line_pair; TYPE_7__ active_time; TYPE_5__ consumption_rate; } ;
struct TYPE_16__ {scalar_t__ pm_method; int current_sclk; scalar_t__ dpm_enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ pm; } ;
struct drm_display_mode {int crtc_hdisplay; int clock; int crtc_htotal; } ;
struct TYPE_19__ {struct drm_display_mode mode; int enabled; } ;
struct TYPE_17__ {scalar_t__ full; } ;
struct radeon_crtc {scalar_t__ rmx_type; TYPE_6__ base; TYPE_7__ hsc; TYPE_4__ vsc; } ;
typedef TYPE_7__ fixed20_12 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (TYPE_7__) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (TYPE_7__,TYPE_7__) ;
 void* FUNC_3 (TYPE_7__,TYPE_7__) ;
 int FUNC_4 (TYPE_7__) ;
 int FUNC_5 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_3,
      struct radeon_crtc *VAR_4,
      struct rv515_watermark *VAR_5,
      bool VAR_6)
{
 struct drm_display_mode *VAR_7 = &VAR_4->base.mode;
 fixed20_12 VAR_8, VAR_9, VAR_10;
 fixed20_12 VAR_11, VAR_12, VAR_13, VAR_14;
 fixed20_12 VAR_15, VAR_16, VAR_17, VAR_18;
 fixed20_12 VAR_19;
 u32 VAR_20;

 if (!VAR_4->base.enabled) {

  VAR_5->lb_request_fifo_depth = 4;
  return;
 }


 if ((VAR_3->family >= VAR_0) &&
     (VAR_3->pm.pm_method == VAR_1) && VAR_3->pm.dpm_enabled)
  VAR_20 = FUNC_5(VAR_3, VAR_6);
 else
  VAR_20 = VAR_3->pm.current_sclk;


 VAR_8.full = FUNC_1(100);
 VAR_19.full = FUNC_1(VAR_20);
 VAR_19.full = FUNC_2(VAR_19, VAR_8);

 if (VAR_4->vsc.full > FUNC_1(2))
  VAR_5->num_line_pair.full = FUNC_1(2);
 else
  VAR_5->num_line_pair.full = FUNC_1(1);

 VAR_9.full = FUNC_1(VAR_7->crtc_hdisplay);
 VAR_10.full = FUNC_1(256);
 VAR_8.full = FUNC_2(VAR_9, VAR_10);
 VAR_12.full = FUNC_3(VAR_8, VAR_5->num_line_pair);
 VAR_12.full = FUNC_0(VAR_12);
 if (VAR_8.full < FUNC_1(4)) {
  VAR_5->lb_request_fifo_depth = 4;
 } else {
  VAR_5->lb_request_fifo_depth = FUNC_4(VAR_12);
 }







 VAR_8.full = FUNC_1(VAR_7->clock);
 VAR_9.full = FUNC_1(1000);
 VAR_8.full = FUNC_2(VAR_8, VAR_9);
 VAR_11.full = FUNC_2(VAR_9, VAR_8);
 if (VAR_4->rmx_type != VAR_2) {
  VAR_9.full = FUNC_1(2);
  if (VAR_4->vsc.full > VAR_9.full)
   VAR_9.full = VAR_4->vsc.full;
  VAR_9.full = FUNC_3(VAR_9, VAR_4->hsc);
  VAR_10.full = FUNC_1(2);
  VAR_9.full = FUNC_2(VAR_9, VAR_10);
  VAR_15.full = FUNC_2(VAR_11, VAR_9);
 } else {
  VAR_15.full = VAR_11.full;
 }
 VAR_8.full = FUNC_1(1);
 VAR_5->consumption_rate.full = FUNC_2(VAR_8, VAR_15);







 VAR_8.full = FUNC_1(VAR_4->base.mode.crtc_htotal);
 VAR_16.full = FUNC_3(VAR_8, VAR_11);






 VAR_8.full = FUNC_1(VAR_4->base.mode.crtc_htotal);
 VAR_9.full = FUNC_1(VAR_4->base.mode.crtc_hdisplay);
 VAR_5->active_time.full = FUNC_3(VAR_16, VAR_9);
 VAR_5->active_time.full = FUNC_2(VAR_5->active_time, VAR_8);






 VAR_8.full = FUNC_1(600 * 1000);
 VAR_17.full = FUNC_2(VAR_8, VAR_19);
 VAR_18.full = FUNC_1(1000);
 if (FUNC_4(VAR_5->num_line_pair) > 1) {
  VAR_8.full = FUNC_1(3);
  VAR_5->worst_case_latency.full = FUNC_3(VAR_8, VAR_17);
  VAR_5->worst_case_latency.full += VAR_18.full;
 } else {
  VAR_5->worst_case_latency.full = VAR_17.full + VAR_18.full;
 }
 if ((2+VAR_5->lb_request_fifo_depth) >= FUNC_4(VAR_12)) {
  VAR_13.full = VAR_16.full;
 } else {
  VAR_13.full = FUNC_1(VAR_5->lb_request_fifo_depth - 2);
  VAR_13.full = VAR_12.full - VAR_13.full;
  VAR_13.full = FUNC_3(VAR_13, VAR_17);
  VAR_13.full = VAR_16.full - VAR_13.full;
 }

 VAR_5->dbpp.full = FUNC_1(2 * 16);




 VAR_8.full = FUNC_1(16);
 VAR_5->priority_mark_max.full = FUNC_1(VAR_4->base.mode.crtc_hdisplay);
 VAR_5->priority_mark_max.full = FUNC_2(VAR_5->priority_mark_max, VAR_8);
 VAR_5->priority_mark_max.full = FUNC_0(VAR_5->priority_mark_max);


 VAR_14.full = VAR_13.full - VAR_5->worst_case_latency.full;
 VAR_14.full = FUNC_2(VAR_14, VAR_15);
 if (FUNC_4(VAR_14) > VAR_4->base.mode.crtc_hdisplay) {
  VAR_5->priority_mark.full = VAR_5->priority_mark_max.full;
 } else {
  VAR_8.full = FUNC_1(16);
  VAR_5->priority_mark.full = FUNC_2(VAR_14, VAR_8);
  VAR_5->priority_mark.full = FUNC_0(VAR_5->priority_mark);
  VAR_5->priority_mark.full = VAR_5->priority_mark_max.full - VAR_5->priority_mark.full;
 }
}
