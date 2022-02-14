
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_kp {int input; int timer; int irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct omap_kp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_kp*) ;
 int VAR_2 ;
 int FUNC_4 (int,scalar_t__) ;
 struct omap_kp* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct omap_kp *VAR_4 = FUNC_5(VAR_3);


 FUNC_6(&VAR_2);
 FUNC_4(1, VAR_0 + VAR_1);
 FUNC_1(VAR_4->irq, VAR_4);

 FUNC_0(&VAR_4->timer);
 FUNC_7(&VAR_2);


 FUNC_2(VAR_4->input);

 FUNC_3(VAR_4);

 return 0;
}
