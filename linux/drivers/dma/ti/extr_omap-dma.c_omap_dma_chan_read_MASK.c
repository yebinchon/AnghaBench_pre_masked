
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dma_reg {scalar_t__ offset; int type; } ;
struct omap_chan {scalar_t__ channel_base; struct omap_dma_reg* reg_map; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static unsigned FUNC_1(struct omap_chan *VAR_0, unsigned VAR_1)
{
 const struct omap_dma_reg *VAR_2 = VAR_0->reg_map + VAR_1;

 return FUNC_0(VAR_2->type, VAR_0->channel_base + VAR_2->offset);
}
