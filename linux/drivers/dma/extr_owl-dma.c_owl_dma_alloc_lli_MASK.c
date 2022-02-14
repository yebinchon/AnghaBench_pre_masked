
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_dma_lli {int phys; int node; } ;
struct owl_dma {int lli_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct owl_dma_lli* FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static struct owl_dma_lli *FUNC_2(struct owl_dma *VAR_1)
{
 struct owl_dma_lli *VAR_2;
 dma_addr_t VAR_3;

 VAR_2 = FUNC_1(VAR_1->lli_pool, VAR_0, &VAR_3);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->node);
 VAR_2->phys = VAR_3;

 return VAR_2;
}
