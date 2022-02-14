
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_phy_chan {int lock; struct pl08x_dma_chan* serving; int locked; } ;
struct pl08x_driver_data {TYPE_1__* vd; struct pl08x_phy_chan* phy_chans; } ;
struct pl08x_dma_chan {int dummy; } ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct pl08x_phy_chan *
FUNC_2(struct pl08x_driver_data *VAR_0,
        struct pl08x_dma_chan *VAR_1)
{
 struct pl08x_phy_chan *VAR_2 = ((void*)0);
 unsigned long VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->vd->channels; VAR_4++) {
  VAR_2 = &VAR_0->phy_chans[VAR_4];

  FUNC_0(&VAR_2->lock, VAR_3);

  if (!VAR_2->locked && !VAR_2->serving) {
   VAR_2->serving = VAR_1;
   FUNC_1(&VAR_2->lock, VAR_3);
   break;
  }

  FUNC_1(&VAR_2->lock, VAR_3);
 }

 if (VAR_4 == VAR_0->vd->channels) {

  return ((void*)0);
 }

 return VAR_2;
}
