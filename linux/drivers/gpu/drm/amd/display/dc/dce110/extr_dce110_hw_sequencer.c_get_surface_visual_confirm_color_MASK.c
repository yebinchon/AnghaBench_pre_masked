
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct tg_color {void* color_g_y; void* color_b_cb; void* color_r_cr; } ;
struct TYPE_8__ {int format; } ;
struct TYPE_5__ {TYPE_4__ scl_data; } ;
struct TYPE_7__ {TYPE_2__* tg; } ;
struct pipe_ctx {TYPE_1__ plane_res; TYPE_3__ stream_res; } ;
struct TYPE_6__ {int inst; } ;


 int VAR_0 ;






__attribute__((used)) static void FUNC_0(const struct pipe_ctx *VAR_1,
  struct tg_color *VAR_2)
{
 uint32_t VAR_3 = VAR_0 * (4 - VAR_1->stream_res.tg->inst) / 4;

 switch (VAR_1->plane_res.scl_data.format) {
 case 129:

  VAR_2->color_r_cr = VAR_3;
  break;

 case 130:

  VAR_2->color_b_cb = VAR_3;
  break;
 case 131:

  VAR_2->color_g_y = VAR_3;
  break;
 case 132:

  VAR_2->color_g_y = VAR_3;
  VAR_2->color_r_cr = VAR_3;
  break;
 case 128:

  VAR_2->color_r_cr = VAR_3;
  VAR_2->color_b_cb = VAR_3;
  VAR_2->color_g_y = VAR_3;
  break;
 default:
  break;
 }
}
