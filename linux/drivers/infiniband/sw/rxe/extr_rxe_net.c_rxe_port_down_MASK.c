
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
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rxe_dev*,int ) ;
 int FUNC_2 (struct rxe_dev*,int ) ;

void FUNC_3(struct rxe_dev *VAR_3)
{
 struct rxe_port *VAR_4;

 VAR_4 = &VAR_3->port;
 VAR_4->attr.state = VAR_1;

 FUNC_2(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(&VAR_3->ib_dev.dev, "set down\n");
}
