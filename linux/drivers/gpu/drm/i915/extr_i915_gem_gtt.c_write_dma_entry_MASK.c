
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i915_page_dma {int page; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int * const) ;

__attribute__((used)) static inline void
FUNC_2(struct i915_page_dma * const VAR_0,
  const unsigned short VAR_1,
  const u64 VAR_2)
{
 u64 * const VAR_3 = FUNC_0(VAR_0->page);

 VAR_3[VAR_1] = VAR_2;
 FUNC_1(VAR_3);
}
