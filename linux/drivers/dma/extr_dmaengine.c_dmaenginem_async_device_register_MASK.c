
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*) ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct dma_device*) ;
 int VAR_2 ;

int FUNC_4(struct dma_device *VAR_3)
{
 void *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, sizeof(void *), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3);
 if (!VAR_5) {
  *(struct dma_device **)VAR_4 = VAR_3;
  FUNC_0(VAR_3->dev, VAR_4);
 } else {
  FUNC_2(VAR_4);
 }

 return VAR_5;
}
