
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {TYPE_1__* pdev; TYPE_2__* port; int dd_flag; scalar_t__ sr; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct driver_data *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->sr || !VAR_4->port)
  return -VAR_0;




 if (!FUNC_2(VAR_3, &VAR_4->port->flags) &&
     !FUNC_2(VAR_1, &VAR_4->dd_flag) &&
     !FUNC_2(VAR_2, &VAR_4->dd_flag)) {
  VAR_5 = FUNC_1(VAR_4->port);
  if (VAR_5)
   FUNC_0(&VAR_4->pdev->dev,
    "STANDBY IMMEDIATE failed\n");
 }
 return VAR_5;
}
