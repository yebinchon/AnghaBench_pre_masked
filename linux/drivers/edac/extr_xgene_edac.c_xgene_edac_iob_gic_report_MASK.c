
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_dev_ctx {scalar_t__ dev_csr; } ;
struct edac_device_ctl_info {int ctl_name; int dev; struct xgene_edac_dev_ctx* pvt_info; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_3 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct edac_device_ctl_info *VAR_20)
{
 struct xgene_edac_dev_ctx *VAR_21 = VAR_20->pvt_info;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;


 VAR_24 = FUNC_4(VAR_21->dev_csr + VAR_18);
 if (!VAR_24)
  goto chk_iob_err;
 FUNC_1(VAR_20->dev, "XGIC transaction error\n");
 if (VAR_24 & VAR_14)
  FUNC_1(VAR_20->dev, "XGIC read size error\n");
 if (VAR_24 & VAR_12)
  FUNC_1(VAR_20->dev, "Multiple XGIC read size error\n");
 if (VAR_24 & VAR_17)
  FUNC_1(VAR_20->dev, "XGIC write size error\n");
 if (VAR_24 & VAR_13)
  FUNC_1(VAR_20->dev, "Multiple XGIC write size error\n");
 VAR_25 = FUNC_4(VAR_21->dev_csr + VAR_19);
 FUNC_1(VAR_20->dev, "XGIC %s access @ 0x%08X (0x%08X)\n",
  VAR_25 & VAR_15 ? "read" : "write", FUNC_0(VAR_25),
  VAR_25);
 FUNC_5(VAR_24, VAR_21->dev_csr + VAR_18);

chk_iob_err:

 VAR_24 = FUNC_4(VAR_21->dev_csr + VAR_3);
 if (!VAR_24)
  return;
 if (VAR_24 & VAR_16) {
  VAR_22 = FUNC_4(VAR_21->dev_csr + VAR_9);
  VAR_23 = FUNC_4(VAR_21->dev_csr + VAR_8);
  FUNC_1(VAR_20->dev,
   "IOB single-bit correctable memory at 0x%08X.%08X error\n",
   VAR_22, VAR_23);
  FUNC_5(VAR_22, VAR_21->dev_csr + VAR_9);
  FUNC_5(VAR_23, VAR_21->dev_csr + VAR_8);
 }
 if (VAR_24 & VAR_11) {
  VAR_22 = FUNC_4(VAR_21->dev_csr + VAR_7);
  VAR_23 = FUNC_4(VAR_21->dev_csr + VAR_6);
  FUNC_1(VAR_20->dev,
   "IOB multiple single-bit correctable memory at 0x%08X.%08X error\n",
   VAR_22, VAR_23);
  FUNC_5(VAR_22, VAR_21->dev_csr + VAR_7);
  FUNC_5(VAR_23, VAR_21->dev_csr + VAR_6);
 }
 if (VAR_24 & (VAR_16 | VAR_11))
  FUNC_2(VAR_20, 0, 0, VAR_20->ctl_name);

 if (VAR_24 & VAR_0) {
  VAR_22 = FUNC_4(VAR_21->dev_csr + VAR_2);
  VAR_23 = FUNC_4(VAR_21->dev_csr + VAR_1);
  FUNC_1(VAR_20->dev,
   "IOB double-bit uncorrectable memory at 0x%08X.%08X error\n",
   VAR_22, VAR_23);
  FUNC_5(VAR_22, VAR_21->dev_csr + VAR_2);
  FUNC_5(VAR_23, VAR_21->dev_csr + VAR_1);
 }
 if (VAR_24 & VAR_10) {
  VAR_22 = FUNC_4(VAR_21->dev_csr + VAR_5);
  VAR_23 = FUNC_4(VAR_21->dev_csr + VAR_4);
  FUNC_1(VAR_20->dev,
   "Multiple IOB double-bit uncorrectable memory at 0x%08X.%08X error\n",
   VAR_22, VAR_23);
  FUNC_5(VAR_22, VAR_21->dev_csr + VAR_5);
  FUNC_5(VAR_23, VAR_21->dev_csr + VAR_4);
 }
 if (VAR_24 & (VAR_0 | VAR_10))
  FUNC_3(VAR_20, 0, 0, VAR_20->ctl_name);
}
