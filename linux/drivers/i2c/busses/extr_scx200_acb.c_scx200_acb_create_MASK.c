
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct i2c_adapter {TYPE_1__ dev; } ;
struct scx200_acb_iface {struct scx200_acb_iface* next; struct i2c_adapter adapter; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 struct scx200_acb_iface* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct scx200_acb_iface*) ;
 int FUNC_6 (struct scx200_acb_iface*) ;

__attribute__((used)) static int FUNC_7(struct scx200_acb_iface *VAR_3)
{
 struct i2c_adapter *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_3->adapter;

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  FUNC_4("probe failed\n");
  return VAR_5;
 }

 FUNC_6(VAR_3);

 if (FUNC_0(VAR_4) < 0) {
  FUNC_3("failed to register\n");
  return -VAR_0;
 }

 if (!VAR_4->dev.parent) {

  FUNC_1(&VAR_2);
  VAR_3->next = VAR_1;
  VAR_1 = VAR_3;
  FUNC_2(&VAR_2);
 }

 return 0;
}
