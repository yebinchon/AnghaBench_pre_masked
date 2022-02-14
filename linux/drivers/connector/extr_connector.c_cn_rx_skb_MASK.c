
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct cn_msg {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2)
{
 struct nlmsghdr *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2->len >= VAR_1) {
  VAR_3 = FUNC_2(VAR_2);
  VAR_4 = FUNC_3(VAR_3);

  if (VAR_4 < (int)sizeof(struct cn_msg) ||
      VAR_2->len < VAR_3->nlmsg_len ||
      VAR_4 > VAR_0)
   return;

  VAR_5 = FUNC_0(FUNC_4(VAR_2));
  if (VAR_5 < 0)
   FUNC_1(VAR_2);
 }
}
