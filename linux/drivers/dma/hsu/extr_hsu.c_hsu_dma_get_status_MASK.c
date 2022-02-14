
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hsu_dma_chip {TYPE_2__* hsu; } ;
struct TYPE_3__ {int lock; } ;
struct hsu_dma_chan {TYPE_1__ vchan; } ;
struct TYPE_4__ {unsigned short nr_channels; struct hsu_dma_chan* chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hsu_dma_chan*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

int FUNC_4(struct hsu_dma_chip *VAR_6, unsigned short VAR_7,
         u32 *VAR_8)
{
 struct hsu_dma_chan *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;


 if (VAR_7 >= VAR_6->hsu->nr_channels)
  return -VAR_0;

 VAR_9 = &VAR_6->hsu->chan[VAR_7];





 FUNC_1(&VAR_9->vchan.lock, VAR_10);
 VAR_11 = FUNC_0(VAR_9, VAR_2);
 FUNC_2(&VAR_9->vchan.lock, VAR_10);


 VAR_11 &= ~(VAR_4 | VAR_3);
 if (!VAR_11)
  return -VAR_1;


 if (VAR_11 & VAR_5)
  FUNC_3(2);
 VAR_11 &= ~VAR_5;

 *VAR_8 = VAR_11;

 return VAR_11 ? 0 : 1;
}
