
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int inst; int ctx; } ;
struct dcp_gsl_params {int gsl_master; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
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
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int,int,int ,int ) ;

void FUNC_7(
 struct timing_generator *VAR_24,
 const struct dcp_gsl_params *VAR_25)
{
 uint32_t VAR_26;
 struct dce110_timing_generator *VAR_27 = FUNC_1(VAR_24);
 uint32_t VAR_28 = FUNC_2(VAR_23);
 uint32_t VAR_29 = VAR_15;

 VAR_26 = FUNC_3(VAR_24->ctx, VAR_28);


 FUNC_6(VAR_26,
       1,
       VAR_9,
       VAR_8);

 FUNC_6(VAR_26,
       VAR_25->gsl_master == VAR_24->inst,
       VAR_9,
       VAR_13);

 FUNC_6(VAR_26,
       VAR_17,
       VAR_9,
       VAR_12);



 FUNC_6(VAR_26,
       VAR_16,
       VAR_9,
       VAR_11);

 FUNC_4(VAR_24->ctx, FUNC_0(VAR_23), VAR_26);
 VAR_26 = 0;

 FUNC_6(VAR_26,
       VAR_25->gsl_master,
       VAR_4,
       VAR_7);

 FUNC_6(VAR_26,
       0,
       VAR_4,
       VAR_6);

 FUNC_6(VAR_26,
       0,
       VAR_4,
       VAR_5);

 FUNC_4(VAR_24->ctx, FUNC_0(VAR_22), VAR_26);


 {
  uint32_t VAR_30;

  VAR_30 = FUNC_3(VAR_24->ctx,
    FUNC_0(VAR_21));

  FUNC_6(VAR_26,
        0,
        VAR_9,
        VAR_14);


  VAR_29 = FUNC_5(VAR_30,
        VAR_3,
        VAR_3);

  FUNC_4(VAR_24->ctx, FUNC_0(VAR_20), 0);
 }

 FUNC_6(VAR_26,
       1,
       VAR_9,
       VAR_10);

 FUNC_4(VAR_24->ctx, VAR_28, VAR_26);


 VAR_28 = FUNC_0(VAR_19);

 VAR_26 = FUNC_3(VAR_24->ctx, VAR_28);
 FUNC_6(VAR_26,
       VAR_29 - VAR_15,
       VAR_1,
       VAR_0);

 FUNC_6(VAR_26,
       VAR_18,
       VAR_1,
       VAR_2);

 FUNC_4(VAR_24->ctx, VAR_28, VAR_26);
}
