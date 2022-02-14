
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dmadev {scalar_t__ base; struct omap_dma_reg* reg_map; } ;
struct omap_dma_reg {scalar_t__ offset; int type; int stride; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct omap_dmadev *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 const struct omap_dma_reg *VAR_3 = VAR_0->reg_map + VAR_1;

 FUNC_0(VAR_3->stride);

 FUNC_1(VAR_2, VAR_3->type, VAR_0->base + VAR_3->offset);
}
