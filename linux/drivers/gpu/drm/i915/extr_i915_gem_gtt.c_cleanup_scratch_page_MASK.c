
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_dma {int page; int daddr; } ;
struct i915_address_space {unsigned int scratch_order; int dma; int * scratch; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 struct i915_page_dma* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct i915_address_space *VAR_2)
{
 struct i915_page_dma *VAR_3 = FUNC_3(&VAR_2->scratch[0]);
 unsigned int VAR_4 = VAR_2->scratch_order;

 FUNC_2(VAR_2->dma, VAR_3->daddr, FUNC_0(VAR_4) << VAR_0,
         VAR_1);
 FUNC_1(VAR_3->page, VAR_4);
}
