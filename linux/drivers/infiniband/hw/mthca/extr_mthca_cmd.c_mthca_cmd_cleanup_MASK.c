
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int dbell_map; int pool; } ;
struct mthca_dev {TYPE_1__ cmd; int hcr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mthca_dev *VAR_1)
{
 FUNC_0(VAR_1->cmd.pool);
 FUNC_1(VAR_1->hcr);
 if (VAR_1->cmd.flags & VAR_0)
  FUNC_1(VAR_1->cmd.dbell_map);
}
