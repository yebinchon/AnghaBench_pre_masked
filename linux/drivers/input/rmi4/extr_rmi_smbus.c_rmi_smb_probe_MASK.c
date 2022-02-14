
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_device_platform_data {int irq; } ;
struct TYPE_2__ {char* proto_name; int * ops; struct rmi_device_platform_data pdata; int * dev; } ;
struct rmi_smb_xport {TYPE_1__ xport; int mappingtable_mutex; int page_mutex; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 struct rmi_device_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 struct rmi_smb_xport* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct rmi_smb_xport*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct rmi_smb_xport*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct rmi_device_platform_data *VAR_9 = FUNC_1(&VAR_7->dev);
 struct rmi_smb_xport *VAR_10;
 int VAR_11;
 int VAR_12;

 if (!VAR_9) {
  FUNC_0(&VAR_7->dev, "no platform data, aborting\n");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_7->adapter,
         VAR_4 |
         VAR_3)) {
  FUNC_0(&VAR_7->dev,
   "adapter does not support required functionality\n");
  return -VAR_0;
 }

 if (VAR_7->irq <= 0) {
  FUNC_0(&VAR_7->dev, "no IRQ provided, giving up\n");
  return VAR_7->irq ? VAR_7->irq : -VAR_0;
 }

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(struct rmi_smb_xport),
    VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_8(VAR_5, &VAR_7->dev, "Probing %s\n",
  FUNC_3(&VAR_7->dev));

 VAR_10->client = VAR_7;
 FUNC_7(&VAR_10->page_mutex);
 FUNC_7(&VAR_10->mappingtable_mutex);

 VAR_10->xport.dev = &VAR_7->dev;
 VAR_10->xport.pdata = *VAR_9;
 VAR_10->xport.pdata.irq = VAR_7->irq;
 VAR_10->xport.proto_name = "smb";
 VAR_10->xport.ops = &VAR_6;

 VAR_11 = FUNC_10(VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 FUNC_8(VAR_5, &VAR_7->dev, "Smbus version is %d",
  VAR_11);

 if (VAR_11 != 2 && VAR_11 != 3) {
  FUNC_0(&VAR_7->dev, "Unrecognized SMB version %d\n",
    VAR_11);
  return -VAR_0;
 }

 FUNC_6(VAR_7, VAR_10);

 FUNC_2(&VAR_7->dev, "registering SMbus-connected sensor\n");

 VAR_12 = FUNC_9(&VAR_10->xport);
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "failed to register sensor: %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
