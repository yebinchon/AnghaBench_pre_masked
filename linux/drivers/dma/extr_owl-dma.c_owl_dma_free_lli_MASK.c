
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_dma_lli {int phys; int node; } ;
struct owl_dma {int lli_pool; } ;


 int FUNC_0 (int ,struct owl_dma_lli*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct owl_dma *VAR_0,
        struct owl_dma_lli *VAR_1)
{
 FUNC_1(&VAR_1->node);
 FUNC_0(VAR_0->lli_pool, VAR_1, VAR_1->phys);
}
