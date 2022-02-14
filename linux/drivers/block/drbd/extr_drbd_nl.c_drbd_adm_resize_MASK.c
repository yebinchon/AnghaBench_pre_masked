
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct resize_parms {int al_stripes; int al_stripe_size; scalar_t__ no_resync; scalar_t__ resize_force; scalar_t__ resize_size; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_15__ {scalar_t__ conn; scalar_t__ role; scalar_t__ peer; } ;
struct drbd_device {int flags; TYPE_5__ state; TYPE_4__* resource; TYPE_3__* ldev; } ;
struct drbd_config_context {TYPE_6__* resource; int reply_skb; struct drbd_device* device; } ;
struct disk_conf {scalar_t__ disk_size; } ;
typedef scalar_t__ sector_t ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
typedef enum determine_dev_size { ____Placeholder_determine_dev_size } determine_dev_size ;
typedef enum dds_flags { ____Placeholder_dds_flags } dds_flags ;
struct TYPE_18__ {TYPE_1__* connection; } ;
struct TYPE_17__ {scalar_t__ disk_size; } ;
struct TYPE_16__ {int adm_mutex; } ;
struct TYPE_14__ {int conf_update; } ;
struct TYPE_12__ {int al_stripes; int al_stripe_size_4k; } ;
struct TYPE_13__ {scalar_t__ known_size; struct disk_conf* disk_conf; int backing_bdev; TYPE_2__ md; } ;
struct TYPE_11__ {int agreed_pro_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (struct drbd_device*,int,struct resize_parms*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_8__*,int,int) ;
 int FUNC_7 (TYPE_8__*) ;
 TYPE_8__* FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct drbd_device*) ;
 int FUNC_11 (struct disk_conf*) ;
 struct disk_conf* FUNC_12 (int,int ) ;
 int FUNC_13 (struct resize_parms*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct drbd_device*) ;
 int FUNC_17 (struct disk_conf*,struct disk_conf*) ;
 TYPE_7__* FUNC_18 (struct disk_conf*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (struct resize_parms*,struct genl_info*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 () ;

int FUNC_24(struct sk_buff *VAR_26, struct genl_info *VAR_27)
{
 struct drbd_config_context VAR_28;
 struct disk_conf *VAR_29, *VAR_30 = ((void*)0);
 struct resize_parms VAR_31;
 struct drbd_device *VAR_32;
 enum drbd_ret_code VAR_33;
 enum determine_dev_size VAR_34;
 bool VAR_35 = 0;
 enum dds_flags VAR_36;
 sector_t VAR_37;
 int VAR_38;

 VAR_33 = FUNC_1(&VAR_28, VAR_26, VAR_27, VAR_3);
 if (!VAR_28.reply_skb)
  return VAR_33;
 if (VAR_33 != VAR_23)
  goto finish;

 FUNC_14(&VAR_28.resource->adm_mutex);
 VAR_32 = VAR_28.device;
 if (!FUNC_10(VAR_32)) {
  VAR_33 = VAR_18;
  goto fail;
 }

 FUNC_13(&VAR_31, 0, sizeof(struct resize_parms));
 VAR_31.al_stripes = VAR_32->ldev->md.al_stripes;
 VAR_31.al_stripe_size = VAR_32->ldev->md.al_stripe_size_4k * 4;
 if (VAR_27->attrs[VAR_4]) {
  VAR_38 = FUNC_21(&VAR_31, VAR_27);
  if (VAR_38) {
   VAR_33 = VAR_10;
   FUNC_5(VAR_28.reply_skb, FUNC_9(VAR_38));
   goto fail_ldev;
  }
 }

 if (VAR_32->state.conn > VAR_0) {
  VAR_33 = VAR_20;
  goto fail_ldev;
 }

 if (VAR_32->state.role == VAR_25 &&
     VAR_32->state.peer == VAR_25) {
  VAR_33 = VAR_19;
  goto fail_ldev;
 }

 if (VAR_31.no_resync && FUNC_8(VAR_32)->connection->agreed_pro_version < 93) {
  VAR_33 = VAR_15;
  goto fail_ldev;
 }

 FUNC_19();
 VAR_37 = FUNC_18(VAR_32->ldev->disk_conf)->disk_size;
 FUNC_20();
 if (VAR_37 != (sector_t)VAR_31.resize_size) {
  VAR_30 = FUNC_12(sizeof(struct disk_conf), VAR_21);
  if (!VAR_30) {
   VAR_33 = VAR_16;
   goto fail_ldev;
  }
 }

 if (VAR_32->ldev->md.al_stripes != VAR_31.al_stripes ||
     VAR_32->ldev->md.al_stripe_size_4k != VAR_31.al_stripe_size / 4) {
  u32 VAR_39 = VAR_31.al_stripes * VAR_31.al_stripe_size;

  if (VAR_39 > (16 * 1024 * 1024)) {
   VAR_33 = VAR_13;
   goto fail_ldev;
  }

  if (VAR_39 < VAR_22/2) {
   VAR_33 = VAR_14;
   goto fail_ldev;
  }

  if (VAR_32->state.conn != VAR_0 && !VAR_31.resize_force) {
   VAR_33 = VAR_11;
   goto fail_ldev;
  }

  VAR_35 = 1;
 }

 if (VAR_32->ldev->known_size != FUNC_3(VAR_32->ldev->backing_bdev))
  VAR_32->ldev->known_size = FUNC_3(VAR_32->ldev->backing_bdev);

 if (VAR_30) {
  FUNC_14(&VAR_32->resource->conf_update);
  VAR_29 = VAR_32->ldev->disk_conf;
  *VAR_30 = *VAR_29;
  VAR_30->disk_size = (sector_t)VAR_31.resize_size;
  FUNC_17(VAR_32->ldev->disk_conf, VAR_30);
  FUNC_15(&VAR_32->resource->conf_update);
  FUNC_23();
  FUNC_11(VAR_29);
  VAR_30 = ((void*)0);
 }

 VAR_36 = (VAR_31.resize_force ? VAR_1 : 0) | (VAR_31.no_resync ? VAR_2 : 0);
 VAR_34 = FUNC_2(VAR_32, VAR_36, VAR_35 ? &VAR_31 : ((void*)0));
 FUNC_4(VAR_32);
 FUNC_16(VAR_32);
 if (VAR_34 == VAR_5) {
  VAR_33 = VAR_17;
  goto fail;
 } else if (VAR_34 == VAR_7) {
  VAR_33 = VAR_12;
  goto fail;
 } else if (VAR_34 == VAR_6) {
  VAR_33 = VAR_9;
  goto fail;
 }

 if (VAR_32->state.conn == VAR_0) {
  if (VAR_34 == VAR_8)
   FUNC_22(VAR_24, &VAR_32->flags);

  FUNC_7(FUNC_8(VAR_32));
  FUNC_6(FUNC_8(VAR_32), 1, VAR_36);
 }

 fail:
 FUNC_15(&VAR_28.resource->adm_mutex);
 finish:
 FUNC_0(&VAR_28, VAR_27, VAR_33);
 return 0;

 fail_ldev:
 FUNC_16(VAR_32);
 FUNC_11(VAR_30);
 goto fail;
}
