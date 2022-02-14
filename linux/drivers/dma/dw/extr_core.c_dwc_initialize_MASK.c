
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; } ;
struct dw_dma_chan {int flags; int mask; TYPE_1__ chan; } ;
struct dw_dma {int (* initialize_chan ) (struct dw_dma_chan*) ;} ;
struct TYPE_4__ {int ERROR; int XFER; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct dw_dma*,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dw_dma_chan*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 struct dw_dma* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dw_dma_chan *VAR_2)
{
 struct dw_dma *VAR_3 = FUNC_4(VAR_2->chan.device);

 if (FUNC_3(VAR_0, &VAR_2->flags))
  return;

 VAR_3->initialize_chan(VAR_2);


 FUNC_0(VAR_3, VAR_1.XFER, VAR_2->mask);
 FUNC_0(VAR_3, VAR_1.ERROR, VAR_2->mask);

 FUNC_1(VAR_0, &VAR_2->flags);
}
