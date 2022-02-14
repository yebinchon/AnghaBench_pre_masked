
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmc_drvdata {TYPE_1__* csdev; scalar_t__ base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct tmc_drvdata*) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(struct tmc_drvdata *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3->base + VAR_0);
 VAR_4 |= VAR_2;
 FUNC_5(VAR_4, VAR_3->base + VAR_0);
 VAR_4 |= FUNC_0(VAR_1);
 FUNC_5(VAR_4, VAR_3->base + VAR_0);

 if (FUNC_1(VAR_3->base,
         VAR_0, VAR_1, 0)) {
  FUNC_2(&VAR_3->csdev->dev,
  "timeout while waiting for completion of Manual Flush\n");
 }

 FUNC_4(VAR_3);
}
