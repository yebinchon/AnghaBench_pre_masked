
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipoctal_channel {int tty_port; } ;
struct ipoctal {int tty_drv; struct ipoctal_channel* channel; TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* free_irq ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ipoctal*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ipoctal *VAR_1)
{
 int VAR_2;

 VAR_1->dev->bus->ops->free_irq(VAR_1->dev);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct ipoctal_channel *VAR_3 = &VAR_1->channel[VAR_2];
  FUNC_5(VAR_1->tty_drv, VAR_2);
  FUNC_4(&VAR_3->tty_port);
  FUNC_3(&VAR_3->tty_port);
 }

 FUNC_6(VAR_1->tty_drv);
 FUNC_1(VAR_1->tty_drv);
 FUNC_0(VAR_1);
}
