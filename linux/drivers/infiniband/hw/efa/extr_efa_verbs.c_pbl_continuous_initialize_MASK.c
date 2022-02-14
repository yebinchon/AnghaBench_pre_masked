
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dma_addr; } ;
struct TYPE_5__ {TYPE_1__ continuous; } ;
struct pbl_context {int pbl_buf_size_in_bytes; TYPE_2__ phys; int pbl_buf; } ;
struct efa_dev {int ibdev; TYPE_3__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct efa_dev *VAR_2,
         struct pbl_context *VAR_3)
{
 dma_addr_t VAR_4;

 VAR_4 = FUNC_0(&VAR_2->pdev->dev, VAR_3->pbl_buf,
      VAR_3->pbl_buf_size_in_bytes, VAR_0);
 if (FUNC_1(&VAR_2->pdev->dev, VAR_4)) {
  FUNC_3(&VAR_2->ibdev, "Unable to map pbl to DMA address\n");
  return -VAR_1;
 }

 VAR_3->phys.continuous.dma_addr = VAR_4;
 FUNC_2(&VAR_2->ibdev,
    "pbl continuous - dma_addr = %pad, size[%u]\n",
    &VAR_4, VAR_3->pbl_buf_size_in_bytes);

 return 0;
}
