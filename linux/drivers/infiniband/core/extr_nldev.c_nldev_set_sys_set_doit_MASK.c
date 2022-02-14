
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
      struct netlink_ext_ack *VAR_6)
{
 struct nlattr *VAR_7[VAR_1];
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, 0, VAR_7, VAR_1 - 1,
     VAR_3, VAR_6);
 if (VAR_9 || !VAR_7[VAR_2])
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7[VAR_2]);

 if (VAR_8 > 1)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 return VAR_9;
}
