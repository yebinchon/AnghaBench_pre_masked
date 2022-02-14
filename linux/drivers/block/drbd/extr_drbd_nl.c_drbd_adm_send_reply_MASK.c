
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 FUNC_1(VAR_0, FUNC_0(FUNC_3(FUNC_4(VAR_0))));
 if (FUNC_2(VAR_0, VAR_1))
  FUNC_5("error sending genl reply\n");
}
