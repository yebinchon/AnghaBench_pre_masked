
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct genl_info {int dummy; } ;
struct drbd_config_context {int reply_skb; TYPE_3__* reply_dh; TYPE_2__* resource; TYPE_1__* connection; TYPE_4__* device; } ;
struct TYPE_8__ {int kref; } ;
struct TYPE_7__ {int ret_code; } ;
struct TYPE_6__ {int kref; } ;
struct TYPE_5__ {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct genl_info*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct drbd_config_context *VAR_4,
 struct genl_info *VAR_5, int VAR_6)
{
 if (VAR_4->device) {
  FUNC_1(&VAR_4->device->kref, VAR_2);
  VAR_4->device = ((void*)0);
 }
 if (VAR_4->connection) {
  FUNC_1(&VAR_4->connection->kref, &VAR_1);
  VAR_4->connection = ((void*)0);
 }
 if (VAR_4->resource) {
  FUNC_1(&VAR_4->resource->kref, VAR_3);
  VAR_4->resource = ((void*)0);
 }

 if (!VAR_4->reply_skb)
  return -VAR_0;

 VAR_4->reply_dh->ret_code = VAR_6;
 FUNC_0(VAR_4->reply_skb, VAR_5);
 return 0;
}
