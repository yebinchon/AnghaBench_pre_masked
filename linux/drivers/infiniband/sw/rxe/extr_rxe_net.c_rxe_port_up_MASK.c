
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct rxe_port {TYPE_1__ attr; } ;
struct TYPE_4__ {int dev; } ;
struct rxe_dev {TYPE_2__ ib_dev; struct rxe_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rxe_dev*,int ) ;

void FUNC_2(struct rxe_dev *VAR_2)
{
 struct rxe_port *VAR_3;

 VAR_3 = &VAR_2->port;
 VAR_3->attr.state = VAR_1;

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(&VAR_2->ib_dev.dev, "set active\n");
}
