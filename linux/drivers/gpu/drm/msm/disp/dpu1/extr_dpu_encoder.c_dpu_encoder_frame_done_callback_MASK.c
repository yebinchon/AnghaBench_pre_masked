
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int dummy; } ;
struct dpu_encoder_virt {unsigned int num_phys_encs; int crtc_frame_event_cb_data; int (* crtc_frame_event_cb ) (int ,int) ;int frame_done_timer; int frame_done_timeout_ms; int * frame_busy_mask; struct dpu_encoder_phys** phys_encs; } ;
struct dpu_encoder_phys {int intf_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_encoder*,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 struct dpu_encoder_virt* FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (int ,unsigned int,int ) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void FUNC_10(
  struct drm_encoder *VAR_4,
  struct dpu_encoder_phys *VAR_5, u32 VAR_6)
{
 struct dpu_encoder_virt *VAR_7 = FUNC_7(VAR_4);
 unsigned int VAR_8;

 if (VAR_6 & (VAR_0
   | VAR_1
   | VAR_2)) {

  if (!VAR_7->frame_busy_mask[0]) {




   FUNC_9(FUNC_0(VAR_4),
     VAR_6, VAR_5->intf_idx);
   return;
  }


  for (VAR_8 = 0; VAR_8 < VAR_7->num_phys_encs; VAR_8++) {
   if (VAR_7->phys_encs[VAR_8] == VAR_5) {
    FUNC_8(FUNC_0(VAR_4), VAR_8,
      VAR_7->frame_busy_mask[0]);
    FUNC_2(VAR_8, VAR_7->frame_busy_mask);
   }
  }

  if (!VAR_7->frame_busy_mask[0]) {
   FUNC_1(&VAR_7->frame_done_timeout_ms, 0);
   FUNC_3(&VAR_7->frame_done_timer);

   FUNC_4(VAR_4,
     VAR_3);

   if (VAR_7->crtc_frame_event_cb)
    VAR_7->crtc_frame_event_cb(
     VAR_7->crtc_frame_event_cb_data,
     VAR_6);
  }
 } else {
  if (VAR_7->crtc_frame_event_cb)
   VAR_7->crtc_frame_event_cb(
    VAR_7->crtc_frame_event_cb_data, VAR_6);
 }
}
