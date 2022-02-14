
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tmc_drvdata {TYPE_1__* csdev; scalar_t__ base; struct etr_buf* etr_buf; } ;
struct etr_buf {int full; TYPE_2__* ops; scalar_t__ len; } ;
struct TYPE_4__ {int (* sync ) (struct etr_buf*,int ,int ) ;} ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct etr_buf*,int ,int ) ;
 int FUNC_5 (struct tmc_drvdata*) ;
 int FUNC_6 (struct tmc_drvdata*) ;

__attribute__((used)) static void FUNC_7(struct tmc_drvdata *VAR_3)
{
 struct etr_buf *VAR_4 = VAR_3->etr_buf;
 u64 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_5(VAR_3);
 VAR_6 = FUNC_6(VAR_3);
 VAR_7 = FUNC_3(VAR_3->base + VAR_0);





 if (FUNC_1(VAR_7 & VAR_2)) {
  FUNC_2(&VAR_3->csdev->dev,
   "tmc memory error detected, truncating buffer\n");
  VAR_4->len = 0;
  VAR_4->full = 0;
  return;
 }

 VAR_4->full = VAR_7 & VAR_1;

 FUNC_0(!VAR_4->ops || !VAR_4->ops->sync);

 VAR_4->ops->sync(VAR_4, VAR_5, VAR_6);
}
