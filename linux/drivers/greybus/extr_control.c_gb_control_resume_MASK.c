
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gb_control {TYPE_2__* connection; } ;
struct TYPE_4__ {TYPE_1__* intf; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(struct gb_control *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->connection);
 if (VAR_1) {
  FUNC_0(&VAR_0->connection->intf->dev,
   "failed to enable control connection: %d\n", VAR_1);
  return VAR_1;
 }

 return 0;
}
