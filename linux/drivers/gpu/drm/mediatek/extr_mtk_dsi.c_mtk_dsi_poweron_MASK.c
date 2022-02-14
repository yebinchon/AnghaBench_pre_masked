
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pixelclock; int hactive; int hback_porch; int hfront_porch; int hsync_len; } ;
struct mtk_dsi {int refcount; int format; int lanes; int phy; int engine_clk; int digital_clk; scalar_t__ panel; int data_rate; int hs_clk; TYPE_1__ vm; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mtk_dsi*,int ) ;
 int FUNC_8 (struct mtk_dsi*) ;
 int FUNC_9 (struct mtk_dsi*) ;
 int FUNC_10 (struct mtk_dsi*) ;
 int FUNC_11 (struct mtk_dsi*) ;
 int FUNC_12 (struct mtk_dsi*) ;
 int FUNC_13 (struct mtk_dsi*) ;
 int FUNC_14 (struct mtk_dsi*) ;
 int FUNC_15 (struct mtk_dsi*) ;
 int FUNC_16 (struct mtk_dsi*) ;
 int FUNC_17 (struct mtk_dsi*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct mtk_dsi *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7;
 u64 VAR_8, VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (++VAR_5->refcount != 1)
  return 0;

 switch (VAR_5->format) {
 case 131:
  VAR_12 = 16;
  break;
 case 129:
  VAR_12 = 18;
  break;
 case 130:
 case 128:
 default:
  VAR_12 = 24;
  break;
 }







 VAR_8 = VAR_5->vm.pixelclock;
 VAR_10 = VAR_5->vm.hactive + VAR_5->vm.hback_porch + VAR_5->vm.hfront_porch +
   VAR_5->vm.hsync_len;
 VAR_11 = VAR_10 * VAR_12;

 VAR_13 = VAR_4 + VAR_1 + VAR_3 + VAR_2 +
   VAR_0;
 VAR_14 = VAR_13 * VAR_5->lanes * 8;
 VAR_9 = VAR_11 + VAR_14;

 VAR_5->data_rate = FUNC_0(VAR_8 * VAR_9,
       VAR_10 * VAR_5->lanes);

 VAR_7 = FUNC_4(VAR_5->hs_clk, VAR_5->data_rate);
 if (VAR_7 < 0) {
  FUNC_5(VAR_6, "Failed to set data rate: %d\n", VAR_7);
  goto err_refcount;
 }

 FUNC_19(VAR_5->phy);

 VAR_7 = FUNC_3(VAR_5->engine_clk);
 if (VAR_7 < 0) {
  FUNC_5(VAR_6, "Failed to enable engine clock: %d\n", VAR_7);
  goto err_phy_power_off;
 }

 VAR_7 = FUNC_3(VAR_5->digital_clk);
 if (VAR_7 < 0) {
  FUNC_5(VAR_6, "Failed to enable digital clock: %d\n", VAR_7);
  goto err_disable_engine_clk;
 }

 FUNC_10(VAR_5);
 FUNC_14(VAR_5);
 FUNC_12(VAR_5);

 FUNC_15(VAR_5);
 FUNC_13(VAR_5);
 FUNC_17(VAR_5);
 FUNC_9(VAR_5);
 FUNC_16(VAR_5);

 FUNC_8(VAR_5);
 FUNC_11(VAR_5);
 FUNC_7(VAR_5, 0);

 if (VAR_5->panel) {
  if (FUNC_6(VAR_5->panel)) {
   FUNC_1("failed to prepare the panel\n");
   goto err_disable_digital_clk;
  }
 }

 return 0;
err_disable_digital_clk:
 FUNC_2(VAR_5->digital_clk);
err_disable_engine_clk:
 FUNC_2(VAR_5->engine_clk);
err_phy_power_off:
 FUNC_18(VAR_5->phy);
err_refcount:
 VAR_5->refcount--;
 return VAR_7;
}
