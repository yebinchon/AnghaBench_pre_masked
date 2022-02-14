
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioatdma_device {int completion_pool; int dma_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ioatdma_device*) ;

__attribute__((used)) static int FUNC_3(struct ioatdma_device *VAR_0)
{
 int VAR_1 = FUNC_0(&VAR_0->dma_dev);

 if (VAR_1) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0->completion_pool);
 }

 return VAR_1;
}
