
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct drr_params {scalar_t__ vertical_total_max; scalar_t__ vertical_total_min; } ;
struct dce110_timing_generator {int dummy; } ;


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
 int FUNC_0 (int ,int,int ,int,int ,int,int ,int ,int ,int ,int ,int ,...) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct dce110_timing_generator* FUNC_2 (struct timing_generator*) ;
 int FUNC_3 (int ) ;

void FUNC_4(
 struct timing_generator *VAR_13,
 const struct drr_params *VAR_14)
{

 struct dce110_timing_generator *VAR_15 = FUNC_2(VAR_13);

 if (VAR_14 != ((void*)0) &&
  VAR_14->vertical_total_max > 0 &&
  VAR_14->vertical_total_min > 0) {

  FUNC_1(
    VAR_9,
    VAR_12, VAR_14->vertical_total_min - 1);
  FUNC_1(
    VAR_8,
    VAR_11, VAR_14->vertical_total_max - 1);
  FUNC_0(VAR_1, 6,
    FUNC_3(VAR_7), 1,
    FUNC_3(VAR_6), 1,
    FUNC_3(VAR_2), 0,
    FUNC_3(VAR_3), 0,
    FUNC_3(VAR_5), 0,
    FUNC_3(VAR_4), 0);
  FUNC_1(
    VAR_0,
    VAR_10,
    0x180);

 } else {
  FUNC_0(VAR_1, 5,
    FUNC_3(VAR_7), 0,
    FUNC_3(VAR_6), 0,
    FUNC_3(VAR_2), 0,
    FUNC_3(VAR_3), 0,
    FUNC_3(VAR_4), 0);
  FUNC_1(
    VAR_9,
    VAR_12, 0);
  FUNC_1(
    VAR_8,
    VAR_11, 0);
  FUNC_1(
    VAR_0,
    VAR_10,
    0);
 }
}
