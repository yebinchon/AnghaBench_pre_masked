
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* device; } ;
struct TYPE_7__ {int lock; TYPE_2__ chan; } ;
struct mtk_chan {scalar_t__ dir; TYPE_3__ vc; int irq; scalar_t__ base; } ;
struct dma_chan {int dummy; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_14 ;
 int FUNC_2 (struct mtk_chan*,int ) ;
 int FUNC_3 (struct mtk_chan*,scalar_t__,unsigned int) ;
 int VAR_15 ;
 int FUNC_4 (int ,scalar_t__,unsigned int,int,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ) ;
 struct mtk_chan* FUNC_8 (struct dma_chan*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_11(struct dma_chan *VAR_16)
{
 struct mtk_chan *VAR_17 = FUNC_8(VAR_16);
 unsigned long VAR_18;
 unsigned int VAR_19;
 FUNC_0(VAR_14);
 int VAR_20;

 FUNC_3(VAR_17, VAR_4, VAR_5);

 VAR_20 = FUNC_4(VAR_15, VAR_17->base + VAR_4,
     VAR_19, VAR_19 != VAR_5, 10, 100);
 if (VAR_20)
  FUNC_1(VAR_17->vc.chan.device->dev, "flush: fail, status=0x%x\n",
   FUNC_2(VAR_17, VAR_2));







 FUNC_3(VAR_17, VAR_10, VAR_11);
 VAR_20 = FUNC_4(VAR_15, VAR_17->base + VAR_3,
     VAR_19, !VAR_19, 10, 100);
 if (VAR_20)
  FUNC_1(VAR_17->vc.chan.device->dev, "stop: fail, status=0x%x\n",
   FUNC_2(VAR_17, VAR_2));

 FUNC_3(VAR_17, VAR_10, VAR_12);
 FUNC_3(VAR_17, VAR_6, VAR_7);

 if (VAR_17->dir == VAR_0)
  FUNC_3(VAR_17, VAR_8, VAR_9);
 else if (VAR_17->dir == VAR_1)
  FUNC_3(VAR_17, VAR_8, VAR_13);

 FUNC_7(VAR_17->irq);

 FUNC_5(&VAR_17->vc.lock, VAR_18);
 FUNC_10(&VAR_17->vc, &VAR_14);
 FUNC_9(&VAR_17->vc, &VAR_14);
 FUNC_6(&VAR_17->vc.lock, VAR_18);

 return 0;
}
