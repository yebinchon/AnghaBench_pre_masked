
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pwl_result_data {scalar_t__ red_reg; scalar_t__ green_reg; scalar_t__ blue_reg; scalar_t__ delta_red_reg; scalar_t__ delta_green_reg; scalar_t__ delta_blue_reg; } ;
struct pwl_params {scalar_t__ hw_points_num; struct pwl_result_data* rgb_resulted; } ;
struct TYPE_2__ {int ctx; } ;
struct dce_transform {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__ const,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_1 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dce_transform *VAR_4,
  const struct pwl_params *VAR_5)
{
 uint32_t VAR_6 = 0;

 FUNC_1(
  VAR_6,
  7,
  VAR_0,
  VAR_0);

 FUNC_0(VAR_4->base.ctx,
  VAR_3, VAR_6);

 FUNC_0(VAR_4->base.ctx,
  VAR_2, 0);


 {
  const uint32_t VAR_7 = VAR_1;
  uint32_t VAR_8 = 0;
  const struct pwl_result_data *VAR_9 =
    VAR_5->rgb_resulted;

  while (VAR_8 != VAR_5->hw_points_num) {
   FUNC_0(VAR_4->base.ctx, VAR_7, VAR_9->red_reg);
   FUNC_0(VAR_4->base.ctx, VAR_7, VAR_9->green_reg);
   FUNC_0(VAR_4->base.ctx, VAR_7, VAR_9->blue_reg);

   FUNC_0(VAR_4->base.ctx, VAR_7,
    VAR_9->delta_red_reg);
   FUNC_0(VAR_4->base.ctx, VAR_7,
    VAR_9->delta_green_reg);
   FUNC_0(VAR_4->base.ctx, VAR_7,
    VAR_9->delta_blue_reg);

   ++VAR_9;
   ++VAR_8;
  }
 }
}
