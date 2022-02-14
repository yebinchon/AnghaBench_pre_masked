
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_channel {unsigned int chan; int sar; int dar; int count; int mode; } ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int g2_addr; int root_addr; int size; int direction; int ctrl; int xfer_enable; int chan_enable; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct dma_channel*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct dma_channel*) ;
 int FUNC_3 (char*,int,int,int,int,int,int ,int ) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(struct dma_channel *VAR_2)
{
 unsigned int VAR_3 = VAR_2->chan;

 if (VAR_2->sar & 31) {
  FUNC_4("g2dma: unaligned source 0x%lx\n", VAR_2->sar);
  return -VAR_0;
 }

 if (VAR_2->dar & 31) {
  FUNC_4("g2dma: unaligned dest 0x%lx\n", VAR_2->dar);
  return -VAR_0;
 }


 if (VAR_2->count & 31)
  VAR_2->count = (VAR_2->count + (32 - 1)) & ~(32 - 1);


 VAR_2->dar += 0xa0800000;


 VAR_2->mode = !VAR_2->mode;

 FUNC_0((unsigned long)VAR_2->sar, VAR_2->count);

 FUNC_1(VAR_2);

 VAR_1->channel[VAR_3].g2_addr = VAR_2->dar & 0x1fffffe0;
 VAR_1->channel[VAR_3].root_addr = VAR_2->sar & 0x1fffffe0;
 VAR_1->channel[VAR_3].size = (VAR_2->count & ~31) | 0x80000000;
 VAR_1->channel[VAR_3].direction = VAR_2->mode;






 VAR_1->channel[VAR_3].ctrl = 5;

 FUNC_2(VAR_2);


 FUNC_3("count, sar, dar, mode, ctrl, chan, xfer: %ld, 0x%08lx, "
   "0x%08lx, %ld, %ld, %ld, %ld\n",
   VAR_1->channel[VAR_3].size,
   VAR_1->channel[VAR_3].root_addr,
   VAR_1->channel[VAR_3].g2_addr,
   VAR_1->channel[VAR_3].direction,
   VAR_1->channel[VAR_3].ctrl,
   VAR_1->channel[VAR_3].chan_enable,
   VAR_1->channel[VAR_3].xfer_enable);

 return 0;
}
