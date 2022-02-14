
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int icm_page; int icm_dma; int icm_virt; } ;
struct mthca_dev {TYPE_1__ eq_table; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_dev*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(struct mthca_dev *VAR_2)
{
 FUNC_1(VAR_2, VAR_2->eq_table.icm_virt, 1);
 FUNC_2(VAR_2->pdev, VAR_2->eq_table.icm_dma, VAR_0,
         VAR_1);
 FUNC_0(VAR_2->eq_table.icm_page);
}
