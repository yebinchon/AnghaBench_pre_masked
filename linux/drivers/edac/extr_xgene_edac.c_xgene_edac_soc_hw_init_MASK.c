
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_edac_dev_ctx {int edac; scalar_t__ dev_csr; } ;
struct edac_device_ctl_info {scalar_t__ op_state; struct xgene_edac_dev_ctx* pvt_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct edac_device_ctl_info *VAR_12,
       bool VAR_13)
{
 struct xgene_edac_dev_ctx *VAR_14 = VAR_12->pvt_info;


 if (VAR_12->op_state == VAR_8) {
  if (VAR_13) {
   FUNC_1(VAR_14->edac, VAR_9,
            VAR_4 |
            VAR_3 |
            VAR_6 |
            VAR_5);
   FUNC_1(VAR_14->edac, VAR_10,
            VAR_0);
  } else {
   FUNC_2(VAR_14->edac, VAR_9,
            VAR_4 |
            VAR_3 |
            VAR_6 |
            VAR_5);
   FUNC_2(VAR_14->edac, VAR_10,
            VAR_0);
  }

  FUNC_0(VAR_13 ? 0x0 : 0xFFFFFFFF,
         VAR_14->dev_csr + VAR_1);
  FUNC_0(VAR_13 ? 0x0 : 0xFFFFFFFF,
         VAR_14->dev_csr + VAR_2);
  FUNC_0(VAR_13 ? 0x0 : 0xFFFFFFFF,
         VAR_14->dev_csr + VAR_11);

  FUNC_2(VAR_14->edac, VAR_7,
           VAR_13 ? 0x0 : 0xFFFFFFFF);
 }
}
