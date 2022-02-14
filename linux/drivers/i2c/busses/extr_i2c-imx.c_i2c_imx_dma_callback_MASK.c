
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imx_i2c_struct {struct imx_i2c_dma* dma; } ;
struct imx_i2c_dma {int cmd_complete; int dma_data_dir; int dma_len; int dma_buf; TYPE_2__* chan_using; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct imx_i2c_struct *VAR_1 = (struct imx_i2c_struct *)VAR_0;
 struct imx_i2c_dma *VAR_2 = VAR_1->dma;

 FUNC_1(VAR_2->chan_using->device->dev, VAR_2->dma_buf,
   VAR_2->dma_len, VAR_2->dma_data_dir);
 FUNC_0(&VAR_2->cmd_complete);
}
