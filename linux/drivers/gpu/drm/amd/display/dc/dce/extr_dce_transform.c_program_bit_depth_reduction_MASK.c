
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dce_transform {int dummy; } ;
struct TYPE_2__ {int SPATIAL_DITHER_ENABLED; int TRUNCATE_DEPTH; int HIGHPASS_RANDOM; int RGB_RANDOM; int FRAME_RANDOM; scalar_t__ TRUNCATE_MODE; scalar_t__ TRUNCATE_ENABLED; } ;
struct bit_depth_reduction_params {TYPE_1__ flags; } ;
typedef enum dcp_out_trunc_round_mode { ____Placeholder_dcp_out_trunc_round_mode } dcp_out_trunc_round_mode ;
typedef enum dcp_out_trunc_round_depth { ____Placeholder_dcp_out_trunc_round_depth } dcp_out_trunc_round_depth ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct dce_transform*,int) ;
 int FUNC_3 (struct dce_transform*,int,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct dce_transform*,int,int) ;

__attribute__((used)) static void FUNC_5(
 struct dce_transform *VAR_8,
 enum dc_color_depth VAR_9,
 const struct bit_depth_reduction_params *VAR_10)
{
 enum dcp_out_trunc_round_depth VAR_11;
 enum dcp_out_trunc_round_mode VAR_12;
 bool VAR_13;

 FUNC_0(VAR_9 < VAR_0);

 VAR_13 = VAR_10->flags.SPATIAL_DITHER_ENABLED;

 VAR_11 = VAR_2;
 VAR_12 = VAR_5;

 if (VAR_10->flags.TRUNCATE_ENABLED) {

  VAR_13 = 0;
  VAR_12 = VAR_10->flags.TRUNCATE_MODE ?
        VAR_4 :
        VAR_5;

  if (VAR_10->flags.TRUNCATE_DEPTH == 0 ||
      VAR_10->flags.TRUNCATE_DEPTH == 1)
   VAR_11 = VAR_3;
  else if (VAR_10->flags.TRUNCATE_DEPTH == 2)
   VAR_11 = VAR_1;
  else {




   VAR_11 = VAR_2;
   FUNC_1();
  }
 }

 FUNC_2(VAR_8, VAR_9);
 FUNC_4(VAR_8, VAR_12, VAR_11);
 FUNC_3(VAR_8,
     VAR_13,
     VAR_7,
     VAR_6,
     VAR_10->flags.FRAME_RANDOM,
     VAR_10->flags.RGB_RANDOM,
     VAR_10->flags.HIGHPASS_RANDOM);
}
