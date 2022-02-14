
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skd_request_context {int n_sg; int data_dir; int * sg; scalar_t__ sksg_dma_address; TYPE_1__* sksg_list; } ;
struct skd_device {TYPE_2__* pdev; } ;
struct fit_sg_descriptor {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ next_desc_ptr; } ;


 int FUNC_0 (int *,int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct skd_device *VAR_0,
          struct skd_request_context *VAR_1)
{




 VAR_1->sksg_list[VAR_1->n_sg - 1].next_desc_ptr =
  VAR_1->sksg_dma_address +
  ((VAR_1->n_sg) * sizeof(struct fit_sg_descriptor));
 FUNC_0(&VAR_0->pdev->dev, &VAR_1->sg[0], VAR_1->n_sg,
       VAR_1->data_dir);
}
