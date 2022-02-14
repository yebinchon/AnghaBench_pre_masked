
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em_sti_priv {TYPE_1__* pdev; } ;
struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct em_sti_priv* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct em_sti_priv*,int ) ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_1)
{
 struct em_sti_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->pdev->dev, "used for oneshot clock events\n");
 FUNC_2(VAR_2, VAR_0);
 return 0;
}
