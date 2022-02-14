
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dummy; } ;
typedef int pm_message_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_3__* VAR_8 ;
 int FUNC_3 () ;
 scalar_t__ VAR_9 ;
 TYPE_2__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* VAR_12 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_13, pm_message_t VAR_14)
{
 if (FUNC_2(&VAR_12->dev))
  FUNC_7(VAR_0);
 else
  FUNC_6(VAR_0);

 if (FUNC_2(&VAR_8->dev))
  FUNC_5(VAR_1);
 else
  FUNC_4(VAR_1);

 if (!FUNC_2(&VAR_10->dev)) {
  FUNC_0(VAR_7, VAR_2);
 } else if ((VAR_9 && VAR_11 == VAR_6) ||
     (!VAR_9 && VAR_11 == VAR_5)) {
  FUNC_3();


  FUNC_1(VAR_7, VAR_3);
  FUNC_1(VAR_7, VAR_4);

  FUNC_1(VAR_7, VAR_2);
 }

 return 0;
}
