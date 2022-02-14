
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int num_crtc; TYPE_1__** crtcs; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
typedef enum amdgpu_interrupt_state { ____Placeholder_amdgpu_interrupt_state } amdgpu_interrupt_state ;
struct TYPE_9__ {int function; } ;
struct TYPE_7__ {int vsync_timer_enabled; TYPE_3__ vblank_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_4,
       int VAR_5,
       enum amdgpu_interrupt_state VAR_6)
{
 if (VAR_5 >= VAR_4->mode_info.num_crtc || !VAR_4->mode_info.crtcs[VAR_5]) {
  FUNC_0("invalid crtc %d\n", VAR_5);
  return;
 }

 if (VAR_6 && !VAR_4->mode_info.crtcs[VAR_5]->vsync_timer_enabled) {
  FUNC_0("Enable software vsync timer\n");
  FUNC_2(&VAR_4->mode_info.crtcs[VAR_5]->vblank_timer,
        VAR_0, VAR_2);
  FUNC_3(&VAR_4->mode_info.crtcs[VAR_5]->vblank_timer,
        VAR_1);
  VAR_4->mode_info.crtcs[VAR_5]->vblank_timer.function =
   VAR_3;
  FUNC_4(&VAR_4->mode_info.crtcs[VAR_5]->vblank_timer,
         VAR_1, VAR_2);
 } else if (!VAR_6 && VAR_4->mode_info.crtcs[VAR_5]->vsync_timer_enabled) {
  FUNC_0("Disable software vsync timer\n");
  FUNC_1(&VAR_4->mode_info.crtcs[VAR_5]->vblank_timer);
 }

 VAR_4->mode_info.crtcs[VAR_5]->vsync_timer_enabled = VAR_6;
 FUNC_0("[FM]set crtc %d vblank interrupt state %d\n", VAR_5, VAR_6);
}
