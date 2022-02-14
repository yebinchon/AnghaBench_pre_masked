
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int lock; scalar_t__ tty; } ;
struct timer_list {int dummy; } ;
struct srmcons_private {int timer; struct tty_port port; } ;


 struct srmcons_private* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (struct tty_port*) ;
 struct srmcons_private* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct timer_list *VAR_4)
{
 struct srmcons_private *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 struct tty_port *VAR_6 = &VAR_5->port;
 unsigned long VAR_7;
 int VAR_8 = 10;

 FUNC_2(VAR_7);
 if (FUNC_5(&VAR_1)) {
  if (!FUNC_7(VAR_6))
   VAR_8 = 100;
  FUNC_6(&VAR_1);
 }

 FUNC_4(&VAR_6->lock);
 if (VAR_6->tty)
  FUNC_3(&VAR_5->timer, VAR_0 + VAR_8);
 FUNC_6(&VAR_6->lock);

 FUNC_1(VAR_7);
}
