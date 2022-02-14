
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int chan_id; } ;
struct timb_dma_chan {TYPE_1__ chan; } ;
struct timb_dma {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int,struct timb_dma*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct timb_dma_chan *VAR_1)
{
 int VAR_2 = VAR_1->chan.chan_id;
 struct timb_dma *VAR_3 = (struct timb_dma *)((u8 *)VAR_1 -
  VAR_2 * sizeof(struct timb_dma_chan) - sizeof(struct timb_dma));
 u32 VAR_4;
 bool VAR_5 = 0;

 FUNC_1(FUNC_0(&VAR_1->chan), "Checking irq: %d, td: %p\n", VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_3->membase + VAR_0) & (1 << VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_4, VAR_3->membase + VAR_0);
  VAR_5 = 1;
 }

 return VAR_5;
}
