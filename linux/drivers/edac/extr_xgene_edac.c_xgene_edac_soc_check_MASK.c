
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_dev_ctx {int version; int edac; } ;
struct edac_device_ctl_info {int ctl_name; int dev; struct xgene_edac_dev_ctx* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_3 (struct edac_device_ctl_info*,int ,int ,int ) ;
 char** VAR_8 ;
 int FUNC_4 (struct edac_device_ctl_info*) ;
 int FUNC_5 (struct edac_device_ctl_info*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (struct edac_device_ctl_info*) ;

__attribute__((used)) static void FUNC_8(struct edac_device_ctl_info *VAR_9)
{
 struct xgene_edac_dev_ctx *VAR_10 = VAR_9->pvt_info;
 const char * const *VAR_11 = ((void*)0);
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 int VAR_15;

 FUNC_6(VAR_10->edac, VAR_6, &VAR_12);
 FUNC_6(VAR_10->edac, VAR_7, &VAR_13);
 FUNC_6(VAR_10->edac, VAR_5, &VAR_14);
 if (!((VAR_12 & (VAR_2 | VAR_1 |
         VAR_4 | VAR_3)) ||
       (VAR_13 & VAR_0) || VAR_14))
  return;

 if (VAR_12 & VAR_4)
  FUNC_4(VAR_9);

 if (VAR_12 & (VAR_3 | VAR_1))
  FUNC_7(VAR_9);

 if (VAR_12 & VAR_2)
  FUNC_5(VAR_9);

 if (VAR_13 & VAR_0) {
  FUNC_1(VAR_9->dev,
    "CSW switch trace correctable memory parity error\n");
  FUNC_2(VAR_9, 0, 0, VAR_9->ctl_name);
 }

 if (!VAR_14)
  return;
 if (VAR_10->version == 1)
  VAR_11 = VAR_8;
 if (!VAR_11) {
  FUNC_0(VAR_9->dev, "SoC memory parity error 0x%08X\n",
   VAR_14);
  FUNC_3(VAR_9, 0, 0, VAR_9->ctl_name);
  return;
 }
 for (VAR_15 = 0; VAR_15 < 31; VAR_15++) {
  if (VAR_14 & (1 << VAR_15)) {
   FUNC_0(VAR_9->dev, "%s memory parity error\n",
    VAR_11[VAR_15]);
   FUNC_3(VAR_9, 0, 0,
           VAR_9->ctl_name);
  }
 }
}
