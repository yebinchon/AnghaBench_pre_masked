
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1400_ts {int ts_idev; int irq; } ;
struct platform_device {int dev; } ;


 struct ucb1400_ts* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ucb1400_ts*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ucb1400_ts *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1->ts_idev);

 return 0;
}
