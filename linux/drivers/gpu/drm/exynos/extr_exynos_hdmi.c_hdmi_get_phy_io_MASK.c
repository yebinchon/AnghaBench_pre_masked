
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hdmi_context {int hdmiphy_port; TYPE_2__* dev; int regs_hdmiphy; TYPE_1__* drv_data; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {scalar_t__ is_apb_phy; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_2 (int *,int *,char const*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,int ) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct hdmi_context *VAR_3)
{
 const char *VAR_4 = "samsung,exynos4212-hdmiphy";
 struct device_node *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_2(((void*)0), ((void*)0), VAR_4);
 if (!VAR_5) {
  VAR_5 = FUNC_6(VAR_3->dev->of_node, "phy", 0);
  if (!VAR_5) {
   FUNC_0(VAR_3->dev,
          "Failed to find hdmiphy node in device tree\n");
   return -VAR_0;
  }
 }

 if (VAR_3->drv_data->is_apb_phy) {
  VAR_3->regs_hdmiphy = FUNC_4(VAR_5, 0);
  if (!VAR_3->regs_hdmiphy) {
   FUNC_0(VAR_3->dev,
          "failed to ioremap hdmi phy\n");
   VAR_6 = -VAR_1;
   goto out;
  }
 } else {
  VAR_3->hdmiphy_port = FUNC_3(VAR_5);
  if (!VAR_3->hdmiphy_port) {
   FUNC_1("Failed to get hdmi phy i2c client\n");
   VAR_6 = -VAR_2;
   goto out;
  }
 }

out:
 FUNC_5(VAR_5);
 return VAR_6;
}
