
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int chan_id; } ;
struct timb_dma_chan {TYPE_1__ chan; } ;
struct timb_dma {int dummy; } ;



__attribute__((used)) static struct timb_dma *FUNC_0(struct timb_dma_chan *VAR_0)
{
 int VAR_1 = VAR_0->chan.chan_id;
 return (struct timb_dma *)((u8 *)VAR_0 -
  VAR_1 * sizeof(struct timb_dma_chan) - sizeof(struct timb_dma));
}
