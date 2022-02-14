
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int dev; } ;
struct tty_port {int dummy; } ;
struct ipoctal_channel {int rx_enable; TYPE_2__* regs; } ;
struct TYPE_3__ {int cr; } ;
struct TYPE_4__ {TYPE_1__ w; } ;


 int VAR_0 ;
 struct ipoctal_channel* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tty_port *VAR_1, struct tty_struct *VAR_2)
{
 struct ipoctal_channel *VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev);





 FUNC_1(VAR_0, &VAR_3->regs->w.cr);
 VAR_3->rx_enable = 1;
 return 0;
}
