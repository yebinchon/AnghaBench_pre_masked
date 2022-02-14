
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct axi_dma_chan {int is_paused; TYPE_1__ vc; int chip; int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct axi_dma_chan*,int) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct axi_dma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_5)
{
 struct axi_dma_chan *VAR_6 = FUNC_5(VAR_5);
 unsigned long VAR_7;
 unsigned int VAR_8 = 20;
 u32 VAR_9;

 FUNC_6(&VAR_6->vc.lock, VAR_7);

 VAR_9 = FUNC_3(VAR_6->chip, VAR_2);
 VAR_9 |= FUNC_0(VAR_6->id) << VAR_0 |
        FUNC_0(VAR_6->id) << VAR_1;
 FUNC_4(VAR_6->chip, VAR_2, VAR_9);

 do {
  if (FUNC_2(VAR_6) & VAR_3)
   break;

  FUNC_8(2);
 } while (--VAR_8);

 FUNC_1(VAR_6, VAR_3);

 VAR_6->is_paused = 1;

 FUNC_7(&VAR_6->vc.lock, VAR_7);

 return VAR_8 ? 0 : -VAR_4;
}
