
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct res_opts {int dummy; } ;
struct genl_info {int dummy; } ;
struct drbd_config_context {TYPE_1__* resource; int reply_skb; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_2__ {int adm_mutex; struct res_opts res_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_1 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct res_opts*,struct genl_info*) ;
 int FUNC_7 (struct res_opts*) ;
 int FUNC_8 (TYPE_1__*,struct res_opts*) ;
 scalar_t__ FUNC_9 (struct genl_info*) ;

int FUNC_10(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct drbd_config_context VAR_9;
 enum drbd_ret_code VAR_10;
 struct res_opts VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(&VAR_9, VAR_7, VAR_8, VAR_0);
 if (!VAR_9.reply_skb)
  return VAR_10;
 if (VAR_10 != VAR_6)
  goto fail;

 VAR_11 = VAR_9.resource->res_opts;
 if (FUNC_9(VAR_8))
  FUNC_7(&VAR_11);

 VAR_12 = FUNC_6(&VAR_11, VAR_8);
 if (VAR_12 && VAR_12 != -VAR_2) {
  VAR_10 = VAR_4;
  FUNC_2(VAR_9.reply_skb, FUNC_3(VAR_12));
  goto fail;
 }

 FUNC_4(&VAR_9.resource->adm_mutex);
 VAR_12 = FUNC_8(VAR_9.resource, &VAR_11);
 if (VAR_12) {
  VAR_10 = VAR_3;
  if (VAR_12 == -VAR_1)
   VAR_10 = VAR_5;
 }
 FUNC_5(&VAR_9.resource->adm_mutex);

fail:
 FUNC_0(&VAR_9, VAR_8, VAR_10);
 return 0;
}
