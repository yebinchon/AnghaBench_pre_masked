
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_uar {int index; } ;
struct TYPE_2__ {int alloc; } ;
struct mthca_dev {TYPE_1__ uar_table; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct mthca_dev *VAR_0, struct mthca_uar *VAR_1)
{
 FUNC_0(&VAR_0->uar_table.alloc, VAR_1->index);
}
