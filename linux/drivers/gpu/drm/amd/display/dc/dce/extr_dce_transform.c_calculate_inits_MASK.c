
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fraction; void* integer; } ;
struct TYPE_5__ {int fraction; void* integer; } ;
struct scl_ratios_inits {int h_int_scale_ratio; int v_int_scale_ratio; TYPE_4__ v_init; TYPE_1__ h_init; } ;
struct TYPE_7__ {scalar_t__ v_taps; scalar_t__ h_taps; } ;
struct TYPE_6__ {int vert; int horz; } ;
struct scaler_data {TYPE_3__ taps; TYPE_2__ ratios; } ;
struct fixed31_32 {int dummy; } ;
struct dce_transform {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct fixed31_32 FUNC_1 (int ,int) ;
 void* FUNC_2 (struct fixed31_32) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct fixed31_32) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(
 struct dce_transform *VAR_0,
 const struct scaler_data *VAR_1,
 struct scl_ratios_inits *VAR_2)
{
 struct fixed31_32 VAR_3;
 struct fixed31_32 VAR_4;

 VAR_2->h_int_scale_ratio =
  FUNC_5(VAR_1->ratios.horz) << 5;
 VAR_2->v_int_scale_ratio =
  FUNC_5(VAR_1->ratios.vert) << 5;

 VAR_3 =
  FUNC_1(
   FUNC_0(
    VAR_1->ratios.horz,
    FUNC_3(VAR_1->taps.h_taps + 1)),
    2);
 VAR_2->h_init.integer = FUNC_2(VAR_3);
 VAR_2->h_init.fraction = FUNC_4(VAR_3) << 5;

 VAR_4 =
  FUNC_1(
   FUNC_0(
    VAR_1->ratios.vert,
    FUNC_3(VAR_1->taps.v_taps + 1)),
    2);
 VAR_2->v_init.integer = FUNC_2(VAR_4);
 VAR_2->v_init.fraction = FUNC_4(VAR_4) << 5;
}
