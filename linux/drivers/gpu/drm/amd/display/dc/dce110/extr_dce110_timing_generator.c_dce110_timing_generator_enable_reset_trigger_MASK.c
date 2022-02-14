
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
typedef enum trigger_source_select { ____Placeholder_trigger_source_select } trigger_source_select ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
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
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_5 (int,int,int ,int ) ;

void FUNC_6(
 struct timing_generator *VAR_20,
 int VAR_21)
{
 uint32_t VAR_22;
 uint32_t VAR_23 = 0;
 uint32_t VAR_24 = 0;
 enum trigger_source_select VAR_25 = VAR_16;
 struct dce110_timing_generator *VAR_26 = FUNC_1(VAR_20);


 {
  uint32_t VAR_27 = FUNC_2(VAR_20->ctx,
    FUNC_0(VAR_19));



  if (FUNC_4(VAR_27,
    VAR_12,
    VAR_13) == 0) {
   VAR_23 = 1;
  } else {
   VAR_24 = 1;
  }
 }

 VAR_22 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_18));

 VAR_25 = VAR_15;

 FUNC_5(VAR_22,
   VAR_25,
   VAR_5,
   VAR_11);

 FUNC_5(VAR_22,
   VAR_14,
   VAR_5,
   VAR_9);

 FUNC_5(VAR_22,
   VAR_23,
   VAR_5,
   VAR_10);

 FUNC_5(VAR_22,
   VAR_24,
   VAR_5,
   VAR_7);

 FUNC_5(VAR_22,
   0,
   VAR_5,
   VAR_8);

 FUNC_5(VAR_22,
   0,
   VAR_5,
   VAR_6);

 FUNC_5(VAR_22,
   1,
   VAR_5,
   VAR_4);

 FUNC_3(VAR_20->ctx, FUNC_0(VAR_18), VAR_22);



 VAR_22 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_17));

 FUNC_5(VAR_22,
   2,
   VAR_1,
   VAR_2);

 FUNC_5(VAR_22,
   1,
   VAR_1,
   VAR_3);

 FUNC_5(VAR_22,
   1,
   VAR_1,
   VAR_0);

 FUNC_3(VAR_20->ctx, FUNC_0(VAR_17), VAR_22);
}
