
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hfront_porch; int hback_porch; int hsync_len; int vsync_len; int vfront_porch; int vback_porch; int flags; int vactive; int hactive; } ;
struct TYPE_4__ {TYPE_1__ vm; int hdmi_dvi_mode; } ;
struct hdmi_core_vid_config {int data_enable_pol; int hblank; int vblank_osc; int vblank; TYPE_2__ v_fc_config; } ;
struct hdmi_config {TYPE_1__ vm; int hdmi_dvi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct hdmi_core_vid_config *VAR_2,
      const struct hdmi_config *VAR_3)
{
 FUNC_0("hdmi_core_init\n");

 VAR_2->v_fc_config.vm = VAR_3->vm;


 VAR_2->data_enable_pol = 1;
 VAR_2->hblank = VAR_3->vm.hfront_porch +
       VAR_3->vm.hback_porch + VAR_3->vm.hsync_len;
 VAR_2->vblank_osc = 0;
 VAR_2->vblank = VAR_3->vm.vsync_len + VAR_3->vm.vfront_porch +
       VAR_3->vm.vback_porch;
 VAR_2->v_fc_config.hdmi_dvi_mode = VAR_3->hdmi_dvi_mode;

 if (VAR_3->vm.flags & VAR_1) {

  if (VAR_2->vblank % 2 != 0)
   VAR_2->vblank_osc = 1;

  VAR_2->v_fc_config.vm.vactive /= 2;
  VAR_2->vblank /= 2;
  VAR_2->v_fc_config.vm.vfront_porch /= 2;
  VAR_2->v_fc_config.vm.vsync_len /= 2;
  VAR_2->v_fc_config.vm.vback_porch /= 2;
 }

 if (VAR_3->vm.flags & VAR_0) {
  VAR_2->v_fc_config.vm.hactive *= 2;
  VAR_2->hblank *= 2;
  VAR_2->v_fc_config.vm.hfront_porch *= 2;
  VAR_2->v_fc_config.vm.hsync_len *= 2;
  VAR_2->v_fc_config.vm.hback_porch *= 2;
 }
}
