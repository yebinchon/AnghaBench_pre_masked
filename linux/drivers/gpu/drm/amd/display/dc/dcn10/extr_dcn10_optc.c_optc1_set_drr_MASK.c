
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct timing_generator {TYPE_1__* funcs; } ;
struct optc {int dummy; } ;
struct drr_params {scalar_t__ vertical_total_max; scalar_t__ vertical_total_min; scalar_t__ vertical_total_mid; scalar_t__ vertical_total_mid_frame_num; } ;
struct TYPE_2__ {int (* setup_manual_trigger ) (struct timing_generator*) ;} ;


 struct optc* FUNC_0 (struct timing_generator*) ;
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
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct timing_generator*) ;

void FUNC_6(
 struct timing_generator *VAR_11,
 const struct drr_params *VAR_12)
{
 struct optc *VAR_13 = FUNC_0(VAR_11);

 if (VAR_12 != ((void*)0) &&
  VAR_12->vertical_total_max > 0 &&
  VAR_12->vertical_total_min > 0) {

  if (VAR_12->vertical_total_mid != 0) {

   FUNC_1(VAR_8, 0,
    VAR_8, VAR_12->vertical_total_mid - 1);

   FUNC_2(VAR_5,
     VAR_4, 1,
     VAR_3,
     (uint8_t)VAR_12->vertical_total_mid_frame_num);

  }

  FUNC_1(VAR_6, 0,
   VAR_6, VAR_12->vertical_total_max - 1);

  FUNC_1(VAR_9, 0,
   VAR_9, VAR_12->vertical_total_min - 1);

  FUNC_4(VAR_5,
    VAR_10, 1,
    VAR_7, 1,
    VAR_0, 0,
    VAR_2, 0,
    VAR_1, 0);


  VAR_11->funcs->setup_manual_trigger(VAR_11);

 } else {
  FUNC_3(VAR_5,
    VAR_1, 0,
    VAR_10, 0,
    VAR_7, 0,
    VAR_0, 0);

  FUNC_1(VAR_9, 0,
   VAR_9, 0);

  FUNC_1(VAR_6, 0,
   VAR_6, 0);
 }
}
