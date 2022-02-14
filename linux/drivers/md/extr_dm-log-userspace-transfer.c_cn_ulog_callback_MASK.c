
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_skb_parms {int dummy; } ;
struct dm_ulog_request {int dummy; } ;
struct cn_msg {int len; int seq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cn_msg*,struct dm_ulog_request*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cn_msg *VAR_2, struct netlink_skb_parms *VAR_3)
{
 struct dm_ulog_request *VAR_4 = (struct dm_ulog_request *)(VAR_2 + 1);

 if (!FUNC_1(VAR_0))
  return;

 FUNC_3(&VAR_1);
 if (VAR_2->len == 0)
  FUNC_2(VAR_2, ((void*)0));
 else if (VAR_2->len < sizeof(*VAR_4))
  FUNC_0("Incomplete message received (expected %u, got %u): [%u]",
        (unsigned)sizeof(*VAR_4), VAR_2->len, VAR_2->seq);
 else
  FUNC_2(((void*)0), VAR_4);
 FUNC_4(&VAR_1);
}
