
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;
struct genlmsghdr {int cmd; } ;


 int VAR_0 ;
 size_t VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nlmsghdr*,int ,struct nlattr**,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct nlattr*) ;
 struct genlmsghdr* FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct nl_msg*) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(struct nl_msg *VAR_6, void *VAR_7)
{
 struct nlmsghdr *VAR_8 = FUNC_4(VAR_6);
 struct genlmsghdr *VAR_9 = FUNC_3(VAR_8);
 struct nlattr *VAR_10[(VAR_0+1)];

 FUNC_0(VAR_8, VAR_2, VAR_10, VAR_0, VAR_5);

 switch (VAR_9->cmd) {
 case 129:
  FUNC_5("Acceleration successful:\n");
  FUNC_1(FUNC_2(VAR_10[VAR_1]));
  return VAR_3;
 case 128:
  FUNC_5("Connection is closed:\n");
  FUNC_1(FUNC_2(VAR_10[VAR_1]));
  return VAR_3;
 default:
  FUNC_5("nl classifier received unknow message %d\n", VAR_9->cmd);
 }

 return VAR_4;
}
