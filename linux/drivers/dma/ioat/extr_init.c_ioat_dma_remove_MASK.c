
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int channels; } ;
struct ioatdma_device {int completion_pool; struct dma_device dma_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ioatdma_device*) ;
 int FUNC_4 (struct ioatdma_device*) ;

__attribute__((used)) static void FUNC_5(struct ioatdma_device *VAR_0)
{
 struct dma_device *VAR_1 = &VAR_0->dma_dev;

 FUNC_3(VAR_0);

 FUNC_4(VAR_0);

 FUNC_1(VAR_1);

 FUNC_2(VAR_0->completion_pool);

 FUNC_0(&VAR_1->channels);
}
