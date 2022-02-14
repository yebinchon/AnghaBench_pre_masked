
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timing_generator {scalar_t__ inst; int ctx; } ;
struct dcp_gsl_params {scalar_t__ gsl_master; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (int ,int,int ,int,int ,int,int ,int ,int ,int ,int ,int ,int ,int) ;
 int VAR_4 ;
 struct dce110_timing_generator* FUNC_2 (struct timing_generator*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_7(
 struct timing_generator *VAR_18,
 const struct dcp_gsl_params *VAR_19)
{
 struct dce110_timing_generator *VAR_20 = FUNC_2(VAR_18);
 uint32_t VAR_21 =
       FUNC_4(VAR_18->ctx,
       VAR_17,
       VAR_20->offsets.crtc);

 uint32_t VAR_22 =
       FUNC_6(VAR_21,
       VAR_1,
       VAR_4);


 FUNC_5(VAR_18->ctx, VAR_16, VAR_20->offsets.crtc, 0);

 FUNC_1(VAR_5, 6,

  FUNC_3(VAR_6), 1,
  FUNC_3(VAR_10), VAR_19->gsl_master == VAR_18->inst,
  FUNC_3(VAR_9), VAR_14,


  FUNC_3(VAR_8), VAR_13,

  FUNC_3(VAR_11), 0,
  FUNC_3(VAR_7), 1);

 FUNC_0(
   VAR_0,
   VAR_2, VAR_22 - VAR_12,
   VAR_3, VAR_15);
}
