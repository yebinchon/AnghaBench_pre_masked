
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct ipu_image_convert_dma_buf {int virt; int phys; int len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ipu_image_convert_priv *VAR_3,
    struct ipu_image_convert_dma_buf *VAR_4,
    int VAR_5)
{
 VAR_4->len = FUNC_0(VAR_5);
 VAR_4->virt = FUNC_2(VAR_3->ipu->dev, VAR_4->len, &VAR_4->phys,
           VAR_1 | VAR_2);
 if (!VAR_4->virt) {
  FUNC_1(VAR_3->ipu->dev, "failed to alloc dma buffer\n");
  return -VAR_0;
 }

 return 0;
}
