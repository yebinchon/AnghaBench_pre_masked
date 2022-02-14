
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 int VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_7(VAR_2, "wakeup-gpios", 0);
 if (!FUNC_4(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_3, "egalax_irq");
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev,
   "request gpio failed, cannot wake up controller: %d\n",
   VAR_4);
  return VAR_4;
 }


 FUNC_2(VAR_3, 0);
 FUNC_6(VAR_3, 1);


 FUNC_1(VAR_3);
 FUNC_3(VAR_3);

 return 0;
}
