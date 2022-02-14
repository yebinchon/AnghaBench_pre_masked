
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmp_pdma_phy {TYPE_1__* vchan; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mmp_pdma_phy*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct mmp_pdma_phy *VAR_4 = VAR_3;

 if (FUNC_0(VAR_4) != 0)
  return VAR_1;

 FUNC_1(&VAR_4->vchan->tasklet);
 return VAR_0;
}
