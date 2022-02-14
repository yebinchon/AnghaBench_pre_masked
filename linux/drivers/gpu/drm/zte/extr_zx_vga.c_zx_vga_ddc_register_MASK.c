
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct i2c_adapter {int name; int * algo; TYPE_1__ dev; int class; int owner; } ;
struct zx_vga_i2c {struct i2c_adapter adap; int lock; } ;
struct zx_vga {struct zx_vga_i2c* ddc; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zx_vga_i2c* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,struct zx_vga*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct zx_vga *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct i2c_adapter *VAR_7;
 struct zx_vga_i2c *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_5->ddc = VAR_8;
 FUNC_4(&VAR_8->lock);

 VAR_7 = &VAR_8->adap;
 VAR_7->owner = VAR_3;
 VAR_7->class = VAR_2;
 VAR_7->dev.parent = VAR_6;
 VAR_7->algo = &VAR_4;
 FUNC_5(VAR_7->name, sizeof(VAR_7->name), "zx vga i2c");

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_6, "failed to add I2C adapter: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_3(VAR_7, VAR_5);

 return 0;
}
