
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct timing_generator {TYPE_1__* funcs; } ;
struct tg_color {int member_0; } ;
struct output_pixel_processor {TYPE_4__* funcs; } ;
struct dc {TYPE_3__* res_pool; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_8__ {int (* opp_set_disp_pattern_generator ) (struct output_pixel_processor*,int ,int ,struct tg_color*,size_t,size_t) ;} ;
struct TYPE_7__ {struct output_pixel_processor** opps; TYPE_2__* res_cap; } ;
struct TYPE_6__ {size_t num_opp; } ;
struct TYPE_5__ {int (* get_optc_source ) (struct timing_generator*,size_t*,size_t*,size_t*) ;int (* get_otg_active_size ) (struct timing_generator*,size_t*,size_t*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dc*,int,struct tg_color*) ;
 int FUNC_2 (struct output_pixel_processor*) ;
 int FUNC_3 (struct timing_generator*,size_t*,size_t*) ;
 int FUNC_4 (struct timing_generator*,size_t*,size_t*,size_t*) ;
 int FUNC_5 (struct output_pixel_processor*,int ,int ,struct tg_color*,size_t,size_t) ;
 int FUNC_6 (struct output_pixel_processor*,int ,int ,struct tg_color*,size_t,size_t) ;

void FUNC_7(
  struct dc *VAR_3,
  struct timing_generator *VAR_4)
{
 enum dc_color_space VAR_5;
 struct tg_color VAR_6 = {0};
 struct output_pixel_processor *VAR_7 = ((void*)0);
 struct output_pixel_processor *VAR_8 = ((void*)0);
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13;


 VAR_5 = VAR_1;
 FUNC_1(VAR_3, VAR_5, &VAR_6);


 VAR_4->funcs->get_otg_active_size(VAR_4,
   &VAR_12,
   &VAR_13);


 VAR_4->funcs->get_optc_source(VAR_4, &VAR_9, &VAR_10, &VAR_11);
 FUNC_0(VAR_10 < VAR_3->res_pool->res_cap->num_opp);
 VAR_7 = VAR_3->res_pool->opps[VAR_10];

 if (VAR_9 == 2) {
  VAR_12 = VAR_12 / 2;
  FUNC_0(VAR_11 < VAR_3->res_pool->res_cap->num_opp);
  VAR_8 = VAR_3->res_pool->opps[VAR_11];
 }

 VAR_7->funcs->opp_set_disp_pattern_generator(
   VAR_7,
   VAR_2,
   VAR_0,
   &VAR_6,
   VAR_12,
   VAR_13);

 if (VAR_9 == 2) {
  VAR_8->funcs->opp_set_disp_pattern_generator(
    VAR_8,
    VAR_2,
    VAR_0,
    &VAR_6,
    VAR_12,
    VAR_13);
 }

 FUNC_2(VAR_7);
}
