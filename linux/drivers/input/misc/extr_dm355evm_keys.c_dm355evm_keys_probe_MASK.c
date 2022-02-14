
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_1__ id; } ;
struct dm355evm_keys {struct input_dev* input; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct input_dev* FUNC_1 (int *) ;
 struct dm355evm_keys* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int *,int ,int,int ,struct dm355evm_keys*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct input_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct dm355evm_keys *VAR_9;
 struct input_dev *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2(&VAR_8->dev, sizeof (*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_1(&VAR_8->dev);
 if (!VAR_10)
  return -VAR_2;

 VAR_9->dev = &VAR_8->dev;
 VAR_9->input = VAR_10;

 VAR_10->name = "DM355 EVM Controls";
 VAR_10->phys = "dm355evm/input0";

 VAR_10->id.bustype = VAR_0;
 VAR_10->id.product = 0x0355;
 VAR_10->id.version = FUNC_4(VAR_1);

 VAR_12 = FUNC_7(VAR_10, VAR_6, ((void*)0));
 if (VAR_12)
  return VAR_12;




 VAR_11 = FUNC_6(VAR_8, 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = FUNC_3(&VAR_8->dev, VAR_11,
       ((void*)0), VAR_7,
       VAR_5 | VAR_4,
       FUNC_0(&VAR_8->dev), VAR_9);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12)
  return VAR_12;

 return 0;
}
