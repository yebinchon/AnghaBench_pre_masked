
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;
struct drbd_resource {int adm_mutex; } ;
struct drbd_config_context {struct drbd_resource* resource; int reply_skb; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drbd_resource*) ;
 int FUNC_1 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_2 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct drbd_config_context VAR_4;
 struct drbd_resource *VAR_5;
 enum drbd_ret_code VAR_6;

 VAR_6 = FUNC_2(&VAR_4, VAR_2, VAR_3, VAR_0);
 if (!VAR_4.reply_skb)
  return VAR_6;
 if (VAR_6 != VAR_1)
  goto finish;
 VAR_5 = VAR_4.resource;

 FUNC_3(&VAR_5->adm_mutex);
 VAR_6 = FUNC_0(VAR_5);
 FUNC_4(&VAR_5->adm_mutex);
finish:
 FUNC_1(&VAR_4, VAR_3, VAR_6);
 return 0;
}
