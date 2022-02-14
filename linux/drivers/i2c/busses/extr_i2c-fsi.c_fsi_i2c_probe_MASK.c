
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {struct device* parent; struct device_node* of_node; } ;
struct TYPE_4__ {int name; struct fsi_i2c_port* algo_data; int * bus_recovery_info; int * algo; TYPE_1__ dev; int owner; } ;
struct fsi_i2c_port {int list; TYPE_2__ adapter; scalar_t__ port; struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {int ports; int fsi; int lock; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,scalar_t__) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,struct fsi_i2c_master*) ;
 struct fsi_i2c_master* FUNC_5 (struct device*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct fsi_i2c_master*) ;
 struct device_node* FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct fsi_i2c_port*) ;
 struct fsi_i2c_port* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct device_node*) ;
 int FUNC_15 (struct device_node*) ;
 int FUNC_16 (int ,int,char*,scalar_t__) ;
 int FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_7)
{
 struct fsi_i2c_master *VAR_8;
 struct fsi_i2c_port *VAR_9;
 struct device_node *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_13(&VAR_8->lock);
 VAR_8->fsi = FUNC_17(VAR_7);
 FUNC_1(&VAR_8->ports);

 VAR_14 = FUNC_6(VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_8(VAR_8->fsi, VAR_2, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_0(VAR_3, VAR_13) + 1;
 FUNC_2(VAR_7, "I2C master has %d ports\n", VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = FUNC_7(VAR_7->of_node, VAR_11);
  if (VAR_10 && !FUNC_14(VAR_10))
   continue;

  VAR_9 = FUNC_11(sizeof(*VAR_9), VAR_1);
  if (!VAR_9) {
   FUNC_15(VAR_10);
   break;
  }

  VAR_9->master = VAR_8;
  VAR_9->port = VAR_11;

  VAR_9->adapter.owner = VAR_4;
  VAR_9->adapter.dev.of_node = VAR_10;
  VAR_9->adapter.dev.parent = VAR_7;
  VAR_9->adapter.algo = &VAR_5;
  VAR_9->adapter.bus_recovery_info = &VAR_6;
  VAR_9->adapter.algo_data = VAR_9;

  FUNC_16(VAR_9->adapter.name, sizeof(VAR_9->adapter.name),
    "i2c_bus-%u", VAR_11);

  VAR_14 = FUNC_9(&VAR_9->adapter);
  if (VAR_14 < 0) {
   FUNC_3(VAR_7, "Failed to register adapter: %d\n", VAR_14);
   FUNC_10(VAR_9);
   continue;
  }

  FUNC_12(&VAR_9->list, &VAR_8->ports);
 }

 FUNC_4(VAR_7, VAR_8);

 return 0;
}
