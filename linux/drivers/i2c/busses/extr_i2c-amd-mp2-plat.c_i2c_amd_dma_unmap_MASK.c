
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct amd_i2c_common {TYPE_3__* msg; int dma_buf; int dma_addr; TYPE_2__* mp2_dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int flags; int len; } ;
struct TYPE_5__ {TYPE_1__* pci_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(struct amd_i2c_common *VAR_3)
{
 struct device *VAR_4 = &VAR_3->mp2_dev->pci_dev->dev;
 enum dma_data_direction VAR_5 =
   VAR_3->msg->flags & VAR_2 ?
   VAR_0 : VAR_1;

 FUNC_0(VAR_4, VAR_3->dma_addr,
    VAR_3->msg->len, VAR_5);

 FUNC_1(VAR_3->dma_buf, VAR_3->msg, 1);
}
