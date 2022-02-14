
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {int serdev; struct h5* priv; } ;
struct h5 {TYPE_1__* vnd; int unrel; int rel; int unack; int timer; } ;
struct TYPE_2__ {int (* close ) (struct h5*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct h5*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct h5*) ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_0)
{
 struct h5 *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->timer);

 FUNC_2(&VAR_1->unack);
 FUNC_2(&VAR_1->rel);
 FUNC_2(&VAR_1->unrel);

 if (VAR_1->vnd && VAR_1->vnd->close)
  VAR_1->vnd->close(VAR_1);

 if (!VAR_0->serdev)
  FUNC_1(VAR_1);

 return 0;
}
