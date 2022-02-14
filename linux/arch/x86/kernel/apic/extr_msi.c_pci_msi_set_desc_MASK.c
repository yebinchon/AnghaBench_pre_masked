
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msi_desc {int dummy; } ;
struct TYPE_3__ {int msi_dev; int msi_hwirq; } ;
typedef TYPE_1__ msi_alloc_info_t ;


 int FUNC_0 (int ,struct msi_desc*) ;

void FUNC_1(msi_alloc_info_t *VAR_0, struct msi_desc *VAR_1)
{
 VAR_0->msi_hwirq = FUNC_0(VAR_0->msi_dev, VAR_1);
}
