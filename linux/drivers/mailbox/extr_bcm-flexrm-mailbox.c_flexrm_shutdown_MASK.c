
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mbox_chan {struct flexrm_ring* con_priv; } ;
struct flexrm_ring {int irq_requested; int * bd_base; int bd_dma_base; TYPE_1__* mbox; int * cmpl_base; int cmpl_dma_base; int irq; int requests_bmap; struct brcm_message** requests; int num; scalar_t__ regs; } ;
struct brcm_message {int error; } ;
struct TYPE_2__ {int bd_pool; int cmpl_pool; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,struct brcm_message*) ;
 int FUNC_5 (int ,struct flexrm_ring*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mbox_chan*,struct brcm_message*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mbox_chan *VAR_6)
{
 u32 VAR_7;
 unsigned int VAR_8;
 struct brcm_message *VAR_9;
 struct flexrm_ring *VAR_10 = VAR_6->con_priv;


 FUNC_10(0x0, VAR_10->regs + VAR_3);


 VAR_8 = 1000;
 FUNC_10(FUNC_0(VAR_0),
   VAR_10->regs + VAR_3);
 do {
  if (FUNC_9(VAR_10->regs + VAR_4) &
      VAR_2)
   break;
  FUNC_8(1);
 } while (--VAR_8);
 if (!VAR_8)
  FUNC_2(VAR_10->mbox->dev,
   "setting ring%d flush state timedout\n", VAR_10->num);


 VAR_8 = 1000;
 FUNC_10(0x0, VAR_10->regs + VAR_3);
 do {
  if (!(FUNC_9(VAR_10->regs + VAR_4) &
        VAR_2))
   break;
  FUNC_8(1);
 } while (--VAR_8);
 if (!VAR_8)
  FUNC_2(VAR_10->mbox->dev,
   "clearing ring%d flush state timedout\n", VAR_10->num);


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_9 = VAR_10->requests[VAR_7];
  if (!VAR_9)
   continue;


  VAR_10->requests[VAR_7] = ((void*)0);


  FUNC_4(VAR_10->mbox->dev, VAR_9);


  VAR_9->error = -VAR_1;
  FUNC_7(VAR_6, VAR_9);
 }


 FUNC_1(VAR_10->requests_bmap, VAR_5);


 if (VAR_10->irq_requested) {
  FUNC_6(VAR_10->irq, ((void*)0));
  FUNC_5(VAR_10->irq, VAR_10);
  VAR_10->irq_requested = 0;
 }


 if (VAR_10->cmpl_base) {
  FUNC_3(VAR_10->mbox->cmpl_pool,
         VAR_10->cmpl_base, VAR_10->cmpl_dma_base);
  VAR_10->cmpl_base = ((void*)0);
 }


 if (VAR_10->bd_base) {
  FUNC_3(VAR_10->mbox->bd_pool,
         VAR_10->bd_base, VAR_10->bd_dma_base);
  VAR_10->bd_base = ((void*)0);
 }
}
