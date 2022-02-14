
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sata_gemini {int sata_bridge; void* sata1_pclk; void* sata0_pclk; scalar_t__ base; void* sata1_reset; void* sata0_reset; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,int ,int ) ;
 void* FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct sata_gemini *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_3->sata0_pclk = FUNC_7(VAR_4, "SATA0_PCLK");
 if (FUNC_0(VAR_3->sata0_pclk)) {
  FUNC_5(VAR_4, "no SATA0 PCLK");
  return -VAR_0;
 }
 VAR_3->sata1_pclk = FUNC_7(VAR_4, "SATA1_PCLK");
 if (FUNC_0(VAR_3->sata1_pclk)) {
  FUNC_5(VAR_4, "no SATA1 PCLK");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_3->sata0_pclk);
 if (VAR_7) {
  FUNC_9("failed to enable SATA0 PCLK\n");
  return VAR_7;
 }
 VAR_7 = FUNC_4(VAR_3->sata1_pclk);
 if (VAR_7) {
  FUNC_9("failed to enable SATA1 PCLK\n");
  FUNC_3(VAR_3->sata0_pclk);
  return VAR_7;
 }

 VAR_3->sata0_reset = FUNC_8(VAR_4, "sata0");
 if (FUNC_0(VAR_3->sata0_reset)) {
  FUNC_5(VAR_4, "no SATA0 reset controller\n");
  FUNC_3(VAR_3->sata1_pclk);
  FUNC_3(VAR_3->sata0_pclk);
  return FUNC_1(VAR_3->sata0_reset);
 }
 VAR_3->sata1_reset = FUNC_8(VAR_4, "sata1");
 if (FUNC_0(VAR_3->sata1_reset)) {
  FUNC_5(VAR_4, "no SATA1 reset controller\n");
  FUNC_3(VAR_3->sata1_pclk);
  FUNC_3(VAR_3->sata0_pclk);
  return FUNC_1(VAR_3->sata1_reset);
 }

 VAR_5 = FUNC_10(VAR_3->base + VAR_1);
 VAR_6 = FUNC_10(VAR_3->base + VAR_2);
 VAR_3->sata_bridge = 1;
 FUNC_2(VAR_3->sata0_pclk);
 FUNC_2(VAR_3->sata1_pclk);

 FUNC_6(VAR_4, "SATA ID %08x, PHY ID: %08x\n", VAR_5, VAR_6);

 return 0;
}
