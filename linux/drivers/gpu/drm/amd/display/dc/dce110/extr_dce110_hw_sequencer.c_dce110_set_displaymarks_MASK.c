
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct TYPE_15__ {TYPE_9__* mi; } ;
struct pipe_ctx {TYPE_5__ plane_res; int * stream; } ;
struct TYPE_16__ {int * urgent_wm_ns; int * stutter_exit_wm_ns; int * nbp_state_change_wm_ns; int * stutter_entry_wm_ns; } ;
struct TYPE_17__ {TYPE_6__ dce; } ;
struct TYPE_18__ {TYPE_7__ bw; } ;
struct TYPE_12__ {struct pipe_ctx* pipe_ctx; } ;
struct dc_state {TYPE_8__ bw_ctx; TYPE_2__ res_ctx; } ;
struct dc {TYPE_3__* bw_vbios; TYPE_1__* res_pool; } ;
struct TYPE_19__ {TYPE_4__* funcs; } ;
struct TYPE_14__ {int (* mem_input_program_chroma_display_marks ) (TYPE_9__*,int ,int ,int ,int ) ;int (* mem_input_program_display_marks ) (TYPE_9__*,int ,int ,int ,int ,int ) ;} ;
struct TYPE_13__ {int blackout_duration; } ;
struct TYPE_11__ {unsigned int underlay_pipe_index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_9__*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_9__*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 const struct dc *VAR_1,
 struct dc_state *VAR_2)
{
 uint8_t VAR_3, VAR_4;
 unsigned int VAR_5 = VAR_1->res_pool->underlay_pipe_index;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct pipe_ctx *VAR_6 = &VAR_2->res_ctx.pipe_ctx[VAR_3];
  uint32_t VAR_7;

  if (VAR_6->stream == ((void*)0))
   continue;

  VAR_7 = FUNC_0(
   VAR_1->bw_vbios->blackout_duration, VAR_6->stream);
  VAR_6->plane_res.mi->funcs->mem_input_program_display_marks(
   VAR_6->plane_res.mi,
   VAR_2->bw_ctx.bw.dce.nbp_state_change_wm_ns[VAR_4],
   VAR_2->bw_ctx.bw.dce.stutter_exit_wm_ns[VAR_4],
   VAR_2->bw_ctx.bw.dce.stutter_entry_wm_ns[VAR_4],
   VAR_2->bw_ctx.bw.dce.urgent_wm_ns[VAR_4],
   VAR_7);
  if (VAR_3 == VAR_5) {
   VAR_4++;
   VAR_6->plane_res.mi->funcs->mem_input_program_chroma_display_marks(
    VAR_6->plane_res.mi,
    VAR_2->bw_ctx.bw.dce.nbp_state_change_wm_ns[VAR_4],
    VAR_2->bw_ctx.bw.dce.stutter_exit_wm_ns[VAR_4],
    VAR_2->bw_ctx.bw.dce.urgent_wm_ns[VAR_4],
    VAR_7);
  }
  VAR_4++;
 }
}
