
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {struct h5* priv; } ;
struct h5 {TYPE_1__* vnd; } ;
struct TYPE_2__ {int (* setup ) (struct h5*) ;} ;


 int FUNC_0 (struct h5*) ;

__attribute__((used)) static int FUNC_1(struct hci_uart *VAR_0)
{
 struct h5 *VAR_1 = VAR_0->priv;

 if (VAR_1->vnd && VAR_1->vnd->setup)
  return VAR_1->vnd->setup(VAR_1);

 return 0;
}
