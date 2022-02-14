
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dmadev {struct omap_chan** lch_map; TYPE_1__* plat; scalar_t__ base; } ;
struct omap_chan {scalar_t__ channel_base; } ;
struct TYPE_2__ {unsigned int channel_stride; } ;



__attribute__((used)) static void FUNC_0(struct omap_dmadev *VAR_0, struct omap_chan *VAR_1,
 unsigned VAR_2)
{
 VAR_1->channel_base = VAR_0->base + VAR_0->plat->channel_stride * VAR_2;

 VAR_0->lch_map[VAR_2] = VAR_1;
}
