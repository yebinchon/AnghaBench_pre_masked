
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct new_c_uuid_parms {scalar_t__ clear_bm; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_12__ {scalar_t__ conn; } ;
struct drbd_device {int * state_mutex; TYPE_5__* resource; TYPE_4__ state; TYPE_3__* ldev; } ;
struct drbd_config_context {TYPE_6__* resource; int reply_skb; struct drbd_device* device; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
typedef int args ;
struct TYPE_15__ {TYPE_1__* connection; } ;
struct TYPE_14__ {int adm_mutex; } ;
struct TYPE_13__ {int req_lock; } ;
struct TYPE_10__ {scalar_t__* uuid; } ;
struct TYPE_11__ {TYPE_2__ md; } ;
struct TYPE_9__ {int agreed_pro_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct drbd_device*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct drbd_device*,int ,int ) ;
 int VAR_15 ;
 int FUNC_3 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_4 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_5 (struct drbd_device*,int *,char*,int ) ;
 int VAR_16 ;
 int FUNC_6 (struct drbd_device*,char*,int) ;
 int FUNC_7 (struct drbd_device*,char*) ;
 int FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct drbd_device*,char*) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (struct drbd_device*) ;
 int FUNC_13 (struct drbd_device*,int ,int ) ;
 TYPE_7__* FUNC_14 (struct drbd_device*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct drbd_device*) ;
 int FUNC_17 (struct new_c_uuid_parms*,int ,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct new_c_uuid_parms*,struct genl_info*) ;
 int VAR_17 ;
 int FUNC_21 (struct drbd_device*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;

int FUNC_24(struct sk_buff *VAR_18, struct genl_info *VAR_19)
{
 struct drbd_config_context VAR_20;
 struct drbd_device *VAR_21;
 enum drbd_ret_code VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 struct new_c_uuid_parms VAR_25;

 VAR_22 = FUNC_4(&VAR_20, VAR_18, VAR_19, VAR_4);
 if (!VAR_20.reply_skb)
  return VAR_22;
 if (VAR_22 != VAR_11)
  goto out_nolock;

 VAR_21 = VAR_20.device;
 FUNC_17(&VAR_25, 0, sizeof(VAR_25));
 if (VAR_19->attrs[VAR_5]) {
  VAR_24 = FUNC_20(&VAR_25, VAR_19);
  if (VAR_24) {
   VAR_22 = VAR_9;
   FUNC_9(VAR_20.reply_skb, FUNC_15(VAR_24));
   goto out_nolock;
  }
 }

 FUNC_18(&VAR_20.resource->adm_mutex);
 FUNC_18(VAR_21->state_mutex);

 if (!FUNC_16(VAR_21)) {
  VAR_22 = VAR_10;
  goto out;
 }


 if (VAR_21->state.conn == VAR_2 &&
     FUNC_14(VAR_21)->connection->agreed_pro_version >= 90 &&
     VAR_21->ldev->md.uuid[VAR_13] == VAR_14 && VAR_25.clear_bm) {
  FUNC_7(VAR_21, "Preparing to skip initial sync\n");
  VAR_23 = 1;
 } else if (VAR_21->state.conn != VAR_3) {
  VAR_22 = VAR_7;
  goto out_dec;
 }

 FUNC_13(VAR_21, VAR_12, 0);
 FUNC_12(VAR_21);

 if (VAR_25.clear_bm) {
  VAR_24 = FUNC_5(VAR_21, &VAR_16,
   "clear_n_write from new_c_uuid", VAR_0);
  if (VAR_24) {
   FUNC_6(VAR_21, "Writing bitmap failed with %d\n", VAR_24);
   VAR_22 = VAR_8;
  }
  if (VAR_23) {
   FUNC_11(FUNC_14(VAR_21));
   FUNC_2(VAR_21, VAR_12, 0);
   FUNC_10(VAR_21, "cleared bitmap UUID");
   FUNC_22(&VAR_21->resource->req_lock);
   FUNC_1(FUNC_0(VAR_21, VAR_15, VAR_6, VAR_17, VAR_6),
     VAR_1, ((void*)0));
   FUNC_23(&VAR_21->resource->req_lock);
  }
 }

 FUNC_8(VAR_21);
out_dec:
 FUNC_21(VAR_21);
out:
 FUNC_19(VAR_21->state_mutex);
 FUNC_19(&VAR_20.resource->adm_mutex);
out_nolock:
 FUNC_3(&VAR_20, VAR_19, VAR_22);
 return 0;
}
