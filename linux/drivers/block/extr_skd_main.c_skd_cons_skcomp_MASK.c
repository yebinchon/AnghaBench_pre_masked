
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {struct fit_comp_error_info* skerr_table; struct fit_completion_entry_v1* skcomp_table; int cq_dma_address; TYPE_1__* pdev; } ;
struct fit_completion_entry_v1 {int dummy; } ;
struct fit_comp_error_info {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int) ;
 struct fit_completion_entry_v1* FUNC_1 (int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct skd_device *VAR_4)
{
 int VAR_5 = 0;
 struct fit_completion_entry_v1 *VAR_6;

 FUNC_0(&VAR_4->pdev->dev,
  "comp pci_alloc, total bytes %zd entries %d\n",
  VAR_3, VAR_2);

 VAR_6 = FUNC_1(&VAR_4->pdev->dev, VAR_3,
        &VAR_4->cq_dma_address, VAR_1);

 if (VAR_6 == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto err_out;
 }

 VAR_4->skcomp_table = VAR_6;
 VAR_4->skerr_table = (struct fit_comp_error_info *)((char *)VAR_6 +
          sizeof(*VAR_6) *
          VAR_2);

err_out:
 return VAR_5;
}
