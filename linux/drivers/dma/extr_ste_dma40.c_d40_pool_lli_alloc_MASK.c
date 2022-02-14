
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct d40_phy_lli {int dummy; } ;
struct d40_log_lli {int dummy; } ;
struct TYPE_8__ {int size; scalar_t__ dma_addr; int * base; void* pre_alloc_lli; } ;
struct TYPE_6__ {void* src; scalar_t__ dst; } ;
struct TYPE_5__ {void* src; scalar_t__ dst; } ;
struct d40_desc {TYPE_4__ lli_pool; TYPE_2__ lli_phy; TYPE_1__ lli_log; } ;
struct d40_chan {TYPE_3__* base; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (struct d40_chan*) ;
 scalar_t__ FUNC_2 (int ,void*,int,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct d40_chan *VAR_3, struct d40_desc *VAR_4,
         int VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;
 void *VAR_8;

 if (VAR_6)
  VAR_7 = sizeof(struct d40_log_lli);
 else
  VAR_7 = sizeof(struct d40_phy_lli);

 if (VAR_5 == 1) {
  VAR_8 = VAR_4->lli_pool.pre_alloc_lli;
  VAR_4->lli_pool.size = sizeof(VAR_4->lli_pool.pre_alloc_lli);
  VAR_4->lli_pool.base = ((void*)0);
 } else {
  VAR_4->lli_pool.size = VAR_5 * 2 * VAR_7;

  VAR_8 = FUNC_5(VAR_4->lli_pool.size + VAR_7, VAR_2);
  VAR_4->lli_pool.base = VAR_8;

  if (VAR_4->lli_pool.base == ((void*)0))
   return -VAR_1;
 }

 if (VAR_6) {
  VAR_4->lli_log.src = FUNC_0(VAR_8, VAR_7);
  VAR_4->lli_log.dst = VAR_4->lli_log.src + VAR_5;

  VAR_4->lli_pool.dma_addr = 0;
 } else {
  VAR_4->lli_phy.src = FUNC_0(VAR_8, VAR_7);
  VAR_4->lli_phy.dst = VAR_4->lli_phy.src + VAR_5;

  VAR_4->lli_pool.dma_addr = FUNC_2(VAR_3->base->dev,
        VAR_4->lli_phy.src,
        VAR_4->lli_pool.size,
        VAR_0);

  if (FUNC_3(VAR_3->base->dev,
          VAR_4->lli_pool.dma_addr)) {
   FUNC_4(VAR_4->lli_pool.base);
   VAR_4->lli_pool.base = ((void*)0);
   VAR_4->lli_pool.dma_addr = 0;
   return -VAR_1;
  }
 }

 return 0;
}
