
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_gemini {int ide_pins; int muxmode; int sata0_pclk; int sata1_pclk; scalar_t__ sata_bridge; struct regmap* base; struct device* dev; } ;
struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
typedef enum gemini_muxmode { ____Placeholder_gemini_muxmode } gemini_muxmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 struct regmap* FUNC_5 (struct device*,struct resource*) ;
 struct sata_gemini* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct sata_gemini*) ;
 int FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct sata_gemini*) ;
 int FUNC_13 (struct regmap*,int ,int,int) ;
 struct sata_gemini* VAR_9 ;
 struct regmap* FUNC_14 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct sata_gemini *VAR_13;
 struct regmap *VAR_14;
 struct resource *VAR_15;
 enum gemini_muxmode VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_13 = FUNC_6(VAR_11, sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_2;
 VAR_13->dev = VAR_11;

 VAR_15 = FUNC_11(VAR_10, VAR_8, 0);
 if (!VAR_15)
  return -VAR_1;

 VAR_13->base = FUNC_5(VAR_11, VAR_15);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 VAR_14 = FUNC_14(VAR_12, "syscon");
 if (FUNC_0(VAR_14)) {
  FUNC_3(VAR_11, "no global syscon\n");
  return FUNC_1(VAR_14);
 }


 if (FUNC_9(VAR_12, "cortina,gemini-enable-sata-bridge")) {
  VAR_19 = FUNC_7(VAR_13);
  if (VAR_19)
   return VAR_19;
 }

 if (FUNC_9(VAR_12, "cortina,gemini-enable-ide-pins"))
  VAR_13->ide_pins = 1;

 if (!VAR_13->sata_bridge && !VAR_13->ide_pins) {
  FUNC_3(VAR_11, "neither SATA bridge or IDE output enabled\n");
  VAR_19 = -VAR_0;
  goto out_unprep_clk;
 }

 VAR_19 = FUNC_10(VAR_12, "cortina,gemini-ata-muxmode", &VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_11, "could not parse ATA muxmode\n");
  goto out_unprep_clk;
 }
 if (VAR_16 > VAR_6) {
  FUNC_3(VAR_11, "illegal muxmode %d\n", VAR_16);
  VAR_19 = -VAR_0;
  goto out_unprep_clk;
 }
 VAR_13->muxmode = VAR_16;
 VAR_18 = VAR_4;
 VAR_17 = (VAR_16 << VAR_5);

 VAR_19 = FUNC_13(VAR_14, VAR_3, VAR_18, VAR_17);
 if (VAR_19) {
  FUNC_3(VAR_11, "unable to set up IDE muxing\n");
  VAR_19 = -VAR_1;
  goto out_unprep_clk;
 }






 if (VAR_13->ide_pins) {
  VAR_19 = FUNC_8(VAR_11);
  if (VAR_19)
   return VAR_19;
 }

 FUNC_4(VAR_11, "set up the Gemini IDE/SATA nexus\n");
 FUNC_12(VAR_10, VAR_13);
 VAR_9 = VAR_13;

 return 0;

out_unprep_clk:
 if (VAR_13->sata_bridge) {
  FUNC_2(VAR_13->sata1_pclk);
  FUNC_2(VAR_13->sata0_pclk);
 }
 return VAR_19;
}
