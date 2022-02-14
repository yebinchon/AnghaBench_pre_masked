
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_sc_dev {int ccq; TYPE_1__* ccq_ops; int hw; scalar_t__ is_pf; void* back_dev; } ;
struct i40iw_device {int iw_status; int init_state; int * param_wq; void* virtchnl_wq; int pble_rsrc; struct i40iw_sc_dev sc_dev; int pbl_mutex; struct i40e_client* client; int * ldev; struct i40iw_handler* hdl; } ;
struct i40iw_handler {int ldev; struct i40iw_device device; } ;
struct i40e_info {int netdev; } ;
struct i40e_client {int dummy; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_2__ {int (* ccq_arm ) (int ) ;} ;


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
 int VAR_13 ;
 void* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct i40iw_handler*) ;
 int FUNC_2 (struct i40iw_device*) ;
 int FUNC_3 (struct i40iw_device*) ;
 int FUNC_4 (struct i40iw_device*) ;
 int FUNC_5 (struct i40iw_device*) ;
 struct i40iw_handler* FUNC_6 (int ) ;
 int FUNC_7 (struct i40iw_device*) ;
 int FUNC_8 (struct i40iw_sc_dev*,int ) ;
 int FUNC_9 (struct i40iw_device*) ;
 int FUNC_10 (struct i40iw_device*) ;
 int FUNC_11 (struct i40iw_device*) ;
 int FUNC_12 (struct i40iw_device*) ;
 int FUNC_13 (struct i40iw_device*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (struct i40iw_device*) ;
 int FUNC_17 (struct i40iw_device*) ;
 int FUNC_18 (struct i40iw_device*,struct i40e_info*) ;
 scalar_t__ FUNC_19 (struct i40iw_device*) ;
 int FUNC_20 (struct i40iw_handler*,struct i40e_info*,struct i40e_client*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct i40iw_handler*) ;
 struct i40iw_handler* FUNC_23 (int,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct i40e_info *VAR_14, struct i40e_client *VAR_15)
{
 struct i40iw_device *VAR_16;
 struct i40iw_sc_dev *VAR_17;
 enum i40iw_status_code VAR_18;
 struct i40iw_handler *VAR_19;

 VAR_19 = FUNC_6(VAR_14->netdev);
 if (VAR_19)
  return 0;

 VAR_19 = FUNC_23(sizeof(*VAR_19), VAR_6);
 if (!VAR_19)
  return -VAR_4;
 VAR_16 = &VAR_19->device;
 VAR_16->hdl = VAR_19;
 VAR_17 = &VAR_16->sc_dev;
 if (FUNC_19(VAR_16)) {
  FUNC_22(VAR_16->hdl);
  return -VAR_4;
 }

 VAR_17->back_dev = (void *)VAR_16;
 VAR_16->ldev = &VAR_19->ldev;
 VAR_16->client = VAR_15;
 FUNC_24(&VAR_16->pbl_mutex);
 FUNC_1(VAR_19);

 do {
  VAR_18 = FUNC_20(VAR_19, VAR_14, VAR_15);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_9;
  if (VAR_17->is_pf)
   FUNC_21(VAR_17->hw);
  VAR_18 = FUNC_4(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_3;
  VAR_18 = FUNC_9(VAR_16);
  if (VAR_18)
   break;
  VAR_18 = FUNC_3(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_1;
  VAR_18 = FUNC_12(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_8;
  VAR_18 = FUNC_11(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_7;
  VAR_18 = FUNC_17(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_0;
  VAR_18 = FUNC_18(VAR_16, VAR_14);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_2;
  VAR_18 = FUNC_10(VAR_16);
  if (VAR_18)
   break;
  FUNC_7(VAR_16);
  VAR_17->ccq_ops->ccq_arm(VAR_17->ccq);
  VAR_18 = FUNC_8(&VAR_16->sc_dev, VAR_16->pble_rsrc);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_11;
  VAR_16->virtchnl_wq = FUNC_0("iwvch", VAR_13);
  VAR_18 = FUNC_2(VAR_16);
  if (VAR_18)
   break;
  VAR_16->init_state = VAR_10;
  if (FUNC_16(VAR_16)) {
   FUNC_14("register rdma device fail\n");
   break;
  };

  VAR_16->init_state = VAR_12;
  VAR_16->iw_status = 1;
  FUNC_13(VAR_16);
  VAR_16->param_wq = FUNC_0("l2params", VAR_13);
  if(VAR_16->param_wq == ((void*)0))
   break;
  FUNC_15("i40iw_open completed\n");
  return 0;
 } while (0);

 FUNC_14("status = %d last completion = %d\n", VAR_18, VAR_16->init_state);
 FUNC_5(VAR_16);
 return -VAR_5;
}
