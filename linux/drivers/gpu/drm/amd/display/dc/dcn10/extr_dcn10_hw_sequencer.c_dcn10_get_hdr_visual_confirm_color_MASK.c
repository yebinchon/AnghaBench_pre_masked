
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tg_color {int color_r_cr; int color_b_cb; int color_g_y; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_6__ {TYPE_1__ scl_data; } ;
struct pipe_ctx {TYPE_4__* stream; TYPE_2__ plane_res; struct pipe_ctx* top_pipe; } ;
struct TYPE_8__ {TYPE_3__* out_transfer_func; } ;
struct TYPE_7__ {int tf; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(
  struct pipe_ctx *VAR_3,
  struct tg_color *VAR_4)
{
 uint32_t VAR_5 = VAR_0;


 struct pipe_ctx *VAR_6 = VAR_3;

 while (VAR_6->top_pipe != ((void*)0))
  VAR_6 = VAR_6->top_pipe;

 switch (VAR_6->plane_res.scl_data.format) {
 case 129:
  if (VAR_6->stream->out_transfer_func->tf == VAR_2) {

   VAR_4->color_r_cr = VAR_5;
  }
  break;
 case 128:
  if (VAR_6->stream->out_transfer_func->tf == VAR_2) {

   VAR_4->color_b_cb = VAR_5;
  } else if (VAR_6->stream->out_transfer_func->tf == VAR_1) {

   VAR_4->color_g_y = VAR_5;
  }
  break;
 default:

  VAR_4->color_r_cr = VAR_5/2;
  VAR_4->color_b_cb = VAR_5/2;
  VAR_4->color_g_y = VAR_5/2;
  break;
 }
}
