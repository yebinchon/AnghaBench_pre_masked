
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ enable_adjustment; } ;
struct dc_plane_state {scalar_t__ format; TYPE_2__ coeff_reduction_factor; TYPE_1__ input_csc_color_matrix; } ;
struct dc_bias_and_scale {int scale_blue; int scale_red; int scale_green; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__,int ) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(struct dc_bias_and_scale *VAR_2,
  const struct dc_plane_state *VAR_3)
{
 if (VAR_3->format >= VAR_1
   && VAR_3->format != VAR_0
   && VAR_3->input_csc_color_matrix.enable_adjustment
   && VAR_3->coeff_reduction_factor.value != 0) {
  VAR_2->scale_blue = FUNC_2(
   FUNC_1(VAR_3->coeff_reduction_factor,
     FUNC_0(256, 255)),
    2,
    13);
  VAR_2->scale_red = VAR_2->scale_blue;
  VAR_2->scale_green = VAR_2->scale_blue;
 } else {
  VAR_2->scale_blue = 0x2000;
  VAR_2->scale_red = 0x2000;
  VAR_2->scale_green = 0x2000;
 }
}
