
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct amd_i2c_dev {TYPE_1__* pdev; } ;
struct amd_i2c_common {int dma_buf; int dma_addr; TYPE_4__* msg; TYPE_2__* mp2_dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int flags; int len; } ;
struct TYPE_7__ {struct device dev; } ;
struct TYPE_6__ {TYPE_3__* pci_dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct amd_i2c_dev* FUNC_0 (struct amd_i2c_common*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct device*,int ,int ,int) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct amd_i2c_common *VAR_4)
{
 struct device *VAR_5 = &VAR_4->mp2_dev->pci_dev->dev;
 struct amd_i2c_dev *VAR_6 = FUNC_0(VAR_4);
 enum dma_data_direction VAR_7 =
   VAR_4->msg->flags & VAR_3 ?
   VAR_0 : VAR_1;

 VAR_4->dma_buf = FUNC_4(VAR_4->msg, 0);
 VAR_4->dma_addr = FUNC_2(VAR_5, VAR_4->dma_buf,
           VAR_4->msg->len,
           VAR_7);

 if (FUNC_5(FUNC_3(VAR_5, VAR_4->dma_addr))) {
  FUNC_1(&VAR_6->pdev->dev,
   "Error while mapping dma buffer %p\n",
   VAR_4->dma_buf);
  return -VAR_2;
 }

 return 0;
}
