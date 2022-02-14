
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {struct device_node* of_node; struct device* parent; } ;
struct TYPE_4__ {int retries; TYPE_1__ dev; struct ec_i2c_device* algo_data; int * algo; int name; int owner; } ;
struct ec_i2c_device {TYPE_2__ adap; struct device* dev; struct cros_ec_device* ec; int remote_bus; } ;
struct device_node {int dummy; } ;
struct cros_ec_device {int cmd_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct cros_ec_device* FUNC_1 (int ) ;
 struct ec_i2c_device* FUNC_2 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct platform_device*,struct ec_i2c_device*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct cros_ec_device *VAR_8 = FUNC_1(VAR_6->dev.parent);
 struct device *VAR_9 = &VAR_6->dev;
 struct ec_i2c_device *VAR_10 = ((void*)0);
 u32 VAR_11;
 int VAR_12;

 if (!VAR_8->cmd_xfer) {
  FUNC_0(VAR_9, "Missing sendrecv\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_7, "google,remote-bus", &VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_9, "Couldn't read remote-bus property\n");
  return VAR_12;
 }
 VAR_10->remote_bus = VAR_11;

 VAR_10->ec = VAR_8;
 VAR_10->dev = VAR_9;

 VAR_10->adap.owner = VAR_4;
 FUNC_6(VAR_10->adap.name, "cros-ec-i2c-tunnel", sizeof(VAR_10->adap.name));
 VAR_10->adap.algo = &VAR_5;
 VAR_10->adap.algo_data = VAR_10;
 VAR_10->adap.dev.parent = &VAR_6->dev;
 VAR_10->adap.dev.of_node = VAR_7;
 VAR_10->adap.retries = VAR_3;

 VAR_12 = FUNC_3(&VAR_10->adap);
 if (VAR_12)
  return VAR_12;
 FUNC_5(VAR_6, VAR_10);

 return VAR_12;
}
