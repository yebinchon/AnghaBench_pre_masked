
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_callback {int* args; TYPE_1__* nlh; int skb; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int portid; } ;
struct TYPE_3__ {int nlmsg_seq; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ib_device*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_3,
     struct sk_buff *VAR_4,
     struct netlink_callback *VAR_5,
     unsigned int VAR_6)
{
 int VAR_7 = VAR_5->args[0];
 struct nlmsghdr *VAR_8;

 if (VAR_6 < VAR_7)
  return 0;

 VAR_8 = FUNC_5(VAR_4, FUNC_0(VAR_5->skb).portid, VAR_5->nlh->nlmsg_seq,
   FUNC_1(VAR_2, VAR_1),
   0, VAR_0);

 if (FUNC_2(VAR_4, VAR_3)) {
  FUNC_3(VAR_4, VAR_8);
  goto out;
 }
 FUNC_4(VAR_4, VAR_8);

 VAR_6++;

out:
 VAR_5->args[0] = VAR_6;
 return VAR_4->len;
}
