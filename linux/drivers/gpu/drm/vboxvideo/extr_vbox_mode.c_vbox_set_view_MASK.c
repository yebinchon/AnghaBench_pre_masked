
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbva_infoview {int view_index; scalar_t__ max_screen_size; scalar_t__ view_size; scalar_t__ view_offset; } ;
struct vbox_private {int guest_pool; scalar_t__ available_vram_size; } ;
struct vbox_crtc {int crtc_id; scalar_t__ fb_offset; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct vbox_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vbva_infoview* FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,struct vbva_infoview*) ;
 int FUNC_2 (int ,struct vbva_infoview*) ;
 struct vbox_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_4)
{
 struct vbox_crtc *VAR_5 = FUNC_3(VAR_4);
 struct vbox_private *VAR_6 = VAR_4->dev->dev_private;
 struct vbva_infoview *VAR_7;
 VAR_7 = FUNC_0(VAR_6->guest_pool, sizeof(*VAR_7),
          VAR_1, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->view_index = VAR_5->crtc_id;
 VAR_7->view_offset = VAR_5->fb_offset;
 VAR_7->view_size = VAR_6->available_vram_size - VAR_5->fb_offset +
         VAR_5->crtc_id * VAR_3;
 VAR_7->max_screen_size = VAR_6->available_vram_size - VAR_5->fb_offset;

 FUNC_2(VAR_6->guest_pool, VAR_7);
 FUNC_1(VAR_6->guest_pool, VAR_7);

 return 0;
}
