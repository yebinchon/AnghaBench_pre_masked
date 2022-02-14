
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i40iw_sc_dev {int hmc_info; } ;
struct TYPE_3__ {int pestat; } ;
struct i40iw_device {int init_state; int hdl; TYPE_1__ vsi; int cm_core; int reset; int pble_rsrc; int mac_ip_table_idx; int iwibdev; int iw_status; scalar_t__ param_wq; struct i40iw_sc_dev sc_dev; struct i40e_info* ldev; } ;
struct i40e_info {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i40iw_sc_dev*,int ,int,int ) ;
 int FUNC_4 (struct i40iw_device*) ;
 int FUNC_5 (struct i40iw_device*,int ) ;
 int FUNC_6 (struct i40iw_device*) ;
 int FUNC_7 (struct i40iw_device*) ;
 int FUNC_8 (struct i40iw_device*) ;
 int FUNC_9 (struct i40iw_device*,int) ;
 int FUNC_10 (struct i40iw_sc_dev*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct i40e_info*) ;
 int FUNC_13 (struct i40iw_device*) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (TYPE_1__*,int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(struct i40iw_device *VAR_2)
{
 struct i40e_info *VAR_3 = VAR_2->ldev;

 struct i40iw_sc_dev *VAR_4 = &VAR_2->sc_dev;

 FUNC_15("state = %d\n", VAR_2->init_state);
 if (VAR_2->param_wq)
  FUNC_0(VAR_2->param_wq);

 switch (VAR_2->init_state) {
 case 128:
  VAR_2->iw_status = 0;
  FUNC_13(VAR_2);
  FUNC_11(VAR_2->iwibdev);

 case 130:
  if (!VAR_2->reset)
   FUNC_5(VAR_2, (u8)VAR_2->mac_ip_table_idx);


 case 129:
  FUNC_10(VAR_4, VAR_2->pble_rsrc);

 case 137:
  FUNC_6(VAR_2);

 case 139:
  FUNC_7(VAR_2);

 case 134:
  FUNC_16(&VAR_2->vsi, VAR_0, VAR_2->reset);

 case 133:
  FUNC_16(&VAR_2->vsi, VAR_1, VAR_2->reset);

 case 138:
  FUNC_8(VAR_2);

 case 135:
  FUNC_3(VAR_4, VAR_4->hmc_info, 1, VAR_2->reset);

 case 136:
  FUNC_9(VAR_2, 1);

 case 132:
  FUNC_1(&VAR_2->cm_core);
  if (VAR_2->vsi.pestat) {
   FUNC_17(&VAR_2->vsi);
   FUNC_18(VAR_2->vsi.pestat);
  }
  FUNC_4(VAR_2);
  break;
 case 131:

 default:
  FUNC_14("bad init_state = %d\n", VAR_2->init_state);
  break;
 }

 FUNC_2(FUNC_12(VAR_3));
 FUNC_18(VAR_2->hdl);
}
