
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {TYPE_1__* csdev; int base; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int *,char*) ;

void FUNC_2(struct tmc_drvdata *VAR_2)
{

 if (FUNC_0(VAR_2->base,
         VAR_0, VAR_1, 1)) {
  FUNC_1(&VAR_2->csdev->dev,
   "timeout while waiting for TMC to be Ready\n");
 }
}
