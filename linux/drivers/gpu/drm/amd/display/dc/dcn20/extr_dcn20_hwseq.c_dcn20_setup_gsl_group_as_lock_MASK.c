
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int gsl_group; TYPE_5__* tg; } ;
struct pipe_ctx {TYPE_4__ stream_res; } ;
struct gsl_params {int gsl0_en; int gsl1_en; int gsl2_en; int gsl_master_en; } ;
struct dc {TYPE_2__* res_pool; } ;
struct TYPE_11__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {int (* set_gsl_source_select ) (TYPE_5__*,int,int) ;int (* set_gsl ) (TYPE_5__*,struct gsl_params*) ;} ;
struct TYPE_7__ {int gsl_0; int gsl_1; int gsl_2; } ;
struct TYPE_8__ {TYPE_1__ gsl_groups; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dc const*) ;
 int FUNC_3 (struct gsl_params*,int ,int) ;
 int FUNC_4 (TYPE_5__*,struct gsl_params*) ;
 int FUNC_5 (TYPE_5__*,int,int) ;

void FUNC_6(
  const struct dc *VAR_0,
  struct pipe_ctx *VAR_1,
  bool VAR_2)
{
 struct gsl_params VAR_3;
 int VAR_4;

 FUNC_3(&VAR_3, 0, sizeof(struct gsl_params));

 if (VAR_2) {



  if (VAR_1->stream_res.gsl_group > 0)
   return;

  VAR_4 = FUNC_2(VAR_0);
  FUNC_0(VAR_4 != 0);
  VAR_1->stream_res.gsl_group = VAR_4;


  switch (VAR_4) {
  case 1:
   VAR_3.gsl0_en = 1;
   VAR_0->res_pool->gsl_groups.gsl_0 = 1;
   break;
  case 2:
   VAR_3.gsl1_en = 1;
   VAR_0->res_pool->gsl_groups.gsl_1 = 1;
   break;
  case 3:
   VAR_3.gsl2_en = 1;
   VAR_0->res_pool->gsl_groups.gsl_2 = 1;
   break;
  default:
   FUNC_1();
   return;
  }
  VAR_3.gsl_master_en = 1;
 } else {
  VAR_4 = VAR_1->stream_res.gsl_group;
  if (VAR_4 == 0)
   return;

  VAR_1->stream_res.gsl_group = 0;


  switch (VAR_4) {
  case 1:
   VAR_3.gsl0_en = 0;
   VAR_0->res_pool->gsl_groups.gsl_0 = 0;
   break;
  case 2:
   VAR_3.gsl1_en = 0;
   VAR_0->res_pool->gsl_groups.gsl_1 = 0;
   break;
  case 3:
   VAR_3.gsl2_en = 0;
   VAR_0->res_pool->gsl_groups.gsl_2 = 0;
   break;
  default:
   FUNC_1();
   return;
  }
  VAR_3.gsl_master_en = 0;
 }


 if (VAR_1->stream_res.tg->funcs->set_gsl != ((void*)0) &&
  VAR_1->stream_res.tg->funcs->set_gsl_source_select != ((void*)0)) {
  VAR_1->stream_res.tg->funcs->set_gsl(
   VAR_1->stream_res.tg,
   &VAR_3);

  VAR_1->stream_res.tg->funcs->set_gsl_source_select(
   VAR_1->stream_res.tg, VAR_4, VAR_2 ? 4 : 0);
 } else
  FUNC_1();
}
