
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcif_wb {int dummy; } ;
struct mcif_irq_params {int vce_slice_int_en; int vce_int_en; int sw_overrun_int_en; int sw_slice_int_en; int sw_int_en; } ;
struct dcn20_mmhubbub {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 struct dcn20_mmhubbub* FUNC_1 (struct mcif_wb*) ;

void FUNC_2(struct mcif_wb *VAR_7,
  struct mcif_irq_params *VAR_8)
{
 struct dcn20_mmhubbub *VAR_9 = FUNC_1(VAR_7);


 FUNC_0(VAR_0, VAR_1, VAR_8->sw_int_en);
 FUNC_0(VAR_0, VAR_3, VAR_8->sw_slice_int_en);
 FUNC_0(VAR_0, VAR_2, VAR_8->sw_overrun_int_en);

 FUNC_0(VAR_4, VAR_5, VAR_8->vce_int_en);
 FUNC_0(VAR_4, VAR_6, VAR_8->vce_slice_int_en);
}
