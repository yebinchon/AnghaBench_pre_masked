
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int desc_issued; } ;
struct sun6i_vchan {TYPE_1__ vc; int node; struct sun6i_pchan* phy; } ;
struct sun6i_pchan {scalar_t__ base; } ;
struct sun6i_dma_dev {int lock; int pending; } ;
struct dma_chan {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 struct sun6i_dma_dev* FUNC_8 (int ) ;
 struct sun6i_vchan* FUNC_9 (struct dma_chan*) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct dma_chan *VAR_2)
{
 struct sun6i_dma_dev *VAR_3 = FUNC_8(VAR_2->device);
 struct sun6i_vchan *VAR_4 = FUNC_9(VAR_2);
 struct sun6i_pchan *VAR_5 = VAR_4->phy;
 unsigned long VAR_6;

 FUNC_1(FUNC_0(VAR_2), "vchan %p: resume\n", &VAR_4->vc);

 FUNC_5(&VAR_4->vc.lock, VAR_6);

 if (VAR_5) {
  FUNC_10(VAR_1,
         VAR_5->base + VAR_0);
 } else if (!FUNC_3(&VAR_4->vc.desc_issued)) {
  FUNC_4(&VAR_3->lock);
  FUNC_2(&VAR_4->node, &VAR_3->pending);
  FUNC_6(&VAR_3->lock);
 }

 FUNC_7(&VAR_4->vc.lock, VAR_6);

 return 0;
}
