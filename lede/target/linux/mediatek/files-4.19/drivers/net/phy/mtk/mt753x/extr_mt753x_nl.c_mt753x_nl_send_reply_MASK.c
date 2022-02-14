
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genlmsghdr {int dummy; } ;
struct genl_info {int dummy; } ;


 void* FUNC_0 (struct genlmsghdr*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 struct genlmsghdr* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct genlmsghdr *VAR_2 = FUNC_3(FUNC_4(VAR_0));
 void *VAR_3 = FUNC_0(VAR_2);


 FUNC_1(VAR_0, VAR_3);


 return FUNC_2(VAR_0, VAR_1);
}
