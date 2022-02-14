
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_4__ {int ac_timer; int chrg_full_timer; TYPE_1__* machinfo; } ;
struct TYPE_3__ {int (* exit ) () ;scalar_t__ gpio_acin; scalar_t__ gpio_batfull; scalar_t__ gpio_batlock; scalar_t__ batfull_irq; scalar_t__ gpio_fatal; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 FUNC_7(((void*)0));

 FUNC_1(&VAR_7->dev, &VAR_0);
 FUNC_1(&VAR_7->dev, &VAR_1);

 FUNC_5(VAR_3);

 FUNC_2(FUNC_4(VAR_6.machinfo->gpio_acin), VAR_2);
 FUNC_2(FUNC_4(VAR_6.machinfo->gpio_batlock), VAR_5);

 if (VAR_6.machinfo->gpio_fatal)
  FUNC_2(FUNC_4(VAR_6.machinfo->gpio_fatal), VAR_5);

 if (VAR_6.machinfo->batfull_irq)
  FUNC_2(FUNC_4(VAR_6.machinfo->gpio_batfull), VAR_4);

 FUNC_3(VAR_6.machinfo->gpio_batlock);
 FUNC_3(VAR_6.machinfo->gpio_batfull);
 FUNC_3(VAR_6.machinfo->gpio_acin);

 if (VAR_6.machinfo->exit)
  VAR_6.machinfo->exit();

 FUNC_0(&VAR_6.chrg_full_timer);
 FUNC_0(&VAR_6.ac_timer);

 return 0;
}
