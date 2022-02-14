
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_vchan {int node; int vc; struct sun6i_pchan* phy; } ;
struct sun6i_pchan {scalar_t__ base; } ;
struct sun6i_dma_dev {int lock; } ;
struct dma_chan {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sun6i_dma_dev* FUNC_5 (int ) ;
 struct sun6i_vchan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct dma_chan *VAR_2)
{
 struct sun6i_dma_dev *VAR_3 = FUNC_5(VAR_2->device);
 struct sun6i_vchan *VAR_4 = FUNC_6(VAR_2);
 struct sun6i_pchan *VAR_5 = VAR_4->phy;

 FUNC_1(FUNC_0(VAR_2), "vchan %p: pause\n", &VAR_4->vc);

 if (VAR_5) {
  FUNC_7(VAR_1,
         VAR_5->base + VAR_0);
 } else {
  FUNC_3(&VAR_3->lock);
  FUNC_2(&VAR_4->node);
  FUNC_4(&VAR_3->lock);
 }

 return 0;
}
