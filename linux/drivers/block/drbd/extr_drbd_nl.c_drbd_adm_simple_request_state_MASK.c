
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union drbd_state {int dummy; } drbd_state ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
struct drbd_config_context {TYPE_1__* resource; int device; int reply_skb; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_2__ {int adm_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (int ,union drbd_state,union drbd_state) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct genl_info *VAR_3,
  union drbd_state VAR_4, union drbd_state VAR_5)
{
 struct drbd_config_context VAR_6;
 enum drbd_ret_code VAR_7;

 VAR_7 = FUNC_1(&VAR_6, VAR_2, VAR_3, VAR_0);
 if (!VAR_6.reply_skb)
  return VAR_7;
 if (VAR_7 != VAR_1)
  goto out;

 FUNC_3(&VAR_6.resource->adm_mutex);
 VAR_7 = FUNC_2(VAR_6.device, VAR_4, VAR_5);
 FUNC_4(&VAR_6.resource->adm_mutex);
out:
 FUNC_0(&VAR_6, VAR_3, VAR_7);
 return 0;
}
