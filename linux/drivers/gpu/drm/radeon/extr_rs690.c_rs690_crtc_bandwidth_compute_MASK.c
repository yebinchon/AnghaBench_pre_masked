
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_22__ {scalar_t__ full; } ;
struct TYPE_18__ {scalar_t__ full; } ;
struct TYPE_17__ {scalar_t__ full; } ;
struct TYPE_15__ {void* full; } ;
struct rs690_watermark {int lb_request_fifo_depth; TYPE_8__ priority_mark; TYPE_8__ priority_mark_max; TYPE_4__ worst_case_latency; TYPE_3__ dbpp; TYPE_8__ num_line_pair; TYPE_8__ active_time; TYPE_1__ consumption_rate; } ;
struct TYPE_20__ {scalar_t__ pm_method; int current_sclk; TYPE_8__ ht_bandwidth; TYPE_8__ k8_bandwidth; TYPE_8__ igp_sideport_mclk; TYPE_8__ sideport_bandwidth; TYPE_8__ sclk; scalar_t__ dpm_enabled; } ;
struct TYPE_16__ {scalar_t__ igp_sideport_enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_6__ pm; TYPE_2__ mc; } ;
struct drm_display_mode {int crtc_hdisplay; int clock; int crtc_htotal; } ;
struct TYPE_19__ {struct drm_display_mode mode; int enabled; } ;
struct TYPE_21__ {scalar_t__ full; } ;
struct radeon_crtc {scalar_t__ rmx_type; TYPE_5__ base; TYPE_8__ hsc; TYPE_7__ vsc; } ;
typedef TYPE_8__ fixed20_12 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (TYPE_8__) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (TYPE_8__,TYPE_8__) ;
 void* FUNC_3 (TYPE_8__,TYPE_8__) ;
 int FUNC_4 (TYPE_8__) ;
 int FUNC_5 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_4,
      struct radeon_crtc *VAR_5,
      struct rs690_watermark *VAR_6,
      bool VAR_7)
{
 struct drm_display_mode *VAR_8 = &VAR_5->base.mode;
 fixed20_12 VAR_9, VAR_10, VAR_11;
 fixed20_12 VAR_12, VAR_13, VAR_14, VAR_15;
 fixed20_12 VAR_16, VAR_17, VAR_18, VAR_19;
 fixed20_12 VAR_20, VAR_21, VAR_22;
 u32 VAR_23;

 if (!VAR_5->base.enabled) {

  VAR_6->lb_request_fifo_depth = 4;
  return;
 }

 if (((VAR_4->family == VAR_0) || (VAR_4->family == VAR_1)) &&
     (VAR_4->pm.pm_method == VAR_2) && VAR_4->pm.dpm_enabled)
  VAR_23 = FUNC_5(VAR_4, VAR_7);
 else
  VAR_23 = VAR_4->pm.current_sclk;


 VAR_9.full = FUNC_1(100);
 VAR_20.full = FUNC_1(VAR_23);
 VAR_20.full = FUNC_2(VAR_20, VAR_9);


 VAR_9.full = FUNC_1(16);
 VAR_21.full = FUNC_2(VAR_4->pm.sclk, VAR_9);

 if (VAR_5->vsc.full > FUNC_1(2))
  VAR_6->num_line_pair.full = FUNC_1(2);
 else
  VAR_6->num_line_pair.full = FUNC_1(1);

 VAR_10.full = FUNC_1(VAR_8->crtc_hdisplay);
 VAR_11.full = FUNC_1(256);
 VAR_9.full = FUNC_2(VAR_10, VAR_11);
 VAR_13.full = FUNC_3(VAR_9, VAR_6->num_line_pair);
 VAR_13.full = FUNC_0(VAR_13);
 if (VAR_9.full < FUNC_1(4)) {
  VAR_6->lb_request_fifo_depth = 4;
 } else {
  VAR_6->lb_request_fifo_depth = FUNC_4(VAR_13);
 }







 VAR_9.full = FUNC_1(VAR_8->clock);
 VAR_10.full = FUNC_1(1000);
 VAR_9.full = FUNC_2(VAR_9, VAR_10);
 VAR_12.full = FUNC_2(VAR_10, VAR_9);
 if (VAR_5->rmx_type != VAR_3) {
  VAR_10.full = FUNC_1(2);
  if (VAR_5->vsc.full > VAR_10.full)
   VAR_10.full = VAR_5->vsc.full;
  VAR_10.full = FUNC_3(VAR_10, VAR_5->hsc);
  VAR_11.full = FUNC_1(2);
  VAR_10.full = FUNC_2(VAR_10, VAR_11);
  VAR_16.full = FUNC_2(VAR_12, VAR_10);
 } else {
  VAR_16.full = VAR_12.full;
 }
 VAR_9.full = FUNC_1(1);
 VAR_6->consumption_rate.full = FUNC_2(VAR_9, VAR_16);







 VAR_9.full = FUNC_1(VAR_5->base.mode.crtc_htotal);
 VAR_17.full = FUNC_3(VAR_9, VAR_12);






 VAR_9.full = FUNC_1(VAR_5->base.mode.crtc_htotal);
 VAR_10.full = FUNC_1(VAR_5->base.mode.crtc_hdisplay);
 VAR_6->active_time.full = FUNC_3(VAR_17, VAR_10);
 VAR_6->active_time.full = FUNC_2(VAR_6->active_time, VAR_9);


 VAR_22 = VAR_21;
 if (VAR_4->mc.igp_sideport_enabled) {
  if (VAR_22.full > VAR_4->pm.sideport_bandwidth.full &&
   VAR_4->pm.sideport_bandwidth.full)
   VAR_22 = VAR_4->pm.sideport_bandwidth;
  VAR_19.full = FUNC_1(370 * 800);
  VAR_9.full = FUNC_1(1000);
  VAR_10.full = FUNC_2(VAR_4->pm.igp_sideport_mclk, VAR_9);
  VAR_19.full = FUNC_2(VAR_19, VAR_10);
  VAR_19.full = FUNC_3(VAR_19, VAR_9);
 } else {
  if (VAR_22.full > VAR_4->pm.k8_bandwidth.full &&
   VAR_4->pm.k8_bandwidth.full)
   VAR_22 = VAR_4->pm.k8_bandwidth;
  if (VAR_22.full > VAR_4->pm.ht_bandwidth.full &&
   VAR_4->pm.ht_bandwidth.full)
   VAR_22 = VAR_4->pm.ht_bandwidth;
  VAR_19.full = FUNC_1(5000);
 }


 VAR_9.full = FUNC_1(16);
 VAR_20.full = FUNC_3(VAR_22, VAR_9);
 VAR_9.full = FUNC_1(1000);
 VAR_20.full = FUNC_2(VAR_9, VAR_20);





 VAR_9.full = FUNC_1(256 * 13);
 VAR_18.full = FUNC_3(VAR_20, VAR_9);
 VAR_9.full = FUNC_1(10);
 VAR_18.full = FUNC_2(VAR_18, VAR_9);
 if (FUNC_4(VAR_6->num_line_pair) > 1) {
  VAR_9.full = FUNC_1(3);
  VAR_6->worst_case_latency.full = FUNC_3(VAR_9, VAR_18);
  VAR_6->worst_case_latency.full += VAR_19.full;
 } else {
  VAR_9.full = FUNC_1(2);
  VAR_6->worst_case_latency.full = FUNC_3(VAR_9, VAR_18);
  VAR_6->worst_case_latency.full += VAR_19.full;
 }
 if ((2+VAR_6->lb_request_fifo_depth) >= FUNC_4(VAR_13)) {
  VAR_14.full = VAR_17.full;
 } else {
  VAR_14.full = FUNC_1(VAR_6->lb_request_fifo_depth - 2);
  VAR_14.full = VAR_13.full - VAR_14.full;
  VAR_14.full = FUNC_3(VAR_14, VAR_18);
  VAR_14.full = VAR_17.full - VAR_14.full;
 }

 VAR_6->dbpp.full = FUNC_1(4 * 8);




 VAR_9.full = FUNC_1(16);
 VAR_6->priority_mark_max.full = FUNC_1(VAR_5->base.mode.crtc_hdisplay);
 VAR_6->priority_mark_max.full = FUNC_2(VAR_6->priority_mark_max, VAR_9);
 VAR_6->priority_mark_max.full = FUNC_0(VAR_6->priority_mark_max);


 VAR_15.full = VAR_14.full - VAR_6->worst_case_latency.full;
 VAR_15.full = FUNC_2(VAR_15, VAR_16);
 if (FUNC_4(VAR_15) > VAR_5->base.mode.crtc_hdisplay) {
  VAR_6->priority_mark.full = FUNC_1(10);
 } else {
  VAR_9.full = FUNC_1(16);
  VAR_6->priority_mark.full = FUNC_2(VAR_15, VAR_9);
  VAR_6->priority_mark.full = FUNC_0(VAR_6->priority_mark);
  VAR_6->priority_mark.full = VAR_6->priority_mark_max.full - VAR_6->priority_mark.full;
 }
}
