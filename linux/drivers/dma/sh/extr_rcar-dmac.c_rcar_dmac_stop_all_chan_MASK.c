
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_dmac_chan {int lock; } ;
struct rcar_dmac {unsigned int n_channels; int channels_mask; struct rcar_dmac_chan* channels; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct rcar_dmac_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rcar_dmac *VAR_0)
{
 unsigned int VAR_1;


 for (VAR_1 = 0; VAR_1 < VAR_0->n_channels; ++VAR_1) {
  struct rcar_dmac_chan *VAR_2 = &VAR_0->channels[VAR_1];

  if (!(VAR_0->channels_mask & FUNC_0(VAR_1)))
   continue;


  FUNC_2(&VAR_2->lock);
  FUNC_1(VAR_2);
  FUNC_3(&VAR_2->lock);
 }
}
