
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_dev_ctx {scalar_t__ dev_csr; } ;
struct edac_device_ctl_info {int dev; struct xgene_edac_dev_ctx* pvt_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct edac_device_ctl_info *VAR_16)
{
 struct xgene_edac_dev_ctx *VAR_17 = VAR_16->pvt_info;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;


 VAR_20 = FUNC_3(VAR_17->dev_csr + VAR_7);
 if (!VAR_20)
  goto chk_iob_axi0;
 FUNC_2(VAR_16->dev, "IOB processing agent (PA) transaction error\n");
 if (VAR_20 & VAR_12)
  FUNC_2(VAR_16->dev, "IOB PA read data RAM error\n");
 if (VAR_20 & VAR_8)
  FUNC_2(VAR_16->dev,
   "Multiple IOB PA read data RAM error\n");
 if (VAR_20 & VAR_15)
  FUNC_2(VAR_16->dev, "IOB PA write data RAM error\n");
 if (VAR_20 & VAR_11)
  FUNC_2(VAR_16->dev,
   "Multiple IOB PA write data RAM error\n");
 if (VAR_20 & VAR_14)
  FUNC_2(VAR_16->dev, "IOB PA transaction error\n");
 if (VAR_20 & VAR_10)
  FUNC_2(VAR_16->dev, "Multiple IOB PA transaction error\n");
 if (VAR_20 & VAR_13)
  FUNC_2(VAR_16->dev, "IOB PA transaction ID RAM error\n");
 if (VAR_20 & VAR_9)
  FUNC_2(VAR_16->dev,
   "Multiple IOB PA transaction ID RAM error\n");
 FUNC_4(VAR_20, VAR_17->dev_csr + VAR_7);

chk_iob_axi0:

 VAR_20 = FUNC_3(VAR_17->dev_csr + VAR_0);
 if (!VAR_20)
  goto chk_iob_axi1;
 VAR_18 = FUNC_3(VAR_17->dev_csr + VAR_2);
 VAR_19 = FUNC_3(VAR_17->dev_csr + VAR_1);
 FUNC_2(VAR_16->dev,
  "%sAXI slave 0 illegal %s access @ 0x%02X.%08X (0x%08X)\n",
  VAR_20 & VAR_3 ? "Multiple " : "",
  FUNC_1(VAR_19) ? "read" : "write",
  FUNC_0(VAR_19), VAR_18, VAR_19);
 FUNC_4(VAR_20, VAR_17->dev_csr + VAR_0);

chk_iob_axi1:

 VAR_20 = FUNC_3(VAR_17->dev_csr + VAR_4);
 if (!VAR_20)
  return;
 VAR_18 = FUNC_3(VAR_17->dev_csr + VAR_6);
 VAR_19 = FUNC_3(VAR_17->dev_csr + VAR_5);
 FUNC_2(VAR_16->dev,
  "%sAXI slave 1 illegal %s access @ 0x%02X.%08X (0x%08X)\n",
  VAR_20 & VAR_3 ? "Multiple " : "",
  FUNC_1(VAR_19) ? "read" : "write",
  FUNC_0(VAR_19), VAR_18, VAR_19);
 FUNC_4(VAR_20, VAR_17->dev_csr + VAR_4);
}
