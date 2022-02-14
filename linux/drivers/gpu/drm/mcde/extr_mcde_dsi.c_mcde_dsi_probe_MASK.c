
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mipi_dsi_host {int * ops; struct device* dev; } ;
struct mcde_dsi {struct mipi_dsi_host dsi_host; scalar_t__ regs; scalar_t__ prcmu; struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;
 scalar_t__ FUNC_5 (struct device*,struct resource*) ;
 struct mcde_dsi* FUNC_6 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct mipi_dsi_host*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct mcde_dsi*) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct mcde_dsi *VAR_8;
 struct mipi_dsi_host *VAR_9;
 struct resource *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_8 = FUNC_6(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->dev = VAR_7;
 FUNC_9(VAR_6, VAR_8);


 VAR_8->prcmu =
  FUNC_11("stericsson,db8500-prcmu");
 if (FUNC_0(VAR_8->prcmu)) {
  FUNC_3(VAR_7, "no PRCMU regmap\n");
  return FUNC_1(VAR_8->prcmu);
 }

 VAR_10 = FUNC_8(VAR_6, VAR_3, 0);
 VAR_8->regs = FUNC_5(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->regs)) {
  FUNC_3(VAR_7, "no DSI regs\n");
  return FUNC_1(VAR_8->regs);
 }

 VAR_11 = FUNC_10(VAR_8->regs + VAR_0);
 FUNC_4(VAR_7, "HW revision 0x%08x\n", VAR_11);

 VAR_9 = &VAR_8->dsi_host;
 VAR_9->dev = VAR_7;
 VAR_9->ops = &VAR_5;
 VAR_12 = FUNC_7(VAR_9);
 if (VAR_12 < 0) {
  FUNC_3(VAR_7, "failed to register DSI host: %d\n", VAR_12);
  return VAR_12;
 }
 FUNC_4(VAR_7, "registered DSI host\n");

 FUNC_9(VAR_6, VAR_8);
 return FUNC_2(VAR_7, &VAR_4);
}
