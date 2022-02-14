
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sun4i_dma_vchan {TYPE_1__ vc; struct sun4i_dma_pchan* pchan; int * processing; } ;
struct sun4i_dma_pchan {scalar_t__ base; scalar_t__ is_dedicated; } ;
struct sun4i_dma_dev {int dummy; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sun4i_dma_dev*,struct sun4i_dma_pchan*) ;
 int FUNC_2 (struct sun4i_dma_dev*,struct sun4i_dma_pchan*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct sun4i_dma_dev* FUNC_5 (int ) ;
 struct sun4i_dma_vchan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_3)
{
 struct sun4i_dma_dev *VAR_4 = FUNC_5(VAR_3->device);
 struct sun4i_dma_vchan *VAR_5 = FUNC_6(VAR_3);
 struct sun4i_dma_pchan *VAR_6 = VAR_5->pchan;
 FUNC_0(VAR_2);
 unsigned long VAR_7;

 FUNC_3(&VAR_5->vc.lock, VAR_7);
 FUNC_8(&VAR_5->vc, &VAR_2);
 FUNC_4(&VAR_5->vc.lock, VAR_7);





 if (VAR_6) {
  if (VAR_6->is_dedicated)
   FUNC_9(0, VAR_6->base + VAR_0);
  else
   FUNC_9(0, VAR_6->base + VAR_1);
  FUNC_2(VAR_4, VAR_6, 0, 0);
  FUNC_1(VAR_4, VAR_6);
 }

 FUNC_3(&VAR_5->vc.lock, VAR_7);
 FUNC_7(&VAR_5->vc, &VAR_2);

 VAR_5->processing = ((void*)0);
 VAR_5->pchan = ((void*)0);
 FUNC_4(&VAR_5->vc.lock, VAR_7);

 return 0;
}
