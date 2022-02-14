
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sti_hdmi {int enabled; int notifier; int clk_pix; int clk_tmds; int clk_phy; TYPE_1__* phy_ops; } ;
struct drm_bridge {struct sti_hdmi* driver_private; } ;
struct TYPE_2__ {int (* stop ) (struct sti_hdmi*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sti_hdmi*,int ) ;
 int FUNC_4 (struct sti_hdmi*,int ) ;
 int FUNC_5 (struct sti_hdmi*,int,int ) ;
 int FUNC_6 (struct sti_hdmi*) ;

__attribute__((used)) static void FUNC_7(struct drm_bridge *VAR_10)
{
 struct sti_hdmi *VAR_11 = VAR_10->driver_private;

 u32 VAR_12 = FUNC_4(VAR_11, VAR_1);

 if (!VAR_11->enabled)
  return;

 FUNC_0("\n");


 VAR_12 &= ~VAR_2;
 FUNC_5(VAR_11, VAR_12, VAR_1);

 FUNC_5(VAR_11, 0xffffffff, VAR_9);


 VAR_11->phy_ops->stop(VAR_11);


 FUNC_3(VAR_11, VAR_7);
 FUNC_3(VAR_11, VAR_6);
 FUNC_3(VAR_11, VAR_8);


 FUNC_5(VAR_11, 0x0000, VAR_3);
 FUNC_5(VAR_11, 0x0000, VAR_4);
 FUNC_5(VAR_11, 0x0060, VAR_5);


 FUNC_2(VAR_11->clk_phy);
 FUNC_2(VAR_11->clk_tmds);
 FUNC_2(VAR_11->clk_pix);

 VAR_11->enabled = 0;

 FUNC_1(VAR_11->notifier, VAR_0);
}
