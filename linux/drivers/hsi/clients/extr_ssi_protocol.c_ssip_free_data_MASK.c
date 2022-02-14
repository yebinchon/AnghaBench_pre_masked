
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hsi_msg {int * destructor; struct sk_buff* context; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hsi_msg*) ;
 int FUNC_2 (char*,struct hsi_msg*,struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct hsi_msg *VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = VAR_0->context;
 FUNC_2("free data: msg %p context %p skb %p\n", VAR_0, VAR_0->context,
        VAR_1);
 VAR_0->destructor = ((void*)0);
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
