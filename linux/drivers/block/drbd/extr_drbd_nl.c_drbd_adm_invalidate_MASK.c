
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ conn; scalar_t__ role; } ;
struct drbd_device {TYPE_2__ state; int flags; int misc_wait; } ;
struct drbd_config_context {TYPE_3__* resource; struct drbd_device* device; int reply_skb; } ;
struct TYPE_8__ {TYPE_1__* connection; } ;
struct TYPE_7__ {int adm_mutex; } ;
struct TYPE_5__ {int sender_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_2 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 scalar_t__ FUNC_3 (struct drbd_device*,int *,char*,int ) ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drbd_device*,int ) ;
 int FUNC_6 (struct drbd_device*) ;
 int FUNC_7 (struct drbd_device*) ;
 TYPE_4__* FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (struct drbd_device*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct drbd_device*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(struct sk_buff *VAR_14, struct genl_info *VAR_15)
{
 struct drbd_config_context VAR_16;
 struct drbd_device *VAR_17;
 int VAR_18;

 VAR_18 = FUNC_2(&VAR_16, VAR_14, VAR_15, VAR_4);
 if (!VAR_16.reply_skb)
  return VAR_18;
 if (VAR_18 != VAR_8)
  goto out;

 VAR_17 = VAR_16.device;
 if (!FUNC_9(VAR_17)) {
  VAR_18 = VAR_7;
  goto out;
 }

 FUNC_10(&VAR_16.resource->adm_mutex);




 FUNC_7(VAR_17);
 FUNC_14(VAR_17->misc_wait, !FUNC_13(VAR_0, &VAR_17->flags));
 FUNC_4(&FUNC_8(VAR_17)->connection->sender_work);





 if (VAR_17->state.conn == VAR_2 && VAR_17->state.role == VAR_9) {
  VAR_18 = FUNC_5(VAR_17, FUNC_0(VAR_12, VAR_5));
  if (VAR_18 >= VAR_10) {
   if (FUNC_3(VAR_17, &VAR_13,
    "set_n_write from invalidate", VAR_1))
    VAR_18 = VAR_6;
  }
 } else
  VAR_18 = FUNC_5(VAR_17, FUNC_0(VAR_11, VAR_3));
 FUNC_6(VAR_17);
 FUNC_11(&VAR_16.resource->adm_mutex);
 FUNC_12(VAR_17);
out:
 FUNC_1(&VAR_16, VAR_15, VAR_18);
 return 0;
}
