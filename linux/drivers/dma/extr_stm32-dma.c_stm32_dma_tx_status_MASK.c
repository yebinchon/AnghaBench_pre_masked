
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct virt_dma_desc {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct stm32_dma_chan {TYPE_3__ vchan; int next_sg; TYPE_4__* desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_6__ {scalar_t__ cookie; } ;
struct TYPE_7__ {TYPE_1__ tx; } ;
struct TYPE_9__ {TYPE_2__ vdesc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct stm32_dma_chan*,TYPE_4__*,int ) ;
 struct stm32_dma_chan* FUNC_5 (struct dma_chan*) ;
 TYPE_4__* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_1,
        dma_cookie_t VAR_2,
        struct dma_tx_state *VAR_3)
{
 struct stm32_dma_chan *VAR_4 = FUNC_5(VAR_1);
 struct virt_dma_desc *VAR_5;
 enum dma_status VAR_6;
 unsigned long VAR_7;
 u32 VAR_8 = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == VAR_0 || !VAR_3)
  return VAR_6;

 FUNC_2(&VAR_4->vchan.lock, VAR_7);
 VAR_5 = FUNC_7(&VAR_4->vchan, VAR_2);
 if (VAR_4->desc && VAR_2 == VAR_4->desc->vdesc.tx.cookie)
  VAR_8 = FUNC_4(VAR_4, VAR_4->desc,
       VAR_4->next_sg);
 else if (VAR_5)
  VAR_8 = FUNC_4(VAR_4,
       FUNC_6(VAR_5), 0);
 FUNC_1(VAR_3, VAR_8);

 FUNC_3(&VAR_4->vchan.lock, VAR_7);

 return VAR_6;
}
