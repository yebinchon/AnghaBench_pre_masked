
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
struct drbd_config_context {int reply_skb; int device; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct drbd_config_context VAR_4;
 enum drbd_ret_code VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_3, VAR_0);
 if (!VAR_4.reply_skb)
  return VAR_5;
 if (VAR_5 != VAR_1)
  goto out;

 VAR_6 = FUNC_2(VAR_4.reply_skb, VAR_4.device, ((void*)0));
 if (VAR_6) {
  FUNC_3(VAR_4.reply_skb);
  return VAR_6;
 }
out:
 FUNC_0(&VAR_4, VAR_3, VAR_5);
 return 0;
}
