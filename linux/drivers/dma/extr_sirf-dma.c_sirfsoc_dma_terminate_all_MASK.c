
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan_id; } ;
struct sirfsoc_dma_chan {int lock; int free; int queued; int active; TYPE_1__ chan; } ;
struct sirfsoc_dma {int type; scalar_t__ base; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;



 struct sirfsoc_dma* FUNC_0 (TYPE_1__*) ;
 struct sirfsoc_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_11)
{
 struct sirfsoc_dma_chan *VAR_12 = FUNC_1(VAR_11);
 struct sirfsoc_dma *VAR_13 = FUNC_0(&VAR_12->chan);
 int VAR_14 = VAR_12->chan.chan_id;
 unsigned long VAR_15;

 FUNC_4(&VAR_12->lock, VAR_15);

 switch (VAR_13->type) {
 case 129:
  FUNC_6(1 << VAR_14, VAR_13->base + VAR_8);
  FUNC_6(1 << VAR_14, VAR_13->base + VAR_0);
  FUNC_6((1 << VAR_14) | 1 << (VAR_14 + 16),
          VAR_13->base +
          VAR_2);
  FUNC_6(1 << VAR_14, VAR_13->base + VAR_3);
  break;
 case 128:
  FUNC_6(0, VAR_13->base + VAR_7);
  FUNC_6(VAR_4,
          VAR_13->base + VAR_5);
  FUNC_6(0, VAR_13->base + VAR_9);
  FUNC_6(0, VAR_13->base + VAR_10);
  break;
 case 130:
  FUNC_6(FUNC_3(VAR_13->base + VAR_6) &
          ~(1 << VAR_14), VAR_13->base + VAR_6);
  FUNC_6(FUNC_3(VAR_13->base +
          VAR_1) &
          ~((1 << VAR_14) | 1 << (VAR_14 + 16)),
          VAR_13->base + VAR_1);
  FUNC_6(1 << VAR_14, VAR_13->base + VAR_3);
  break;
 default:
  break;
 }

 FUNC_2(&VAR_12->active, &VAR_12->free);
 FUNC_2(&VAR_12->queued, &VAR_12->free);

 FUNC_5(&VAR_12->lock, VAR_15);

 return 0;
}
