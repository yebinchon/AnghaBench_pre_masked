
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int node; } ;
struct uniphier_mdmac_desc {int dummy; } ;
struct uniphier_mdmac_chan {struct uniphier_mdmac_desc* md; int vc; } ;


 int FUNC_0 (int *) ;
 struct uniphier_mdmac_desc* FUNC_1 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_2 (int *) ;

__attribute__((used)) static struct uniphier_mdmac_desc *
FUNC_3(struct uniphier_mdmac_chan *VAR_0)
{
 struct virt_dma_desc *VAR_1;

 VAR_1 = FUNC_2(&VAR_0->vc);
 if (!VAR_1) {
  VAR_0->md = ((void*)0);
  return ((void*)0);
 }

 FUNC_0(&VAR_1->node);

 VAR_0->md = FUNC_1(VAR_1);

 return VAR_0->md;
}
