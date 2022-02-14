
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timing_generator {TYPE_3__* funcs; } ;
struct TYPE_6__ {struct timing_generator* tg; } ;
struct TYPE_5__ {struct hubp* hubp; } ;
struct pipe_ctx {TYPE_2__ stream_res; TYPE_1__ plane_res; } ;
struct hubp {TYPE_4__* funcs; } ;
struct dc {int dummy; } ;
struct TYPE_8__ {int (* hubp_clear_underflow ) (struct hubp*) ;scalar_t__ (* hubp_get_underflow_status ) (struct hubp*) ;} ;
struct TYPE_7__ {int (* clear_optc_underflow ) (struct timing_generator*) ;scalar_t__ (* is_optc_underflow_occurred ) (struct timing_generator*) ;} ;


 scalar_t__ FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct timing_generator*) ;
 scalar_t__ FUNC_2 (struct hubp*) ;
 int FUNC_3 (struct hubp*) ;

bool FUNC_4(struct dc *VAR_0, struct pipe_ctx *VAR_1)
{
 struct hubp *VAR_2 = VAR_1->plane_res.hubp;
 struct timing_generator *VAR_3 = VAR_1->stream_res.tg;

 if (VAR_3->funcs->is_optc_underflow_occurred(VAR_3)) {
  VAR_3->funcs->clear_optc_underflow(VAR_3);
  return 1;
 }

 if (VAR_2->funcs->hubp_get_underflow_status(VAR_2)) {
  VAR_2->funcs->hubp_clear_underflow(VAR_2);
  return 1;
 }
 return 0;
}
