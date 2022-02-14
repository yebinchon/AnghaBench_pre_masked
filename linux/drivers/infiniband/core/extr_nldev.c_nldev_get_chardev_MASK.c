
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ib_device {int dummy; } ;
struct ib_client_nl_info {int port; TYPE_1__* cdev; int abi; struct sk_buff* nl_msg; } ;
typedef int client_name ;
struct TYPE_5__ {int portid; } ;
struct TYPE_4__ {int devt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ) ;
 int VAR_15 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 struct ib_device* FUNC_4 (int ,void*) ;
 int FUNC_5 (struct ib_device*) ;
 int FUNC_6 (struct ib_device*,char*,struct ib_client_nl_info*) ;
 void* FUNC_7 (struct nlattr*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_10 (char*,struct nlattr*,int) ;
 int VAR_16 ;
 int FUNC_11 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct nlmsghdr*,int ,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct nlmsghdr* FUNC_15 (struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct ib_device*,int) ;
 int FUNC_18 (int ,struct sk_buff*,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_17, struct nlmsghdr *VAR_18,
        struct netlink_ext_ack *VAR_19)
{
 struct nlattr *VAR_20[VAR_11];
 char VAR_21[VAR_9];
 struct ib_client_nl_info VAR_22 = {};
 struct ib_device *VAR_23 = ((void*)0);
 struct sk_buff *VAR_24;
 u32 VAR_25;
 int VAR_26;

 VAR_26 = FUNC_14(VAR_18, 0, VAR_20, VAR_11 - 1, VAR_16,
     VAR_19);
 if (VAR_26 || !VAR_20[VAR_8])
  return -VAR_0;

 FUNC_10(VAR_21, VAR_20[VAR_8],
      sizeof(VAR_21));

 if (VAR_20[VAR_10]) {
  VAR_25 = FUNC_7(VAR_20[VAR_10]);
  VAR_23 = FUNC_4(FUNC_19(VAR_17->sk), VAR_25);
  if (!VAR_23)
   return -VAR_0;

  if (VAR_20[VAR_13]) {
   VAR_22.port = FUNC_7(VAR_20[VAR_13]);
   if (!FUNC_17(VAR_23, VAR_22.port)) {
    VAR_26 = -VAR_0;
    goto out_put;
   }
  } else {
   VAR_22.port = -1;
  }
 } else if (VAR_20[VAR_13]) {
  return -VAR_0;
 }

 VAR_24 = FUNC_13(VAR_4, VAR_3);
 if (!VAR_24) {
  VAR_26 = -VAR_2;
  goto out_put;
 }
 VAR_18 = FUNC_15(VAR_24, FUNC_0(VAR_17).portid, VAR_18->nlmsg_seq,
   FUNC_1(VAR_15,
      VAR_14),
   0, 0);

 VAR_22.nl_msg = VAR_24;
 VAR_26 = FUNC_6(VAR_23, VAR_21, &VAR_22);
 if (VAR_26)
  goto out_nlmsg;

 VAR_26 = FUNC_9(VAR_24, VAR_5,
    FUNC_3(VAR_22.cdev->devt),
    VAR_12);
 if (VAR_26)
  goto out_data;
 VAR_26 = FUNC_9(VAR_24, VAR_6, VAR_22.abi,
    VAR_12);
 if (VAR_26)
  goto out_data;
 if (FUNC_8(VAR_24, VAR_7,
      FUNC_2(VAR_22.cdev))) {
  VAR_26 = -VAR_1;
  goto out_data;
 }

 FUNC_11(VAR_24, VAR_18);
 FUNC_16(VAR_22.cdev);
 if (VAR_23)
  FUNC_5(VAR_23);
 return FUNC_18(FUNC_19(VAR_17->sk), VAR_24, FUNC_0(VAR_17).portid);

out_data:
 FUNC_16(VAR_22.cdev);
out_nlmsg:
 FUNC_12(VAR_24);
out_put:
 if (VAR_23)
  FUNC_5(VAR_23);
 return VAR_26;
}
