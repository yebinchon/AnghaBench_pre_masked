
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int ctx; } ;
struct dcn10_dpp {TYPE_5__ base; TYPE_4__* tf_mask; TYPE_2__* tf_shift; } ;
struct TYPE_8__ {int csc_c12; int csc_c11; } ;
struct TYPE_6__ {int csc_c12; int csc_c11; } ;
struct color_matrices_reg {void* csc_c33_c34; void* csc_c11_c12; TYPE_3__ masks; TYPE_1__ shifts; } ;
struct TYPE_9__ {int CM_OCSC_C12; int CM_OCSC_C11; } ;
struct TYPE_7__ {int CM_OCSC_C12; int CM_OCSC_C11; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int const*,struct color_matrices_reg*) ;

__attribute__((used)) static void FUNC_5(
  struct dcn10_dpp *VAR_9,
  const uint16_t *VAR_10)
{
 uint32_t VAR_11;
 uint32_t VAR_12;
 struct color_matrices_reg VAR_13;

 if (VAR_10 == ((void*)0)) {
  FUNC_0();
  return;
 }





 FUNC_3(VAR_8, 0,
   VAR_8, 9);

 FUNC_2(VAR_6,
   VAR_7, &VAR_12);

 if (VAR_12 != 4)
  VAR_11 = 4;
 else
  VAR_11 = 5;


 VAR_13.shifts.csc_c11 = VAR_9->tf_shift->CM_OCSC_C11;
 VAR_13.masks.csc_c11 = VAR_9->tf_mask->CM_OCSC_C11;
 VAR_13.shifts.csc_c12 = VAR_9->tf_shift->CM_OCSC_C12;
 VAR_13.masks.csc_c12 = VAR_9->tf_mask->CM_OCSC_C12;

 if (VAR_11 == 4) {

  VAR_13.csc_c11_c12 = FUNC_1(VAR_2);
  VAR_13.csc_c33_c34 = FUNC_1(VAR_3);

 } else {

  VAR_13.csc_c11_c12 = FUNC_1(VAR_0);
  VAR_13.csc_c33_c34 = FUNC_1(VAR_1);

 }

 FUNC_4(
   VAR_9->base.ctx,
   VAR_10,
   &VAR_13);

 FUNC_3(VAR_4, 0, VAR_5, VAR_11);

}
