
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {char* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct config_registers {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,struct resource*,int *,struct config_registers const*) ;
 struct of_device_id* FUNC_2 (int ,TYPE_1__*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (char const*,char*) ;
 struct config_registers VAR_4 ;
 struct config_registers VAR_5 ;
 struct config_registers VAR_6 ;
 struct config_registers VAR_7 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 struct resource *VAR_10;
 const struct config_registers *VAR_11;
 const char *VAR_12;

 VAR_9 = FUNC_2(VAR_3, &VAR_8->dev);
 if (VAR_9)
  return FUNC_0(VAR_8, VAR_9->data);

 VAR_10 = FUNC_3(VAR_8, VAR_1, 0);
 if (!VAR_10)
  return -VAR_0;




 VAR_11 = &VAR_5;
 VAR_12 = VAR_8->dev.platform_data;

 if (VAR_12) {
  if (!FUNC_4(VAR_12, "virtex2p"))
   VAR_11 = &VAR_4;
  else if (!FUNC_4(VAR_12, "virtex4"))
   VAR_11 = &VAR_5;
  else if (!FUNC_4(VAR_12, "virtex5"))
   VAR_11 = &VAR_6;
  else if (!FUNC_4(VAR_12, "virtex6"))
   VAR_11 = &VAR_7;
 }

 return FUNC_1(&VAR_8->dev, VAR_8->id, VAR_10,
   &VAR_2, VAR_11);
}
