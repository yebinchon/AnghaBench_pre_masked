
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int i2c; } ;
struct device {int dummy; } ;
struct i3c_master_controller {TYPE_1__ boardinfo; struct device dev; } ;
struct TYPE_4__ {int flags; } ;
struct i2c_dev_boardinfo {int node; int lvr; TYPE_2__ base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 struct i2c_dev_boardinfo* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct device*,struct device_node*,TYPE_2__*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int
FUNC_5(struct i3c_master_controller *VAR_4,
    struct device_node *VAR_5, u32 *VAR_6)
{
 struct i2c_dev_boardinfo *VAR_7;
 struct device *VAR_8 = &VAR_4->dev;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_8, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_8, VAR_5, &VAR_7->base);
 if (VAR_9)
  return VAR_9;






 if (VAR_7->base.flags & VAR_3) {
  FUNC_0(&VAR_4->dev, "I2C device with 10 bit address not supported.");
  return -VAR_1;
 }


 VAR_7->lvr = VAR_6[2];

 FUNC_2(&VAR_7->node, &VAR_4->boardinfo.i2c);
 FUNC_4(VAR_5);

 return 0;
}
