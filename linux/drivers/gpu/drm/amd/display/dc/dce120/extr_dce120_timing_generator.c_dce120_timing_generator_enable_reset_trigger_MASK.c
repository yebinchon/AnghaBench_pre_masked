
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;
typedef enum trigger_source_select { ____Placeholder_trigger_source_select } trigger_source_select ;


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
 int FUNC_0 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_1 (int ,int,int ,int,int ,int ,int ,int,int ,int,int ,int ,int ,int ,int ,int) ;
 int VAR_13 ;
 struct dce110_timing_generator* FUNC_2 (struct timing_generator*) ;
 int FUNC_3 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int VAR_17 ;

void FUNC_6(
 struct timing_generator *VAR_18,
 int VAR_19)
{
 enum trigger_source_select VAR_20 = VAR_16;
 struct dce110_timing_generator *VAR_21 = FUNC_2(VAR_18);
 uint32_t VAR_22 = 0;
 uint32_t VAR_23 = 0;

 uint32_t VAR_24 = FUNC_4(
         VAR_18->ctx,
         VAR_17,
         VAR_21->offsets.crtc);



 if (FUNC_5(VAR_24,
   VAR_9,
   VAR_13) == 0) {
  VAR_22 = 1;
 } else {
  VAR_23 = 1;
 }


 VAR_20 = VAR_15;

 FUNC_1(VAR_1, 7,
  FUNC_3(VAR_8), VAR_20,
  FUNC_3(VAR_6), VAR_14,
  FUNC_3(VAR_7), VAR_22,
  FUNC_3(VAR_4), VAR_23,

  FUNC_3(VAR_5), 0,

  FUNC_3(VAR_3), 0,

  FUNC_3(VAR_2), 1);

 FUNC_0(
   VAR_0,
   VAR_11, 2,
   VAR_12, 1,
   VAR_10, 1);
}
