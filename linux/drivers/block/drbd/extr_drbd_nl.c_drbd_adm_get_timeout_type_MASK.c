
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeout_parms {int timeout_type; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
struct drbd_config_context {int reply_skb; TYPE_2__* device; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_3__ {scalar_t__ pdsk; } ;
struct TYPE_4__ {int flags; TYPE_1__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct timeout_parms*) ;

int FUNC_5(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct drbd_config_context VAR_9;
 enum drbd_ret_code VAR_10;
 struct timeout_parms VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(&VAR_9, VAR_7, VAR_8, VAR_0);
 if (!VAR_9.reply_skb)
  return VAR_10;
 if (VAR_10 != VAR_2)
  goto out;

 VAR_11.timeout_type =
  VAR_9.device->state.pdsk == VAR_1 ? VAR_6 :
  FUNC_3(VAR_3, &VAR_9.device->flags) ? VAR_5 :
  VAR_4;

 VAR_12 = FUNC_4(VAR_9.reply_skb, &VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_9.reply_skb);
  return VAR_12;
 }
out:
 FUNC_0(&VAR_9, VAR_8, VAR_10);
 return 0;
}
