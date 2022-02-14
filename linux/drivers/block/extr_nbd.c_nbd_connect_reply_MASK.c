
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 void* FUNC_2 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct genl_info *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(FUNC_5(sizeof(u32)), VAR_0);
 if (!VAR_6)
  return;
 VAR_7 = FUNC_2(VAR_6, VAR_4, &VAR_3, 0,
         VAR_2);
 if (!VAR_7) {
  FUNC_6(VAR_6);
  return;
 }
 VAR_8 = FUNC_4(VAR_6, VAR_1, VAR_5);
 if (VAR_8) {
  FUNC_6(VAR_6);
  return;
 }
 FUNC_0(VAR_6, VAR_7);
 FUNC_3(VAR_6, VAR_4);
}
