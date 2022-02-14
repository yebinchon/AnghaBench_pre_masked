
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_page_dma {int page; int daddr; } ;
struct i915_address_space {int dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct i915_address_space*,int) ;
 int FUNC_4 (struct i915_address_space*,int ) ;

__attribute__((used)) static int FUNC_5(struct i915_address_space *VAR_6,
       struct i915_page_dma *VAR_7,
       gfp_t VAR_8)
{
 VAR_7->page = FUNC_3(VAR_6, VAR_8 | VAR_3);
 if (FUNC_2(!VAR_7->page))
  return -VAR_2;

 VAR_7->daddr = FUNC_0(VAR_6->dma,
          VAR_7->page, 0, VAR_4,
          VAR_5,
          VAR_1 |
          VAR_0);
 if (FUNC_2(FUNC_1(VAR_6->dma, VAR_7->daddr))) {
  FUNC_4(VAR_6, VAR_7->page);
  return -VAR_2;
 }

 return 0;
}
