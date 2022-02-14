
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct hdmi_context {struct i2c_adapter* ddc_adpt; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_2 (int *,int *,char const*) ;
 struct i2c_adapter* FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct hdmi_context *VAR_2)
{
 const char *VAR_3 = "samsung,exynos4210-hdmiddc";
 struct device_node *VAR_4;
 struct i2c_adapter *VAR_5;

 VAR_4 = FUNC_2(((void*)0), ((void*)0), VAR_3);
 if (VAR_4)
  VAR_4 = FUNC_4(VAR_4);
 else
  VAR_4 = FUNC_6(VAR_2->dev->of_node, "ddc", 0);

 if (!VAR_4) {
  FUNC_0(VAR_2->dev,
         "Failed to find ddc node in device tree\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_3(VAR_4);
 FUNC_5(VAR_4);

 if (!VAR_5) {
  FUNC_1("Failed to get ddc i2c adapter by node\n");
  return -VAR_1;
 }

 VAR_2->ddc_adpt = VAR_5;

 return 0;
}
