
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {TYPE_2__* pdev; TYPE_1__* port; int dd_flag; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__* identify; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 unsigned long VAR_5 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct driver_data*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct driver_data *VAR_6)
{
 unsigned long VAR_7, VAR_8 = 0, VAR_9;

 FUNC_1(&VAR_6->pdev->dev,
  "FTL rebuild in progress. Polling for completion.\n");

 VAR_9 = VAR_5;
 VAR_7 = VAR_5 + FUNC_3(VAR_4);

 do {
  if (FUNC_10(FUNC_8(VAR_1,
    &VAR_6->dd_flag)))
   return -VAR_0;
  if (FUNC_5(VAR_6->pdev))
   return -VAR_0;

  if (FUNC_6(VAR_6->port, ((void*)0)) < 0)
   return -VAR_0;

  if (*(VAR_6->port->identify + VAR_3) ==
   VAR_2) {
   FUNC_7(1);

   if (VAR_8++ >= 180) {
    FUNC_1(&VAR_6->pdev->dev,
    "FTL rebuild in progress (%d secs).\n",
    FUNC_2(VAR_5 - VAR_9) / 1000);
    VAR_8 = 0;
   }
  } else {
   FUNC_1(&VAR_6->pdev->dev,
    "FTL rebuild complete (%d secs).\n",
   FUNC_2(VAR_5 - VAR_9) / 1000);
   FUNC_4(VAR_6);
   return 0;
  }
 } while (FUNC_9(VAR_5, VAR_7));


 FUNC_0(&VAR_6->pdev->dev,
  "Timed out waiting for FTL rebuild to complete (%d secs).\n",
  FUNC_2(VAR_5 - VAR_9) / 1000);
 return -VAR_0;
}
