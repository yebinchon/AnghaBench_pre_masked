
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_skb_parms {int dummy; } ;
struct cn_msg {int len; int ack; int seq; scalar_t__ data; } ;
typedef enum proc_cn_mcast_op { ____Placeholder_proc_cn_mcast_op } proc_cn_mcast_op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct netlink_skb_parms*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_3 ;
 int * FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct cn_msg *VAR_7,
         struct netlink_skb_parms *VAR_8)
{
 enum proc_cn_mcast_op *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (VAR_7->len != sizeof(*VAR_9))
  return;






 if ((FUNC_4() != &VAR_5) ||
     (FUNC_5(VAR_3) != &VAR_4))
  return;


 if (!FUNC_0(VAR_8, &VAR_5, VAR_0)) {
  VAR_10 = VAR_2;
  goto out;
 }

 VAR_9 = (enum proc_cn_mcast_op *)VAR_7->data;
 switch (*VAR_9) {
 case 128:
  FUNC_2(&VAR_6);
  break;
 case 129:
  FUNC_1(&VAR_6);
  break;
 default:
  VAR_10 = VAR_1;
  break;
 }

out:
 FUNC_3(VAR_10, VAR_7->seq, VAR_7->ack);
}
