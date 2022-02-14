
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {int id; TYPE_2__ nic_info; } ;
struct ocrdma_dcbx_cfg {int tcv_aev_opv_st; int pfc_state; scalar_t__ pfc_prio; struct ocrdma_app_parameter* app_param; } ;
struct ocrdma_app_parameter {int valid_proto_app; scalar_t__ app_prio; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ,...) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_13, int VAR_14,
        struct ocrdma_dcbx_cfg *VAR_15,
        u8 *VAR_16)
{
 int VAR_17 = -VAR_0, VAR_18, VAR_19;
 int VAR_20;
 struct ocrdma_app_parameter *VAR_21;
 u8 VAR_22, VAR_23;
 u8 VAR_24, VAR_25;
 u16 VAR_26;

 if (!(VAR_15->tcv_aev_opv_st & VAR_8)) {
  FUNC_4("%s ocrdma%d DCBX is disabled\n",
   FUNC_0(&VAR_13->nic_info.pdev->dev), VAR_13->id);
  goto out;
 }

 if (!FUNC_3(VAR_15->pfc_state)) {
  FUNC_4("%s ocrdma%d priority flow control(%s) is %s%s\n",
   FUNC_0(&VAR_13->nic_info.pdev->dev), VAR_13->id,
   (VAR_14 > 0 ? "operational" : "admin"),
   (VAR_15->pfc_state & VAR_11) ?
   "enabled" : "disabled",
   (VAR_15->pfc_state & VAR_12) ?
   "" : ", not sync'ed");
  goto out;
 } else {
  FUNC_4("%s ocrdma%d priority flow control is enabled and sync'ed\n",
   FUNC_0(&VAR_13->nic_info.pdev->dev), VAR_13->id);
 }

 VAR_20 = (VAR_15->tcv_aev_opv_st >>
    VAR_7)
    & VAR_8;

 for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
  VAR_21 = &VAR_15->app_param[VAR_18];
  VAR_22 = (VAR_21->valid_proto_app >>
    VAR_6)
    & VAR_5;
  VAR_23 = (VAR_21->valid_proto_app
    >> VAR_4)
    & VAR_3;
  VAR_26 = VAR_21->valid_proto_app &
    VAR_2;

  if (
   VAR_22 && VAR_26 == VAR_1 &&
   VAR_23 == VAR_10) {
   for (VAR_19 = 0; VAR_19 <
    VAR_9; VAR_19++) {
    VAR_24 = FUNC_1(
      (u8 *)VAR_21->app_prio,
      VAR_19);
    VAR_25 = FUNC_2(
      (u8 *)VAR_15->pfc_prio,
      VAR_19);

    if (VAR_24 && VAR_25) {
     *VAR_16 = VAR_19;
     VAR_17 = 0;
     goto out;
    }
   }
   if (VAR_19 == VAR_9) {
    FUNC_4("%s ocrdma%d application priority not set for 0x%x protocol\n",
     FUNC_0(&VAR_13->nic_info.pdev->dev),
     VAR_13->id, VAR_26);
   }
  }
 }

out:
 return VAR_17;
}
