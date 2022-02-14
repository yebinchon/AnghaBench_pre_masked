
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * funcs; } ;
struct optc {int min_h_blank; int min_v_blank; int min_v_blank_interlace; int min_h_sync_width; int min_v_sync_width; TYPE_2__* tg_mask; scalar_t__ max_v_total; scalar_t__ max_h_total; TYPE_1__ base; } ;
struct TYPE_4__ {scalar_t__ OTG_V_TOTAL; scalar_t__ OTG_H_TOTAL; } ;


 int VAR_0 ;

void FUNC_0(struct optc *VAR_1)
{
 VAR_1->base.funcs = &VAR_0;

 VAR_1->max_h_total = VAR_1->tg_mask->OTG_H_TOTAL + 1;
 VAR_1->max_v_total = VAR_1->tg_mask->OTG_V_TOTAL + 1;

 VAR_1->min_h_blank = 32;
 VAR_1->min_v_blank = 3;
 VAR_1->min_v_blank_interlace = 5;
 VAR_1->min_h_sync_width = 4;
 VAR_1->min_v_sync_width = 1;
}
