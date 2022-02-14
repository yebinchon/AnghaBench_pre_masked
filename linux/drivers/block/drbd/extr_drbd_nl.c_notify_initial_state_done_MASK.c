
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_genlmsghdr {unsigned int minor; int ret_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct drbd_genlmsghdr*) ;
 struct drbd_genlmsghdr* FUNC_1 (struct sk_buff*,int ,unsigned int,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_5, unsigned int VAR_6)
{
 struct drbd_genlmsghdr *VAR_7;
 int VAR_8;

 VAR_8 = -VAR_1;
 VAR_7 = FUNC_1(VAR_5, 0, VAR_6, &VAR_4, 0, VAR_0);
 if (!VAR_7)
  goto nla_put_failure;
 VAR_7->minor = -1U;
 VAR_7->ret_code = VAR_3;
 if (FUNC_2(VAR_5, VAR_2))
  goto nla_put_failure;
 FUNC_0(VAR_5, VAR_7);
 return;

nla_put_failure:
 FUNC_3(VAR_5);
 FUNC_4("Error %d sending event. Event seq:%u\n", VAR_8, VAR_6);
}
