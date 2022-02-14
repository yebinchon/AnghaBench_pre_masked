
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct dw_dma_chan {int flags; TYPE_1__ chan; } ;
struct dw_dma {int (* suspend_chan ) (struct dw_dma_chan*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_dma_chan*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dw_dma_chan*,int) ;
 struct dw_dma* FUNC_3 (int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dw_dma_chan *VAR_3, bool VAR_4)
{
 struct dw_dma *VAR_5 = FUNC_3(VAR_3->chan.device);
 unsigned int VAR_6 = 20;

 VAR_5->suspend_chan(VAR_3, VAR_4);

 while (!(FUNC_0(VAR_3, VAR_0) & VAR_1) && VAR_6--)
  FUNC_4(2);

 FUNC_1(VAR_2, &VAR_3->flags);
}
