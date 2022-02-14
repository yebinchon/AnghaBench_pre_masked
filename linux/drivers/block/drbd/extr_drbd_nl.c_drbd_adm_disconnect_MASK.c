
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
struct drbd_connection {int dummy; } ;
struct drbd_config_context {TYPE_1__* resource; int reply_skb; struct drbd_connection* connection; } ;
struct disconnect_parms {int force_disconnect; } ;
typedef int parms ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_2__ {int adm_mutex; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drbd_connection*,int ) ;
 int FUNC_1 (struct disconnect_parms*,struct genl_info*) ;
 int FUNC_2 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_3 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct disconnect_parms*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct drbd_config_context VAR_7;
 struct disconnect_parms VAR_8;
 struct drbd_connection *VAR_9;
 enum drbd_state_rv VAR_10;
 enum drbd_ret_code VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(&VAR_7, VAR_5, VAR_6, VAR_0);
 if (!VAR_7.reply_skb)
  return VAR_11;
 if (VAR_11 != VAR_3)
  goto fail;

 VAR_9 = VAR_7.connection;
 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 if (VAR_6->attrs[VAR_1]) {
  VAR_12 = FUNC_1(&VAR_8, VAR_6);
  if (VAR_12) {
   VAR_11 = VAR_2;
   FUNC_4(VAR_7.reply_skb, FUNC_5(VAR_12));
   goto fail;
  }
 }

 FUNC_7(&VAR_7.resource->adm_mutex);
 VAR_10 = FUNC_0(VAR_9, VAR_8.force_disconnect);
 if (VAR_10 < VAR_4)
  VAR_11 = VAR_10;
 else
  VAR_11 = VAR_3;
 FUNC_8(&VAR_7.resource->adm_mutex);
 fail:
 FUNC_2(&VAR_7, VAR_6, VAR_11);
 return 0;
}
