
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dce110_opp {TYPE_1__* opp_mask; } ;
struct TYPE_4__ {scalar_t__ SPATIAL_DITHER_ENABLED; int SPATIAL_DITHER_DEPTH; int FRAME_RANDOM; int HIGHPASS_RANDOM; int RGB_RANDOM; int SPATIAL_DITHER_MODE; } ;
struct bit_depth_reduction_params {TYPE_2__ flags; int b_seed_value; int g_seed_value; int r_seed_value; } ;
struct TYPE_3__ {scalar_t__ FMT_SPATIAL_DITHER_FRAME_COUNTER_BIT_SWAP; scalar_t__ FMT_SPATIAL_DITHER_FRAME_COUNTER_MAX; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_3(
 struct dce110_opp *VAR_17,
 const struct bit_depth_reduction_params *VAR_18)
{

 FUNC_2(VAR_0,
  VAR_12, 0,
  VAR_11, 0,
  VAR_15, 0);

 FUNC_2(VAR_0,
  VAR_6, 0,
  VAR_5, 0,
  VAR_10, 0);

 FUNC_0(VAR_0,
  VAR_16, 0);


 if (VAR_18->flags.SPATIAL_DITHER_ENABLED == 0 ||
  VAR_18->flags.SPATIAL_DITHER_DEPTH == 2)
  return;



 if (VAR_17->opp_mask->FMT_SPATIAL_DITHER_FRAME_COUNTER_MAX &&
   VAR_17->opp_mask->FMT_SPATIAL_DITHER_FRAME_COUNTER_BIT_SWAP) {
  if (VAR_18->flags.FRAME_RANDOM == 1) {
   if (VAR_18->flags.SPATIAL_DITHER_DEPTH == 0 ||
   VAR_18->flags.SPATIAL_DITHER_DEPTH == 1) {
    FUNC_1(VAR_1,
     VAR_14, 15,
     VAR_13, 2);
   } else if (VAR_18->flags.SPATIAL_DITHER_DEPTH == 2) {
    FUNC_1(VAR_1,
     VAR_14, 3,
     VAR_13, 1);
   } else
    return;
  } else {
   FUNC_1(VAR_1,
     VAR_14, 0,
     VAR_13, 0);
  }
 }



 FUNC_0(VAR_4,
   VAR_9, VAR_18->r_seed_value);

 FUNC_0(VAR_3,
   VAR_8, VAR_18->g_seed_value);

 FUNC_0(VAR_2,
   VAR_7, VAR_18->b_seed_value);
 FUNC_2(VAR_0,
  VAR_6, VAR_18->flags.HIGHPASS_RANDOM,
  VAR_5, VAR_18->flags.FRAME_RANDOM,
  VAR_10, VAR_18->flags.RGB_RANDOM);






 FUNC_2(VAR_0,
  VAR_11, VAR_18->flags.SPATIAL_DITHER_DEPTH,
  VAR_15, VAR_18->flags.SPATIAL_DITHER_MODE,
  VAR_12, 1);
}
