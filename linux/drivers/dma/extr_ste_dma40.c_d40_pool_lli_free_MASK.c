
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * dst; int * src; } ;
struct TYPE_6__ {int * dst; int * src; } ;
struct TYPE_8__ {scalar_t__ size; int * base; scalar_t__ dma_addr; } ;
struct d40_desc {TYPE_3__ lli_phy; TYPE_2__ lli_log; TYPE_4__ lli_pool; } ;
struct d40_chan {TYPE_1__* base; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct d40_chan *VAR_1, struct d40_desc *VAR_2)
{
 if (VAR_2->lli_pool.dma_addr)
  FUNC_0(VAR_1->base->dev, VAR_2->lli_pool.dma_addr,
     VAR_2->lli_pool.size, VAR_0);

 FUNC_1(VAR_2->lli_pool.base);
 VAR_2->lli_pool.base = ((void*)0);
 VAR_2->lli_pool.size = 0;
 VAR_2->lli_log.src = ((void*)0);
 VAR_2->lli_log.dst = ((void*)0);
 VAR_2->lli_phy.src = ((void*)0);
 VAR_2->lli_phy.dst = ((void*)0);
}
