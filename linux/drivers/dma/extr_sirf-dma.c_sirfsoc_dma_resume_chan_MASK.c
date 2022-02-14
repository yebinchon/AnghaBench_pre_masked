
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan_id; } ;
struct sirfsoc_dma_chan {int lock; TYPE_1__ chan; } ;
struct sirfsoc_dma {int type; scalar_t__ base; } ;
struct dma_chan {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 struct sirfsoc_dma* FUNC_0 (TYPE_1__*) ;
 struct sirfsoc_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_3)
{
 struct sirfsoc_dma_chan *VAR_4 = FUNC_1(VAR_3);
 struct sirfsoc_dma *VAR_5 = FUNC_0(&VAR_4->chan);
 int VAR_6 = VAR_4->chan.chan_id;
 unsigned long VAR_7;

 FUNC_3(&VAR_4->lock, VAR_7);
 switch (VAR_5->type) {
 case 129:
  FUNC_5((1 << VAR_6) | 1 << (VAR_6 + 16),
          VAR_5->base + VAR_1);
  break;
 case 128:
  FUNC_5(0x10001,
          VAR_5->base + VAR_2);
  break;
 case 130:
  FUNC_5(FUNC_2(VAR_5->base +
          VAR_0) |
          ((1 << VAR_6) | 1 << (VAR_6 + 16)),
          VAR_5->base + VAR_0);
  break;

 default:
  break;
 }

 FUNC_4(&VAR_4->lock, VAR_7);

 return 0;
}
