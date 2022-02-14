
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct crypto_user_alg {int dummy; } ;
struct crypto_dump_info {int nlmsg_flags; int nlmsg_seq; struct sk_buff* out_skb; struct sk_buff* in_skb; } ;
struct crypto_alg {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct crypto_alg*,struct crypto_user_alg*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct crypto_user_alg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct crypto_alg *VAR_2,
        struct crypto_dump_info *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->in_skb;
 struct sk_buff *VAR_5 = VAR_3->out_skb;
 struct nlmsghdr *VAR_6;
 struct crypto_user_alg *VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_5(VAR_5, FUNC_0(VAR_4).portid, VAR_3->nlmsg_seq,
   VAR_0, sizeof(*VAR_7), VAR_3->nlmsg_flags);
 if (!VAR_6) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_7 = FUNC_3(VAR_6);

 VAR_8 = FUNC_1(VAR_2, VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_5, VAR_6);
  goto out;
 }

 FUNC_4(VAR_5, VAR_6);

out:
 return VAR_8;
}
