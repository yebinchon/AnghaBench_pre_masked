
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int device_cap_flags; } ;
struct ib_device {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct ib_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct nlattr*) ;
 int VAR_4 ;
 int FUNC_4 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 struct nlattr *VAR_8[VAR_3];
 struct ib_device *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_6, 0, VAR_8, VAR_3 - 1,
         VAR_4, VAR_7);
 if (VAR_11 || !VAR_8[VAR_2])
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_8[VAR_2]);
 VAR_9 = FUNC_0(FUNC_5(VAR_5->sk), VAR_10);
 if (!VAR_9)
  return -VAR_0;

 if (!(VAR_9->attrs.device_cap_flags & VAR_1)) {
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 FUNC_2(VAR_9);
 return 0;
}
