
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct crtc_trigger_info {int event; int delay; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
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
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int,int,int ,int ) ;

void FUNC_5(
  struct timing_generator *VAR_20,
  int VAR_21,
  struct crtc_trigger_info *VAR_22)
{
 uint32_t VAR_23 = 0;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 struct dce110_timing_generator *VAR_26 = FUNC_1(VAR_20);


 switch (VAR_22->event) {
 case 130:
   VAR_24 = 1;
   break;

 case 131:
  VAR_25 = 1;
  break;
 }

 VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_18));

 FUNC_4(VAR_23,
       VAR_21,
       VAR_8,
       VAR_12);

 FUNC_4(VAR_23,
       VAR_15,
       VAR_8,
       VAR_10);

 FUNC_4(VAR_23,
       VAR_24,
       VAR_8,
       VAR_11);

 FUNC_4(VAR_23,
       VAR_25,
       VAR_8,
       VAR_9);

 FUNC_4(VAR_23,
       1,
       VAR_8,
       VAR_7);

 FUNC_3(VAR_20->ctx, FUNC_0(VAR_18), VAR_23);



 switch (VAR_22->delay) {
 case 129:
  VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_16));

  FUNC_4(VAR_23,
        0,
        VAR_2,
        VAR_3);

  FUNC_4(VAR_23,
        0,
        VAR_2,
        VAR_4);

  FUNC_4(VAR_23,
        1,
        VAR_2,
        VAR_1);

  FUNC_3(VAR_20->ctx, FUNC_0(VAR_16), VAR_23);

  VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_19));

  FUNC_4(VAR_23,
        1,
        VAR_13,
        VAR_5);

  FUNC_4(VAR_23,
        2,
        VAR_13,
        VAR_0);

  break;

 case 128:
  VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_19));

  FUNC_4(VAR_23,
        1,
        VAR_13,
        VAR_5);

  FUNC_4(VAR_23,
        0,
        VAR_13,
        VAR_0);

  FUNC_3(VAR_20->ctx, FUNC_0(VAR_19), VAR_23);

  VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_16));

  FUNC_4(VAR_23,
        2,
        VAR_2,
        VAR_3);

  FUNC_4(VAR_23,
        1,
        VAR_2,
        VAR_4);

  FUNC_4(VAR_23,
        1,
        VAR_2,
        VAR_1);

  FUNC_3(VAR_20->ctx, FUNC_0(VAR_16), VAR_23);
  break;
 }

 VAR_23 = FUNC_2(VAR_20->ctx, FUNC_0(VAR_17));

 FUNC_4(VAR_23,
       2,
       VAR_6,
       VAR_14);

 FUNC_3(VAR_20->ctx, FUNC_0(VAR_17), VAR_23);
}
