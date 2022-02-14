
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_filter_osr {int max; int lshift; } ;
struct stm32_dfsdm_filter {size_t fast; struct stm32_dfsdm_filter_osr* flo; } ;
struct stm32_dfsdm_adc {size_t fl_id; unsigned int nconv; TYPE_1__* dfsdm; } ;
typedef int s32 ;
struct TYPE_2__ {struct stm32_dfsdm_filter* fl_list; } ;



__attribute__((used)) static inline void FUNC_0(struct stm32_dfsdm_adc *VAR_0,
         s32 *VAR_1)
{
 struct stm32_dfsdm_filter *VAR_2 = &VAR_0->dfsdm->fl_list[VAR_0->fl_id];
 struct stm32_dfsdm_filter_osr *VAR_3 = &VAR_2->flo[VAR_2->fast];
 unsigned int VAR_4 = VAR_0->nconv;
 s32 *VAR_5 = VAR_1;

 while (VAR_4--) {

  *VAR_5 &= 0xFFFFFF00;

  if (*VAR_5 > VAR_3->max)
   *VAR_5 -= 1;




  *VAR_5 <<= VAR_3->lshift;

  VAR_5++;
 }
}
