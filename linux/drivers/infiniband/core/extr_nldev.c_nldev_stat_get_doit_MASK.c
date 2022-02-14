
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 size_t VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int VAR_3 ;
 int FUNC_1 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*,struct netlink_ext_ack*,struct nlattr**) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*,struct netlink_ext_ack*,struct nlattr**) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
          struct netlink_ext_ack *VAR_6)
{
 struct nlattr *VAR_7[VAR_1];
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, 0, VAR_7, VAR_1 - 1,
     VAR_3, VAR_6);
 if (VAR_8)
  return -VAR_0;

 if (!VAR_7[VAR_2])
  return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

 switch (FUNC_0(VAR_7[VAR_2])) {
 case 128:
  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  break;

 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
