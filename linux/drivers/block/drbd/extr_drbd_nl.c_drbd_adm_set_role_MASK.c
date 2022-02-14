
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct set_role_parms {int assume_uptodate; } ;
struct genl_info {TYPE_1__* genlhdr; scalar_t__* attrs; } ;
struct drbd_config_context {TYPE_2__* resource; int device; int reply_skb; } ;
typedef int parms ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_4__ {int adm_mutex; } ;
struct TYPE_3__ {scalar_t__ cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct set_role_parms*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct set_role_parms*,struct genl_info*) ;

int FUNC_11(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct drbd_config_context VAR_9;
 struct set_role_parms VAR_10;
 int VAR_11;
 enum drbd_ret_code VAR_12;

 VAR_12 = FUNC_1(&VAR_9, VAR_7, VAR_8, VAR_0);
 if (!VAR_9.reply_skb)
  return VAR_12;
 if (VAR_12 != VAR_4)
  goto out;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 if (VAR_8->attrs[VAR_2]) {
  VAR_11 = FUNC_10(&VAR_10, VAR_8);
  if (VAR_11) {
   VAR_12 = VAR_3;
   FUNC_2(VAR_9.reply_skb, FUNC_4(VAR_11));
   goto out;
  }
 }
 FUNC_6();
 FUNC_8(&VAR_9.resource->adm_mutex);

 if (VAR_8->genlhdr->cmd == VAR_1)
  VAR_12 = FUNC_3(VAR_9.device, VAR_5, VAR_10.assume_uptodate);
 else
  VAR_12 = FUNC_3(VAR_9.device, VAR_6, 0);

 FUNC_9(&VAR_9.resource->adm_mutex);
 FUNC_5();
out:
 FUNC_0(&VAR_9, VAR_8, VAR_12);
 return 0;
}
