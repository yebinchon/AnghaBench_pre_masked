
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_chan {int dev; int sw_desc_pool; int desc_pool_p; int desc_pool_v; int lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct zynqmp_dma_chan*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct zynqmp_dma_chan* FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (struct zynqmp_dma_chan*) ;

__attribute__((used)) static void FUNC_9(struct dma_chan *VAR_1)
{
 struct zynqmp_dma_chan *VAR_2 = FUNC_7(VAR_1);
 unsigned long VAR_3;

 FUNC_5(&VAR_2->lock, VAR_3);
 FUNC_8(VAR_2);
 FUNC_6(&VAR_2->lock, VAR_3);
 FUNC_1(VAR_2->dev,
  (2 * FUNC_0(VAR_2) * VAR_0),
  VAR_2->desc_pool_v, VAR_2->desc_pool_p);
 FUNC_2(VAR_2->sw_desc_pool);
 FUNC_3(VAR_2->dev);
 FUNC_4(VAR_2->dev);
}
