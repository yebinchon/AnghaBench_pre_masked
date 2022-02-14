
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
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct nlmsghdr*,int ,struct nlattr**,int,int ) ;
 int FUNC_2 (struct nlattr*) ;
 struct genlmsghdr* FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct nl_msg*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct nl_msg *VAR_5, void *VAR_6)
{
 struct nlmsghdr *VAR_7 = FUNC_4(VAR_5);
 struct genlmsghdr *VAR_8 = FUNC_3(VAR_7);
 struct nlattr *VAR_9[VAR_0];

 FUNC_1(VAR_7, 0, VAR_9, VAR_0, VAR_4);

 switch (VAR_8->cmd) {
 case 128:
  FUNC_5("Got a offloaded message\n");
  FUNC_0(FUNC_2(VAR_9[VAR_1]));
  return VAR_2;
 case 129:
  FUNC_5("Got a done message\n");
  FUNC_0(FUNC_2(VAR_9[VAR_1]));
  return VAR_2;
 }

 return VAR_3;
}
