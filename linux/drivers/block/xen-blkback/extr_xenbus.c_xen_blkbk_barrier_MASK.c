
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int dev; int nodename; } ;
struct backend_info {struct xenbus_device* dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct xenbus_transaction,int ,char*,char*,int) ;

int FUNC_2(struct xenbus_transaction VAR_0,
        struct backend_info *VAR_1, int VAR_2)
{
 struct xenbus_device *VAR_3 = VAR_1->dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3->nodename, "feature-barrier",
       "%d", VAR_2);
 if (VAR_4)
  FUNC_0(&VAR_3->dev, "writing feature-barrier (%d)", VAR_4);

 return VAR_4;
}
