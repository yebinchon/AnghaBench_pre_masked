
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(int VAR_4)
{
 struct sk_buff *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(FUNC_5(sizeof(u32)), VAR_0);
 if (!VAR_5)
  return;
 VAR_6 = FUNC_3(VAR_5, 0, 0, &VAR_3, 0,
         VAR_2);
 if (!VAR_6) {
  FUNC_6(VAR_5);
  return;
 }
 VAR_7 = FUNC_4(VAR_5, VAR_1, VAR_4);
 if (VAR_7) {
  FUNC_6(VAR_5);
  return;
 }
 FUNC_0(VAR_5, VAR_6);
 FUNC_1(&VAR_3, VAR_5, 0, 0, VAR_0);
}
