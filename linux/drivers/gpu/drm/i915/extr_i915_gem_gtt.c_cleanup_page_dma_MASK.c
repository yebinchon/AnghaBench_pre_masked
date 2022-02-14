
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_dma {int page; int daddr; } ;
struct i915_address_space {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct i915_address_space*,int ) ;

__attribute__((used)) static void FUNC_2(struct i915_address_space *VAR_2,
        struct i915_page_dma *VAR_3)
{
 FUNC_0(VAR_2->dma, VAR_3->daddr, VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_3->page);
}
