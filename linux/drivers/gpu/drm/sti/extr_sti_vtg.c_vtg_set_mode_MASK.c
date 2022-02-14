
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_vtg_sync_params {int hsync; int vsync_line_top; int vsync_line_bot; int vsync_off_top; int vsync_off_bot; } ;
struct sti_vtg {scalar_t__ regs; } ;
struct drm_display_mode {int htotal; int vtotal; } ;
struct TYPE_2__ {scalar_t__ bot_v_hd; scalar_t__ top_v_hd; scalar_t__ bot_v_vd; scalar_t__ top_v_vd; scalar_t__ h_hd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_0 (struct sti_vtg_sync_params*,int ,struct drm_display_mode const*) ;
 int FUNC_1 (scalar_t__,struct drm_display_mode const*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sti_vtg *VAR_12,
    int VAR_13,
    struct sti_vtg_sync_params *VAR_14,
    const struct drm_display_mode *VAR_15)
{
 unsigned int VAR_16;


 FUNC_2(VAR_15->htotal, VAR_12->regs + VAR_3);


 FUNC_2(VAR_15->vtotal * 2, VAR_12->regs + VAR_4);


 FUNC_1(VAR_12->regs, VAR_15);


 FUNC_0(&VAR_14[VAR_10 - 1], VAR_2, VAR_15);


 FUNC_0(&VAR_14[VAR_8 - 1], 0, VAR_15);


 FUNC_0(&VAR_14[VAR_9 - 1], VAR_0, VAR_15);


 FUNC_0(&VAR_14[VAR_7 - 1], VAR_1, VAR_15);


 for (VAR_16 = 0; VAR_16 < VAR_5 ; VAR_16++) {
  FUNC_2(VAR_14[VAR_16].hsync,
         VAR_12->regs + VAR_11[VAR_16].h_hd);
  FUNC_2(VAR_14[VAR_16].vsync_line_top,
         VAR_12->regs + VAR_11[VAR_16].top_v_vd);
  FUNC_2(VAR_14[VAR_16].vsync_line_bot,
         VAR_12->regs + VAR_11[VAR_16].bot_v_vd);
  FUNC_2(VAR_14[VAR_16].vsync_off_top,
         VAR_12->regs + VAR_11[VAR_16].top_v_hd);
  FUNC_2(VAR_14[VAR_16].vsync_off_bot,
         VAR_12->regs + VAR_11[VAR_16].bot_v_hd);
 }


 FUNC_2(VAR_13, VAR_12->regs + VAR_6);
}
