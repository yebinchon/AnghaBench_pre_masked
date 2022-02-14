
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videomode {int hback_porch; int hfront_porch; int hsync_len; int vback_porch; int vfront_porch; int vsync_len; int flags; } ;
struct hdmi_video_format {int y_res; int x_res; int packing_mode; } ;
struct TYPE_2__ {int vactive; int hactive; int hback_porch; int hfront_porch; int hsync_len; int vback_porch; int vfront_porch; int vsync_len; int flags; } ;
struct hdmi_config {TYPE_1__ vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

void FUNC_1(struct hdmi_video_format *VAR_3,
  struct videomode *VAR_4, const struct hdmi_config *VAR_5)
{
 FUNC_0("Enter hdmi_wp_video_init_format\n");

 VAR_3->packing_mode = VAR_2;
 VAR_3->y_res = VAR_5->vm.vactive;
 VAR_3->x_res = VAR_5->vm.hactive;

 VAR_4->hback_porch = VAR_5->vm.hback_porch;
 VAR_4->hfront_porch = VAR_5->vm.hfront_porch;
 VAR_4->hsync_len = VAR_5->vm.hsync_len;
 VAR_4->vback_porch = VAR_5->vm.vback_porch;
 VAR_4->vfront_porch = VAR_5->vm.vfront_porch;
 VAR_4->vsync_len = VAR_5->vm.vsync_len;

 VAR_4->flags = VAR_5->vm.flags;

 if (VAR_5->vm.flags & VAR_1) {
  VAR_3->y_res /= 2;
  VAR_4->vback_porch /= 2;
  VAR_4->vfront_porch /= 2;
  VAR_4->vsync_len /= 2;
 }

 if (VAR_5->vm.flags & VAR_0) {
  VAR_3->x_res *= 2;
  VAR_4->hfront_porch *= 2;
  VAR_4->hsync_len *= 2;
  VAR_4->hback_porch *= 2;
 }
}
