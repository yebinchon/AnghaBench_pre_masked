
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tfp410 {TYPE_1__* dev; int ddc; int * hpd; int connector_type; } ;
struct device_node {int fwnode; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int * FUNC_3 (int *,char*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct tfp410 *VAR_6)
{
 struct device_node *VAR_7, *VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_6(VAR_6->dev->of_node, 1, -1);
 if (!VAR_7)
  return -VAR_2;

 if (FUNC_4(VAR_7, "hdmi-connector"))
  VAR_6->connector_type = VAR_1;
 else
  VAR_6->connector_type = VAR_0;

 VAR_6->hpd = FUNC_3(&VAR_7->fwnode,
     "hpd-gpios", 0, VAR_5, "hpd");
 if (FUNC_0(VAR_6->hpd)) {
  VAR_9 = FUNC_1(VAR_6->hpd);
  VAR_6->hpd = ((void*)0);
  if (VAR_9 == -VAR_3)
   VAR_9 = 0;
  else
   goto fail;
 }

 VAR_8 = FUNC_8(VAR_7, "ddc-i2c-bus", 0);
 if (!VAR_8)
  goto fail;

 VAR_6->ddc = FUNC_5(VAR_8);
 if (VAR_6->ddc)
  FUNC_2(VAR_6->dev, "Connector's ddc i2c bus found\n");
 else
  VAR_9 = -VAR_4;

 FUNC_7(VAR_8);

fail:
 FUNC_7(VAR_7);
 return VAR_9;
}
