
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* tg; } ;
struct pipe_ctx {TYPE_2__ stream_res; } ;
struct drr_params {unsigned int vertical_total_max; unsigned int vertical_total_min; unsigned int vertical_total_mid; unsigned int vertical_total_mid_frame_num; int member_0; } ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* set_static_screen_control ) (TYPE_3__*,unsigned int) ;int (* set_drr ) (TYPE_3__*,struct drr_params*) ;} ;


 int FUNC_0 (TYPE_3__*,struct drr_params*) ;
 int FUNC_1 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct pipe_ctx **VAR_0,
  int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 struct drr_params VAR_7 = {0};

 unsigned int VAR_8 = 0x800;

 VAR_7.vertical_total_max = VAR_3;
 VAR_7.vertical_total_min = VAR_2;
 VAR_7.vertical_total_mid = VAR_4;
 VAR_7.vertical_total_mid_frame_num = VAR_5;





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_0[VAR_6]->stream_res.tg->funcs->set_drr(
   VAR_0[VAR_6]->stream_res.tg, &VAR_7);
  if (VAR_3 != 0 && VAR_2 != 0)
   VAR_0[VAR_6]->stream_res.tg->funcs->set_static_screen_control(
     VAR_0[VAR_6]->stream_res.tg,
     VAR_8);
 }
}
