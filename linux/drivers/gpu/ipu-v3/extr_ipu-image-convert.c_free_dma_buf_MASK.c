
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct ipu_image_convert_dma_buf {scalar_t__ phys; int * virt; int len; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ipu_image_convert_priv *VAR_0,
    struct ipu_image_convert_dma_buf *VAR_1)
{
 if (VAR_1->virt)
  FUNC_0(VAR_0->ipu->dev,
      VAR_1->len, VAR_1->virt, VAR_1->phys);
 VAR_1->virt = ((void*)0);
 VAR_1->phys = 0;
}
