
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct i915_address_space {unsigned int scratch_order; int dma; TYPE_2__* scratch; int i915; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_3__ {int daddr; struct page* page; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct page*,unsigned int) ;
 struct page* FUNC_3 (int,unsigned int) ;
 int FUNC_4 (int ,struct page*,int ,unsigned long,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,unsigned long,int ) ;
 unsigned int FUNC_7 (unsigned long) ;
 scalar_t__ FUNC_8 (struct i915_address_space*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct i915_address_space *VAR_9, gfp_t VAR_10)
{
 unsigned long VAR_11;
 VAR_11 = VAR_3;
 if (FUNC_8(VAR_9) &&
     FUNC_0(VAR_9->i915, VAR_4)) {
  VAR_11 = VAR_4;
  VAR_10 |= VAR_6;
 }
 VAR_10 |= VAR_8 | VAR_7;

 do {
  unsigned int VAR_12 = FUNC_7(VAR_11);
  struct page *VAR_13;
  dma_addr_t VAR_14;

  VAR_13 = FUNC_3(VAR_10, VAR_12);
  if (FUNC_9(!VAR_13))
   goto skip;

  VAR_14 = FUNC_4(VAR_9->dma,
       VAR_13, 0, VAR_11,
       VAR_5,
       VAR_1 |
       VAR_0);
  if (FUNC_9(FUNC_5(VAR_9->dma, VAR_14)))
   goto free_page;

  if (FUNC_9(!FUNC_1(VAR_14, VAR_11)))
   goto unmap_page;

  VAR_9->scratch[0].base.page = VAR_13;
  VAR_9->scratch[0].base.daddr = VAR_14;
  VAR_9->scratch_order = VAR_12;
  return 0;

unmap_page:
  FUNC_6(VAR_9->dma, VAR_14, VAR_11, VAR_5);
free_page:
  FUNC_2(VAR_13, VAR_12);
skip:
  if (VAR_11 == VAR_3)
   return -VAR_2;

  VAR_11 = VAR_3;
  VAR_10 &= ~VAR_6;
 } while (1);
}
