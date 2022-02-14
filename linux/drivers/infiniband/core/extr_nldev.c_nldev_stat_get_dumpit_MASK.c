
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int nlh; } ;


 int VAR_0 ;
 int VAR_1 ;

 size_t VAR_2 ;
 int FUNC_0 (struct nlattr*) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,struct netlink_callback*) ;
 int FUNC_2 (int ,int ,struct nlattr**,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
     struct netlink_callback *VAR_5)
{
 struct nlattr *VAR_6[VAR_1];
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->nlh, 0, VAR_6, VAR_1 - 1,
     VAR_3, ((void*)0));
 if (VAR_7 || !VAR_6[VAR_2])
  return -VAR_0;

 switch (FUNC_0(VAR_6[VAR_2])) {
 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_5);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
