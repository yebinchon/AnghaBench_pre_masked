
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_2__* adapter; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,char const*,int ) ;
 struct i2c_client* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct device_node*,char*,char const*) ;
 int FUNC_3 (struct device_node*,char*,int,int *) ;

struct i2c_client *FUNC_4(struct i2c_client *VAR_0,
      const char *VAR_1,
      u16 VAR_2)
{
 struct device_node *VAR_3 = VAR_0->dev.of_node;
 u32 VAR_4 = VAR_2;
 int VAR_5;

 if (VAR_3) {
  VAR_5 = FUNC_2(VAR_3, "reg-names", VAR_1);
  if (VAR_5 >= 0)
   FUNC_3(VAR_3, "reg", VAR_5, &VAR_4);
 }

 FUNC_0(&VAR_0->adapter->dev, "Address for %s : 0x%x\n", VAR_1, VAR_4);
 return FUNC_1(VAR_0->adapter, VAR_4);
}
