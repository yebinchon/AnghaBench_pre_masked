
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32f7_i2c_dev {struct stm32_i2c_dma* dma; } ;
struct stm32_i2c_dma {int dma_complete; int dma_data_dir; int dma_len; int dma_buf; TYPE_2__* chan_using; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (struct stm32f7_i2c_dev*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct stm32f7_i2c_dev *VAR_1 = (struct stm32f7_i2c_dev *)VAR_0;
 struct stm32_i2c_dma *VAR_2 = VAR_1->dma;
 struct device *VAR_3 = VAR_2->chan_using->device->dev;

 FUNC_2(VAR_1);
 FUNC_1(VAR_3, VAR_2->dma_buf, VAR_2->dma_len, VAR_2->dma_data_dir);
 FUNC_0(&VAR_2->dma_complete);
}
