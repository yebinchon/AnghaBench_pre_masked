
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct resource_info {int dummy; } ;
struct res_opts {int dummy; } ;
struct genl_info {TYPE_1__* nlhdr; } ;
struct drbd_connection {int resource; } ;
struct drbd_config_context {int resource_name; int reply_skb; scalar_t__ resource; } ;
typedef enum drbd_ret_code { ____Placeholder_drbd_ret_code } drbd_ret_code ;
struct TYPE_2__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct drbd_connection* FUNC_0 (int ,struct res_opts*) ;
 int FUNC_1 (struct drbd_config_context*,struct genl_info*,int) ;
 int FUNC_2 (struct drbd_config_context*,struct sk_buff*,struct genl_info*,int ) ;
 int FUNC_3 (struct drbd_config_context*) ;
 int FUNC_4 (int ,char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (int *,int ,int ,struct resource_info*,int ) ;
 int FUNC_9 (struct res_opts*,struct genl_info*) ;
 int FUNC_10 (struct resource_info*,int ) ;
 int VAR_8 ;
 int FUNC_11 (struct res_opts*) ;

int FUNC_12(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct drbd_connection *VAR_11;
 struct drbd_config_context VAR_12;
 enum drbd_ret_code VAR_13;
 struct res_opts VAR_14;
 int VAR_15;

 VAR_13 = FUNC_2(&VAR_12, VAR_9, VAR_10, 0);
 if (!VAR_12.reply_skb)
  return VAR_13;
 if (VAR_13 != VAR_6)
  goto out;

 FUNC_11(&VAR_14);
 VAR_15 = FUNC_9(&VAR_14, VAR_10);
 if (VAR_15 && VAR_15 != -VAR_0) {
  VAR_13 = VAR_2;
  FUNC_4(VAR_12.reply_skb, FUNC_5(VAR_15));
  goto out;
 }

 VAR_13 = FUNC_3(&VAR_12);
 if (VAR_13 != VAR_6)
  goto out;

 if (VAR_12.resource) {
  if (VAR_10->nlhdr->nlmsg_flags & VAR_4) {
   VAR_13 = VAR_1;
   FUNC_4(VAR_12.reply_skb, "resource exists");
  }

  goto out;
 }


 FUNC_6(&VAR_8);
 VAR_11 = FUNC_0(VAR_12.resource_name, &VAR_14);
 FUNC_7(&VAR_8);

 if (VAR_11) {
  struct resource_info VAR_16;

  FUNC_6(&VAR_7);
  FUNC_10(&VAR_16, VAR_11->resource);
  FUNC_8(((void*)0), 0, VAR_11->resource,
          &VAR_16, VAR_5);
  FUNC_7(&VAR_7);
 } else
  VAR_13 = VAR_3;

out:
 FUNC_1(&VAR_12, VAR_10, VAR_13);
 return 0;
}
