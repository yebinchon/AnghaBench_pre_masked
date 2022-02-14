
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct net {int crypto_nlsk; } ;
struct crypto_user_alg {int cru_driver_name; int cru_name; } ;
struct crypto_dump_info {scalar_t__ nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; struct sk_buff* in_skb; } ;
struct crypto_alg {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 struct crypto_alg* FUNC_1 (struct crypto_user_alg*,int ) ;
 int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 (struct crypto_alg*,struct crypto_dump_info*) ;
 struct crypto_user_alg* FUNC_4 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct sk_buff*,int ) ;
 int FUNC_7 (int ) ;
 struct net* FUNC_8 (int ) ;

int FUNC_9(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6,
        struct nlattr **VAR_7)
{
 struct net *VAR_8 = FUNC_8(VAR_5->sk);
 struct crypto_user_alg *VAR_9 = FUNC_4(VAR_6);
 struct crypto_alg *VAR_10;
 struct sk_buff *VAR_11;
 struct crypto_dump_info VAR_12;
 int VAR_13;

 if (!FUNC_7(VAR_9->cru_name) || !FUNC_7(VAR_9->cru_driver_name))
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9, 0);
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = -VAR_2;
 VAR_11 = FUNC_5(VAR_4, VAR_3);
 if (!VAR_11)
  goto drop_alg;

 VAR_12.in_skb = VAR_5;
 VAR_12.out_skb = VAR_11;
 VAR_12.nlmsg_seq = VAR_6->nlmsg_seq;
 VAR_12.nlmsg_flags = 0;

 VAR_13 = FUNC_3(VAR_10, &VAR_12);

drop_alg:
 FUNC_2(VAR_10);

 if (VAR_13)
  return VAR_13;

 return FUNC_6(VAR_8->crypto_nlsk, VAR_11, FUNC_0(VAR_5).portid);
}
