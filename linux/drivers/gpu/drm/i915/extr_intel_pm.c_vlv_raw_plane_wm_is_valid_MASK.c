
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vlv_fifo_state {scalar_t__* plane; } ;
struct TYPE_3__ {struct vlv_fifo_state fifo_state; struct g4x_pipe_wm* raw; } ;
struct TYPE_4__ {TYPE_1__ vlv; } ;
struct intel_crtc_state {TYPE_2__ wm; } ;
struct g4x_pipe_wm {scalar_t__* plane; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;



__attribute__((used)) static bool FUNC_0(const struct intel_crtc_state *VAR_0,
          enum plane_id VAR_1, int VAR_2)
{
 const struct g4x_pipe_wm *VAR_3 =
  &VAR_0->wm.vlv.raw[VAR_2];
 const struct vlv_fifo_state *VAR_4 =
  &VAR_0->wm.vlv.fifo_state;

 return VAR_3->plane[VAR_1] <= VAR_4->plane[VAR_1];
}
