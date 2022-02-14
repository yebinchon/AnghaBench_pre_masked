
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct start_ov_parms {int ov_start_sector; int ov_stop_sector; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
struct drbd_device {int ov_start_sector; int flags; int misc_wait; int ov_stop_sector; } ;
struct drbd_config_context {TYPE_1__* resource; int reply_skb; struct drbd_device* device; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_2__ {int adm_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_2 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drbd_device*,int ) ;
 int FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (struct drbd_device*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct start_ov_parms*,struct genl_info*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int) ;

int FUNC_13(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct drbd_config_context VAR_11;
 struct drbd_device *VAR_12;
 enum drbd_ret_code VAR_13;
 struct start_ov_parms VAR_14;

 VAR_13 = FUNC_2(&VAR_11, VAR_9, VAR_10, VAR_3);
 if (!VAR_11.reply_skb)
  return VAR_13;
 if (VAR_13 != VAR_6)
  goto out;

 VAR_12 = VAR_11.device;


 VAR_14.ov_start_sector = VAR_12->ov_start_sector;
 VAR_14.ov_stop_sector = VAR_7;
 if (VAR_10->attrs[VAR_4]) {
  int VAR_15 = FUNC_10(&VAR_14, VAR_10);
  if (VAR_15) {
   VAR_13 = VAR_5;
   FUNC_3(VAR_11.reply_skb, FUNC_7(VAR_15));
   goto out;
  }
 }
 FUNC_8(&VAR_11.resource->adm_mutex);


 VAR_12->ov_start_sector = VAR_14.ov_start_sector & ~(VAR_1-1);
 VAR_12->ov_stop_sector = VAR_14.ov_stop_sector;



 FUNC_6(VAR_12);
 FUNC_12(VAR_12->misc_wait, !FUNC_11(VAR_0, &VAR_12->flags));
 VAR_13 = FUNC_4(VAR_12, FUNC_0(VAR_8, VAR_2));
 FUNC_5(VAR_12);

 FUNC_9(&VAR_11.resource->adm_mutex);
out:
 FUNC_1(&VAR_11, VAR_10, VAR_13);
 return 0;
}
