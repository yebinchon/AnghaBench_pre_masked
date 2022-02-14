
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource_pool {int underlay_pipe_index; } ;
struct resource_context {TYPE_3__* pipe_ctx; } ;
struct dce_watermarks {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
struct TYPE_7__ {TYPE_4__* mi; } ;
struct TYPE_8__ {TYPE_2__ plane_res; int * stream; } ;
struct TYPE_6__ {int (* mem_input_program_chroma_display_marks ) (TYPE_4__*,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,int ) ;int (* mem_input_program_display_marks ) (TYPE_4__*,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,int ) ;
 int FUNC_1 (TYPE_4__*,struct dce_watermarks,struct dce_watermarks,struct dce_watermarks,int ) ;

void FUNC_2(
  struct resource_context *VAR_3,
  const struct resource_pool *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4->underlay_pipe_index;
 struct dce_watermarks VAR_7 = {
  VAR_1, VAR_1, VAR_1, VAR_1 };
 struct dce_watermarks VAR_8 = {
  VAR_2, VAR_2, VAR_2, VAR_2 };
 struct dce_watermarks VAR_9 = { 0, 0, 0, 0};

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->pipe_ctx[VAR_5].stream == ((void*)0) || VAR_3->pipe_ctx[VAR_5].plane_res.mi == ((void*)0))
   continue;

  VAR_3->pipe_ctx[VAR_5].plane_res.mi->funcs->mem_input_program_display_marks(
    VAR_3->pipe_ctx[VAR_5].plane_res.mi,
    VAR_8,
    VAR_7,
    VAR_9,
    VAR_7,
    VAR_1);

  if (VAR_5 == VAR_6)
   VAR_3->pipe_ctx[VAR_5].plane_res.mi->funcs->mem_input_program_chroma_display_marks(
    VAR_3->pipe_ctx[VAR_5].plane_res.mi,
    VAR_8,
    VAR_7,
    VAR_7,
    VAR_1);

 }
}
