
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;
struct device_node {int dummy; } ;
struct adnp {struct i2c_client* client; int i2c_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adnp*,int ) ;
 int FUNC_1 (struct adnp*) ;
 struct adnp* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct i2c_client*,struct adnp*) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 struct adnp *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_5, "nr-gpios", &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_3->irq = FUNC_4(VAR_5, 0);
 if (!VAR_3->irq)
  return -VAR_1;

 VAR_6 = FUNC_2(&VAR_3->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(&VAR_6->i2c_lock);
 VAR_6->client = VAR_3;

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (FUNC_6(VAR_5, "interrupt-controller", ((void*)0))) {
  VAR_8 = FUNC_1(VAR_6);
  if (VAR_8)
   return VAR_8;
 }

 FUNC_3(VAR_3, VAR_6);

 return 0;
}
