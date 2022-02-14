
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_edac_dev_ctx {int edac; scalar_t__ dev_csr; } ;
struct edac_device_ctl_info {scalar_t__ op_state; struct xgene_edac_dev_ctx* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct edac_device_ctl_info *VAR_10,
      bool VAR_11)
{
 struct xgene_edac_dev_ctx *VAR_12 = VAR_10->pvt_info;
 u32 VAR_13;

 VAR_13 = FUNC_0(VAR_12->dev_csr + VAR_2);
 VAR_13 |= VAR_5 | VAR_0;

 if (VAR_10->op_state == VAR_7) {
  if (VAR_11)
   VAR_13 |= VAR_4 | VAR_3;
  else
   VAR_13 &= ~(VAR_4 | VAR_3);
 }
 FUNC_1(VAR_13, VAR_12->dev_csr + VAR_2);

 if (VAR_10->op_state == VAR_7) {

  if (VAR_11) {
   FUNC_2(VAR_12->edac, VAR_8,
            VAR_6);
   FUNC_2(VAR_12->edac, VAR_9,
            VAR_1);
  } else {
   FUNC_3(VAR_12->edac, VAR_8,
            VAR_6);
   FUNC_3(VAR_12->edac, VAR_9,
            VAR_1);
  }
 }
}
