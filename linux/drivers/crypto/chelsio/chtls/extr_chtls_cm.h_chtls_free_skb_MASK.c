
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (struct sk_buff*,int *) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_2(VAR_1, ((void*)0));
 FUNC_1(VAR_1, &VAR_0->sk_receive_queue);
 FUNC_0(VAR_1);
}
