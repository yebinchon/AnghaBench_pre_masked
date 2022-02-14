
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct drr_params {scalar_t__ vertical_total_max; scalar_t__ vertical_total_min; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int,int ,int ) ;

void FUNC_5(
 struct timing_generator *VAR_12,
 const struct drr_params *VAR_13)
{

 uint32_t VAR_14 = 0;
 uint32_t VAR_15 = 0;
 uint32_t VAR_16 = 0;
 struct dce110_timing_generator *VAR_17 = FUNC_1(VAR_12);

 uint32_t VAR_18 = 0;

 VAR_18 = FUNC_0(VAR_11);
 VAR_14 = FUNC_2(VAR_12->ctx, VAR_18);

 VAR_18 = FUNC_0(VAR_10);
 VAR_15 = FUNC_2(VAR_12->ctx, VAR_18);

 VAR_18 = FUNC_0(VAR_9);
 VAR_16 = FUNC_2(VAR_12->ctx, VAR_18);

 if (VAR_13 != ((void*)0) &&
  VAR_13->vertical_total_max > 0 &&
  VAR_13->vertical_total_min > 0) {

  FUNC_4(VAR_15,
    VAR_13->vertical_total_max - 1,
    VAR_5,
    VAR_5);

  FUNC_4(VAR_14,
    VAR_13->vertical_total_min - 1,
    VAR_7,
    VAR_7);

  FUNC_4(VAR_16,
    1,
    VAR_4,
    VAR_8);

  FUNC_4(VAR_16,
    1,
    VAR_4,
    VAR_6);

  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_0);
  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_1);

  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_3);

  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_2);
 } else {
  FUNC_4(VAR_16,
   0,
   VAR_4,
   VAR_2);
  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_8);
  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_6);
  FUNC_4(VAR_14,
    0,
    VAR_7,
    VAR_7);
  FUNC_4(VAR_15,
    0,
    VAR_5,
    VAR_5);
  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_0);
  FUNC_4(VAR_16,
    0,
    VAR_4,
    VAR_1);
 }

 VAR_18 = FUNC_0(VAR_11);
 FUNC_3(VAR_12->ctx, VAR_18, VAR_14);

 VAR_18 = FUNC_0(VAR_10);
 FUNC_3(VAR_12->ctx, VAR_18, VAR_15);

 VAR_18 = FUNC_0(VAR_9);
 FUNC_3(VAR_12->ctx, VAR_18, VAR_16);
}
