
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int name; TYPE_1__ dev; int * quirks; void* algo_data; int * algo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct i2c_adapter* FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__*) ;
 int FUNC_6 (struct platform_device*,struct i2c_adapter*) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct i2c_adapter *VAR_7;
 const char *VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (!VAR_6->dev.of_node)
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_6->dev.of_node, "ibm,opal-id", &VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "Missing ibm,opal-id property !\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->algo = &VAR_4;
 VAR_7->algo_data = (void *)(unsigned long)VAR_9;
 VAR_7->quirks = &VAR_5;
 VAR_7->dev.parent = &VAR_6->dev;
 VAR_7->dev.of_node = FUNC_4(VAR_6->dev.of_node);
 VAR_8 = FUNC_3(VAR_6->dev.of_node, "ibm,port-name", ((void*)0));
 if (VAR_8)
  FUNC_7(VAR_7->name, VAR_8, sizeof(VAR_7->name));
 else
  FUNC_7(VAR_7->name, "opal", sizeof(VAR_7->name));

 FUNC_6(VAR_6, VAR_7);
 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  FUNC_0(&VAR_6->dev, "Failed to register the i2c adapter\n");

 return VAR_10;
}
