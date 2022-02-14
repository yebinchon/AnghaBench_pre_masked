
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etb_drvdata {scalar_t__ mode; TYPE_1__* csdev; int spinlock; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct etb_drvdata*) ;
 int FUNC_1 (struct etb_drvdata*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct etb_drvdata*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct etb_drvdata *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_1->spinlock, VAR_2);
 if (VAR_1->mode == VAR_0) {
  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
 }
 FUNC_5(&VAR_1->spinlock, VAR_2);

 FUNC_2(&VAR_1->csdev->dev, "ETB dumped\n");
}
