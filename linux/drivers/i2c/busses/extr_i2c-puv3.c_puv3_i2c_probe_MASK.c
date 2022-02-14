
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int id; } ;
struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {int nr; TYPE_1__ dev; int class; int * algo; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_4 (int,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct i2c_adapter*) ;
 int VAR_6 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,char*) ;
 int FUNC_9 (struct resource*) ;
 int FUNC_10 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct i2c_adapter *VAR_8;
 struct resource *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(VAR_7, VAR_5, 0);
 if (!VAR_9)
  return -VAR_1;

 if (!FUNC_8(VAR_9->start, FUNC_9(VAR_9), "puv3_i2c"))
  return -VAR_0;

 VAR_8 = FUNC_4(sizeof(struct i2c_adapter), VAR_3);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(&VAR_7->dev, "can't allocate interface!\n");
  VAR_10 = -VAR_2;
  goto fail_nomem;
 }
 FUNC_10(VAR_8->name, sizeof(VAR_8->name), "PUV3-I2C at 0x%08x",
   VAR_9->start);
 VAR_8->algo = &VAR_6;
 VAR_8->class = VAR_4;
 VAR_8->dev.parent = &VAR_7->dev;

 FUNC_6(VAR_7, VAR_8);

 VAR_8->nr = VAR_7->id;
 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  goto fail_add_adapter;

 FUNC_1(&VAR_7->dev, "PKUnity v3 i2c bus adapter.\n");
 return 0;

fail_add_adapter:
 FUNC_3(VAR_8);
fail_nomem:
 FUNC_7(VAR_9->start, FUNC_9(VAR_9));

 return VAR_10;
}
