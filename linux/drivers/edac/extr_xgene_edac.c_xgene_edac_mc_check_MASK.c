
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_mc_ctx {scalar_t__ mcu_csr; int edac; } ;
struct mem_ctl_info {int ctl_name; struct xgene_edac_mc_ctx* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int) ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct mem_ctl_info*,int ,char*,char*,...) ;
 int FUNC_5 (int ,struct mem_ctl_info*,int,int ,int ,int ,int ,int ,int,int ,char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_9(struct mem_ctl_info *VAR_21)
{
 struct xgene_edac_mc_ctx *VAR_22 = VAR_21->pvt_info;
 unsigned int VAR_23;
 unsigned int VAR_24;
 u32 VAR_25;
 u32 VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;

 FUNC_8(VAR_22->edac, VAR_19, &VAR_23);
 FUNC_8(VAR_22->edac, VAR_20, &VAR_24);
 if (!((VAR_18 & VAR_23) ||
       (VAR_10 & VAR_23) ||
       (VAR_9 & VAR_24)))
  return;

 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++) {
  VAR_25 = FUNC_6(VAR_22->mcu_csr + VAR_6 + VAR_26 * VAR_17);


  if (VAR_25 & (VAR_13 |
      VAR_11)) {

   FUNC_4(VAR_21, VAR_2, "X-Gene",
    "MCU uncorrectable error at rank %d\n", VAR_26);

   FUNC_5(VAR_1, VAR_21,
    1, 0, 0, 0, 0, 0, -1, VAR_21->ctl_name, "");
  }


  if (VAR_25 & VAR_12) {
   VAR_27 = FUNC_6(VAR_22->mcu_csr + VAR_4 +
         VAR_26 * VAR_17);
   VAR_29 = FUNC_6(VAR_22->mcu_csr + VAR_5 +
     VAR_26 * VAR_17);
   VAR_28 = FUNC_6(VAR_22->mcu_csr + VAR_8 +
          VAR_26 * VAR_17);
   FUNC_4(VAR_21, VAR_3, "X-Gene",
    "MCU correctable error at rank %d bank %d column %d row %d count %d\n",
    VAR_26, FUNC_0(VAR_27),
    FUNC_1(VAR_29),
    FUNC_2(VAR_29),
    FUNC_3(VAR_28));

   FUNC_5(VAR_0, VAR_21,
    1, 0, 0, 0, 0, 0, -1, VAR_21->ctl_name, "");
  }


  FUNC_7(0x0, VAR_22->mcu_csr + VAR_4 + VAR_26 * VAR_17);
  FUNC_7(0x0, VAR_22->mcu_csr + VAR_5 + VAR_26 * VAR_17);
  FUNC_7(0x0, VAR_22->mcu_csr + VAR_8 +
         VAR_26 * VAR_17);
  FUNC_7(VAR_25, VAR_22->mcu_csr + VAR_6 + VAR_26 * VAR_17);
 }


 VAR_25 = FUNC_6(VAR_22->mcu_csr + VAR_7);
 if (VAR_25) {
  if (VAR_25 & VAR_15)
   FUNC_4(VAR_21, VAR_3, "X-Gene",
    "MCU address miss-match error\n");
  if (VAR_25 & VAR_14)
   FUNC_4(VAR_21, VAR_3, "X-Gene",
    "MCU address multi-match error\n");

  FUNC_7(VAR_25, VAR_22->mcu_csr + VAR_7);
 }
}
