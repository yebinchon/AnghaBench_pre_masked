
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int of_node; int * funcs; } ;
struct mtk_hdmi {TYPE_1__ bridge; int phy; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct mtk_hdmi* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_8 (struct mtk_hdmi*) ;
 int FUNC_9 (struct mtk_hdmi*,struct platform_device*) ;
 int FUNC_10 (struct mtk_hdmi*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,struct mtk_hdmi*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_3)
{
 struct mtk_hdmi *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = VAR_5;

 VAR_6 = FUNC_9(VAR_4, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_4->phy = FUNC_5(VAR_5, "hdmi");
 if (FUNC_0(VAR_4->phy)) {
  VAR_6 = FUNC_1(VAR_4->phy);
  FUNC_3(VAR_5, "Failed to get HDMI PHY: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_12(VAR_3, VAR_4);

 VAR_6 = FUNC_10(VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_5, "Failed to initialize hdmi output\n");
  return VAR_6;
 }

 FUNC_11(VAR_5);

 VAR_4->bridge.funcs = &VAR_2;
 VAR_4->bridge.of_node = VAR_3->dev.of_node;
 FUNC_6(&VAR_4->bridge);

 VAR_6 = FUNC_8(VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_5, "Failed to enable audio clocks: %d\n", VAR_6);
  goto err_bridge_remove;
 }

 FUNC_2(VAR_5, "mediatek hdmi probe success\n");
 return 0;

err_bridge_remove:
 FUNC_7(&VAR_4->bridge);
 return VAR_6;
}
