
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_dev_ctx {int version; scalar_t__ dev_csr; } ;
struct edac_device_ctl_info {int ctl_name; int dev; struct xgene_edac_dev_ctx* pvt_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_10 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int,int) ;

__attribute__((used)) static void FUNC_14(struct edac_device_ctl_info *VAR_10)
{
 struct xgene_edac_dev_ctx *VAR_11 = VAR_10->pvt_info;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_12 = FUNC_11(VAR_11->dev_csr + VAR_3);
 if (!(VAR_12 & (VAR_8 | VAR_4)))
  return;

 if (VAR_12 & VAR_8)
  FUNC_7(VAR_10->dev, "L3C uncorrectable error\n");
 if (VAR_12 & VAR_4)
  FUNC_8(VAR_10->dev, "L3C correctable error\n");

 VAR_13 = FUNC_11(VAR_11->dev_csr + VAR_2);
 VAR_14 = FUNC_11(VAR_11->dev_csr + VAR_0);
 VAR_15 = FUNC_11(VAR_11->dev_csr + VAR_1);
 if (VAR_12 & VAR_6)
  FUNC_7(VAR_10->dev, "L3C multiple hit error\n");
 if (VAR_12 & VAR_9)
  FUNC_7(VAR_10->dev,
   "L3C dropped eviction of line with error\n");
 if (VAR_12 & VAR_7)
  FUNC_7(VAR_10->dev, "L3C multiple uncorrectable error\n");
 if (VAR_12 & VAR_5)
  FUNC_7(VAR_10->dev,
   "L3C data error syndrome 0x%X group 0x%X\n",
   FUNC_3(VAR_13), FUNC_2(VAR_13));
 else
  FUNC_7(VAR_10->dev,
   "L3C tag error syndrome 0x%X Way of Tag 0x%X Agent ID 0x%X Operation type 0x%X\n",
   FUNC_3(VAR_13), FUNC_4(VAR_13),
   FUNC_1(VAR_13), FUNC_5(VAR_13));




 FUNC_7(VAR_10->dev, "L3C error address 0x%08X.%08X bank %d\n",
  FUNC_6(VAR_13) << 6 | (VAR_14 >> 26),
  (VAR_14 & 0x3FFFFFFF) << 6, FUNC_0(VAR_15));
 FUNC_7(VAR_10->dev,
  "L3C error status register value 0x%X\n", VAR_12);


 FUNC_12(0, VAR_11->dev_csr + VAR_3);

 if (VAR_11->version <= 1 &&
     FUNC_13(VAR_12, VAR_13)) {
  FUNC_10(VAR_10, 0, 0, VAR_10->ctl_name);
  return;
 }
 if (VAR_12 & VAR_4)
  FUNC_9(VAR_10, 0, 0, VAR_10->ctl_name);
 if (VAR_12 & VAR_8)
  FUNC_10(VAR_10, 0, 0, VAR_10->ctl_name);
}
