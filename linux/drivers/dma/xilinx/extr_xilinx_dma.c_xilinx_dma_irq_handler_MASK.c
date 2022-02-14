
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinx_dma_chan {int err; int idle; int tasklet; int lock; int (* start_transfer ) (struct xilinx_dma_chan*) ;int dev; int flush_on_fsync; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,struct xilinx_dma_chan*,int,int,int) ;
 int FUNC_2 (struct xilinx_dma_chan*,int ) ;
 int FUNC_3 (struct xilinx_dma_chan*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xilinx_dma_chan*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xilinx_dma_chan*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct xilinx_dma_chan *VAR_13 = VAR_12;
 u32 VAR_14;


 VAR_14 = FUNC_2(VAR_13, VAR_9);
 if (!(VAR_14 & VAR_7))
  return VAR_1;

 FUNC_3(VAR_13, VAR_9,
   VAR_14 & VAR_7);

 if (VAR_14 & VAR_4) {







  u32 VAR_15 = VAR_14 & VAR_2;

  FUNC_3(VAR_13, VAR_9,
    VAR_15 & VAR_5);

  if (!VAR_13->flush_on_fsync ||
      (VAR_15 & ~VAR_5)) {
   FUNC_1(VAR_13->dev,
    "Channel %p has errors %x, cdr %x tdr %x\n",
    VAR_13, VAR_15,
    FUNC_2(VAR_13, VAR_8),
    FUNC_2(VAR_13, VAR_10));
   VAR_13->err = 1;
  }
 }

 if (VAR_14 & VAR_3) {




  FUNC_0(VAR_13->dev, "Inter-packet latency too long\n");
 }

 if (VAR_14 & VAR_6) {
  FUNC_4(&VAR_13->lock);
  FUNC_8(VAR_13);
  VAR_13->idle = 1;
  VAR_13->start_transfer(VAR_13);
  FUNC_5(&VAR_13->lock);
 }

 FUNC_7(&VAR_13->tasklet);
 return VAR_0;
}
